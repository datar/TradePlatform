/**********************************************************************
Դ��������: sdk_demo.cpp
�������Ȩ: �������ӹɷ����޹�˾
ϵͳ����  : 06���ڻ�ϵͳ
ģ������  : �����ڻ���Ϣ���Ľӿ�
����˵��  : HsFutuSDKʾ������
��    ��  : xdx
��������  : 20110315
��    ע  : HsFutuSDKʾ������
�޸���Ա  ��
�޸�����  ��
�޸�˵��  : 20110315 ����
**********************************************************************/
//#include <vld.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <cstring>
#include <windows.h>

#include "Constants.h"

#include "HSFutures.h"
#include "HSUtils.h"
#include "CTimeCounter.h"
#include "TimeInfo.h"
#include "CallBack.h"
#include "TradeSystem.h"

#include "FileUtils.h"

#include "SyncOrder.h"

using namespace  std;

//������ں���
void test_case(IFuMessage* lpReqMsg);


int checkVersion(){
    cout<<"************************************************************"<<endl;
	cout<<"***                                                      ***"<<endl;
	cout<<"***    HsFutuSDK DEMO by HUNDSUN ("<<__DATE__<<"-"<<__TIME__<<")  ***"<<endl;
    cout<<"***              SDK Version:0x"<<hex<<GetSDKVersion()<<dec<<"                  ***"<<endl;
	cout<<"***                                                      ***"<<endl;
	cout<<"************************************************************"<<endl;
	cout<<"ProcessID:"<<GetCurrentProcessId()<<" ThreadID:"<<GetCurrentThreadId()<<endl;

	//���dll�İ汾�ǽӿ������İ汾����Ϸ�
	if(HSFUSDK_VERSION != GetSDKVersion()){
		cout<<"ע�⣺�ӿڵ�ͷ�ļ��汾[0x"<<hex<<HSFUSDK_VERSION<<"]���汾[0x"<<GetSDKVersion()<<"]������,���ܵ��¼����Դ���!"<<endl;
		return FATAL_ERROR_CODE;
	}
    return 0;
}

 IHsFutuComm* getYongAnHSCommInstance(){
    IHsFutuComm* lpComm = NewFuCommObj(NULL);//FUTU_SYSTEM_V06,FUTU_SYSTEM_UFT
    lpComm->AddRef();
	//���ò���
	lpComm->SetConfig("futu","server",DEFAULT_LOGIN_HOST_PORT);
 
	lpComm->SetConfig("futu","biz_license_str",DEFAULT_LICENSE_STR);
    if(0 !=	lpComm->SetConfig("futu","comm_license_file",DEFAULT_LICENSE_FILENAME)){
        cout<<"license file failed"<<endl;
    }
	lpComm->SetConfig("futu","entrust_type","1");//ί�з�ʽ
    return lpComm;
}

int initEnvirenment(IHsFutuComm* lpComm, CMyCallBack* callback){
    int iRet = 0;
	if(0 != (iRet = lpComm->Init(callback))){
		cout<<"��ʼ��ʧ��.iRet="<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
		lpComm->Release();
		return FATAL_ERROR_CODE;
	}

	//����(��Ϣ����)
	if(0 != (iRet = lpComm->Start(SERVICE_TYPE_QUOTE))){
		cout<<"����ʧ��.iRet="<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
		lpComm->Release();
		return FATAL_ERROR_CODE;
	}

	//����(����) 
	if(0 != (iRet = lpComm->Start(SERVICE_TYPE_TRADE))){
		cout<<"����ʧ��.iRet="<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
		lpComm->Release();
		return FATAL_ERROR_CODE;
	}

	//��½
	if(0 != (iRet = lpComm->DoLogin(DEFAULT_LOGIN_USERNAME,DEFAULT_LOGIN_PASSWORD,1))){
		cout<<"��½ʧ��.iRet:"<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
		lpComm->Release();
		return FATAL_ERROR_CODE;
	}
    return 0;
}

int getMarketPrice(IHsFutuComm* lpComm, string contract, string username, double& bid, double& ask, int& bidVolume, int& askVolume){
    //��ѯ
    IFuMessage* lpGetSingleQuoteReqMsg = NewFuMessage(MSG_TYPE_GET_MARKET_DATA, MSG_MODE_REQUEST); //ί���µ�
    IFuMessage* lpGetSingleQuoteAnsMsg = NewFuMessage();     //������Ϣ(�޹���Ϣ���ͺ�ģʽ,SDK�����������)

    //����������(�ֶ�˳���޹�,�ظ������ֶ��򸲸���ֵ)
    IFuRecord* lpGetSingleQuoteRecord = lpGetSingleQuoteReqMsg->AddRecord();
    lpGetSingleQuoteRecord->SetString("fund_account",username.c_str());
    lpGetSingleQuoteRecord->SetString("futu_exch_type","F4");
    lpGetSingleQuoteRecord->SetString("contract_code", contract.c_str());
    lpGetSingleQuoteRecord->SetString("futures_account", username.c_str());
    lpGetSingleQuoteRecord->SetString("hedge_type", "0");

    int iRet = lpComm->SyncSendRecv(lpGetSingleQuoteReqMsg,lpGetSingleQuoteAnsMsg);
    //ShowFuMessage(lpGetSingleQuoteAnsMsg);
    int count = lpGetSingleQuoteAnsMsg->GetCount();
    int result = 0;
    if(count > 0){
        IFuRecord* msg = lpGetSingleQuoteAnsMsg->GetRecord(0);
        double lastPrice = msg->GetDouble("futu_last_price");
        bid = msg->GetDouble("buy_high_price");
        ask = msg->GetDouble("sale_low_price");
        bidVolume = msg->GetInt("buy_high_amount");
        askVolume = msg->GetInt("sale_low_amount");
        result = 0;
    }else{
        result = -1;
    }
    //�ͷ���Ϣ
    lpGetSingleQuoteReqMsg->Release();
    lpGetSingleQuoteAnsMsg->Release();
    return result;
}


int getMarketMakePrice(IHsFutuComm* lpComm, string contract, double& bid, double& ask, int& bidVolume, int& askVolume){
    //��ѯ
	IFuMessage* lpGetSingleQuoteReqMsg = NewFuMessage(MSG_TYPE_CHECK_CONTRACT_CODE, MSG_MODE_REQUEST); //ί���µ�
	IFuMessage* lpGetSingleQuoteAnsMsg = NewFuMessage();     //������Ϣ(�޹���Ϣ���ͺ�ģʽ,SDK�����������)

	//����������(�ֶ�˳���޹�,�ظ������ֶ��򸲸���ֵ)
	IFuRecord* lpGetSingleQuoteRecord = lpGetSingleQuoteReqMsg->AddRecord();
	lpGetSingleQuoteRecord->SetString("fund_account",DEFAULT_LOGIN_USERNAME);
	lpGetSingleQuoteRecord->SetString("futu_exch_type","F4");
	lpGetSingleQuoteRecord->SetString("contract_code", contract.c_str());
    lpGetSingleQuoteRecord->SetString("futures_account", "");
    lpGetSingleQuoteRecord->SetString("hedge_type", "0");
	//CTimeCounter t4;
	//t4.Start();
	//ͬ��������Ϣ
	int iRet = lpComm->SyncSendRecv(lpGetSingleQuoteReqMsg,lpGetSingleQuoteAnsMsg);
	//t4.Stop();
	//cout<<"ͬ��ί�к�ʱ:"<<":"<<t4.Elapse()<<endl;
	if(iRet != 0){
		//cout<<"ͬ��ί��ʧ��:iRet="<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
        return FATAL_ERROR_CODE;
	}else{
		//cout<<"ͬ��ί�гɹ�!"<<endl;
	}
	//ShowFuMessage(lpGetSingleQuoteAnsMsg);
    IFuRecord* msg = lpGetSingleQuoteAnsMsg->GetRecord(0);
    double lastPrice = msg->GetDouble("futu_last_price");
    double upLimit = msg->GetDouble("uplimited_price");
    double downLimit = msg->GetDouble("downlimited_price");
    double buyPrice = msg->GetDouble("buy_high_price");
    double sellPrice = msg->GetDouble("sale_low_price");

	//�ͷ���Ϣ
	lpGetSingleQuoteReqMsg->Release();
	lpGetSingleQuoteAnsMsg->Release();


    bid = lastPrice - 1;
    ask = lastPrice + 1;
    if(bid >= upLimit){
        ask = upLimit;
        bid = upLimit - 1;
    }
    if(ask <= downLimit){
        ask = downLimit + 1;
        bid = downLimit;
    }

    return 0;
}

int marketMake(){
    vector<char*> parameters;
    parameters.push_back(DEFAULT_LOGIN_USERNAME);
    parameters.push_back(DEFAULT_LOGIN_PASSWORD);
    loadConfig("Config.txt", parameters);
    
    if(FATAL_ERROR_CODE == checkVersion()){
        cout<<"Version Error, exit"<<endl;
        return FATAL_ERROR_CODE;
    }

	//�½�ͨ�Ŷ���
	IHsFutuComm* lpComm = getYongAnHSCommInstance();
	gAutoConnectHandleEvent = CreateEvent(NULL,TRUE,FALSE,NULL);
	//�����Զ������߳�
	HANDLE hThread = CreateThread(NULL,0,auto_connect,lpComm,0,NULL);

	//��ʼ���ӿڶ���
	CMyCallBack* callback = new CMyCallBack();
	if(FATAL_ERROR_CODE == initEnvirenment(lpComm, callback)){
        cout<<"init envirenment error"<<endl;
        return FATAL_ERROR_CODE;
    }

	vector<string> contracts;
    loadContracts("contract.txt", contracts);
    cout<<contracts.size();
    double bid, ask;
    int bidVolume, askVolume;

    vector<int> orderNos;

    int tmpNo;
    for(int i = 0; i < 360; i++){
        /*
        for(vector<int>::iterator it = orderNos.begin(); it != orderNos.end(); it++){
            if(FATAL_ERROR_CODE != (cancelSyncOrder(lpComm, *it))){
                orderNos.erase(it);
            }
        }
        */
        for(vector<string>::iterator it = contracts.begin(); it != contracts.end(); it++){
            if(FATAL_ERROR_CODE != getMarketMakePrice(lpComm, *it, bid, ask, bidVolume, askVolume)){
                tmpNo = sendSyncSingleOrder(lpComm,
                            DEFAULT_LOGIN_USERNAME,
                            DEFAULT_LOGIN_PASSWORD,
                            "F4",
                            "",
                            (*it).c_str(),
                            "1",
                            "1",
                            "0",
                            "0",
                            bid,
                            1,
                            "0");
                if(tmpNo > 0){
                    orderNos.push_back(tmpNo);
                }
                
                tmpNo = sendSyncSingleOrder(lpComm,
                            DEFAULT_LOGIN_USERNAME,
                            DEFAULT_LOGIN_PASSWORD,
                            "F4",
                            "",
                            (*it).c_str(),
                            "2",
                            "1",
                            "0",
                            "0",
                            ask,
                            1,
                            "0");
                if(tmpNo > 0){
                    orderNos.push_back(tmpNo);
                }
            }

        }
        Sleep(10000);
    }
	pause();
	
    
    
    //�˶��ǳ��ͷ���Դ
    cout<<"continue to exit!"<<endl;
	pause();
	lpComm->SubscribeRequest(NAType,CxlAll,ALLWWW);
    lpComm->DoLogout(DEFAULT_LOGIN_USERNAME);
	//lpComm->DoLogout("");
	//��ͣ�ȴ��ǳ����
	pause();


	//�ر��Զ������߳�
	gIsStop = true;
	SetEvent(gAutoConnectHandleEvent);
	WaitForSingleObject(hThread,INFINITE);
	CloseHandle(hThread);

    //�ر�ͨ������
	lpComm->Stop();
	//�ͷ�ͨ�Ŷ���
	lpComm->Release();
 
    

    return 0;
}

int run(){
	/*
	vector<char*> parameters;
    parameters.push_back(DEFAULT_LOGIN_USERNAME);
    parameters.push_back(DEFAULT_LOGIN_PASSWORD);
    loadConfig("Config.txt", parameters);
    */

	TradeServer server(DEFAULT_LOGIN_HOST_PORT, DEFAULT_LICENSE_STR, DEFAULT_LICENSE_FILENAME);
	server.start(DEFAULT_LOGIN_USERNAME, DEFAULT_LOGIN_PASSWORD, new CMyCallBack());
	IHsFutuComm* lpComm = server.getServerInstance();
	

    if(FATAL_ERROR_CODE == checkVersion()){
        cout<<"Version Error, exit"<<endl;
        return FATAL_ERROR_CODE;
    }

	/*
	//�½�ͨ�Ŷ���
	IHsFutuComm* lpComm = getYongAnHSCommInstance();
	gAutoConnectHandleEvent = CreateEvent(NULL,TRUE,FALSE,NULL);
	//�����Զ������߳�
	HANDLE hThread = CreateThread(NULL,0,auto_connect,lpComm,0,NULL);

	//��ʼ���ӿڶ���
	CMyCallBack* callback = new CMyCallBack();
	if(FATAL_ERROR_CODE == initEnvirenment(lpComm, callback)){
        cout<<"init envirenment error"<<endl;
        return FATAL_ERROR_CODE;
    }
	*/


	//����һ��������߻ر�
	lpComm->SubscribeRequest(SingleCode,Subscription,ALLWWW);
	//lpComm->SubscribeRequest(SingleCode,Subscription,"CF205");
	lpComm->SubscribeRequest(RspReport,Subscription,DEFAULT_LOGIN_USERNAME);
	//lpComm->SubscribeRequest(CombinCode,Subscription,"ALLWWW");
    //lpComm->SubscribeRequest(OnlineMsg,Subscription,USER_NAME);

	
    
    //release resource
    //int r = sendSyncSingleOrder(lpComm);
	pause();
	
    
    
    //�˶��ǳ��ͷ���Դ
    cout<<"continue to exit!"<<endl;
	pause();

	char filename[64];
	TimeInfo::getNowTimeStr(filename);
	strcat(filename, ".txt");
	Quote.bak2File("QuoteSave.txt");
	cout << "Quote has been saved!" << endl;

	lpComm->SubscribeRequest(NAType,CxlAll,ALLWWW);
    lpComm->DoLogout(DEFAULT_LOGIN_USERNAME);
	//lpComm->DoLogout("");
	//��ͣ�ȴ��ǳ����
	pause();
	server.close();

    return 0;
}
/*
int test(){
    vector<char*> parameters;
    parameters.push_back(DEFAULT_LOGIN_USERNAME);
    parameters.push_back(DEFAULT_LOGIN_PASSWORD);
    loadConfig("Config.txt", parameters);

    TradeServer server(DEFAULT_LOGIN_HOST_PORT, DEFAULT_LICENSE_STR, DEFAULT_LICENSE_FILENAME);
    server.start(DEFAULT_LOGIN_USERNAME, DEFAULT_LOGIN_PASSWORD, new CMyCallBack());
    server.getServerInstance()->SubscribeRequest(SingleCode,Subscription,ALLWWW);
    server.getServerInstance()->SubscribeRequest(RspReport,Subscription,DEFAULT_LOGIN_USERNAME);
    pause();

    int total = 0;
    do{
        total = 0;
        server.refreshPosition();

        cout<<"long position"<<server.longPosition.size()<<endl;
        cout<<"short position"<<server.shortPosition.size()<<endl;

        for(map<string, int>::iterator it = server.longPosition.begin(); it != server.longPosition.end(); it++){
            int pos = (*it).second;

            total += pos;
            double bid,ask;
            int bidVol,askVol;
            if(0 > getMarketPrice(server.getServerInstance(), (*it).first, server.loginName, bid,ask,bidVol,askVol)){
                continue;
            }

            int lots = (bidVol>pos)?pos:bidVol;

            if(lots == 0) continue;
            cout<<"close "<<(*it).first<<" "<<lots<<" of "<<pos<<endl;
            sendSyncSingleOrder(server.getServerInstance(),
                server.loginName,
                server.password,
                "F4",
                //server.loginName,
                "",
                (*it).first.c_str(),
                "2",
                "2",
                "0",
                "0",
                bid,
                lots,
                "0");
            
        }
    
        for(map<string, int>::iterator it = server.shortPosition.begin(); it != server.shortPosition.end(); it++){
            int pos = (*it).second;
            total += pos;
            double bid,ask;
            int bidVol,askVol;
            if( 0 > getMarketPrice(server.getServerInstance(), (*it).first, server.loginName, bid,ask,bidVol,askVol)){
                continue;
            }
            int lots = (askVol>pos)?pos:askVol;
            if(lots == 0) continue;
            cout<<"close "<<(*it).first<<" "<<lots<<" of "<<pos<<endl;
            sendSyncSingleOrder(server.getServerInstance(),
                server.loginName,
                server.password,
                "F4",
                //server.loginName,
                "",
                (*it).first.c_str(),
                "1",
                "2",
                "0",
                "0",
                ask,
                lots,
                "0");
            
        }
        Sleep(3000);
    }while(total != 0);

    //cout<<server.longPosition.size()<<endl;
    //cout<<server.shortPosition.size()<<endl;
    pause();
    server.close();
    return 0;
}
*/
int showPosition(){ 
    //vector<char*> parameters;
    //parameters.push_back(DEFAULT_LOGIN_USERNAME);
    //parameters.push_back(DEFAULT_LOGIN_PASSWORD);

    //loadConfig("Config.txt", parameters);
    //cout<<DEFAULT_LOGIN_USERNAME<<"::"<<DEFAULT_LOGIN_PASSWORD<<endl;
    TradeServer server(DEFAULT_LOGIN_HOST_PORT, DEFAULT_LICENSE_STR, DEFAULT_LICENSE_FILENAME);
    server.start(DEFAULT_LOGIN_USERNAME, DEFAULT_LOGIN_PASSWORD, new CMyCallBack());

    //server.getServerInstance()->SubscribeRequest(SingleCode,Subscription,ALLWWW);

    server.getServerInstance()->SubscribeRequest(RspReport,Subscription,DEFAULT_LOGIN_USERNAME);

    Sleep(5000);

    //server.refreshPosition();
    //showPosition(server.positionManager);
    server.checkContractCode();
        
    pause();
    Sleep(20000);
    server.close();
    Messages.log2File();
    return 0;
}

int main(void){
    run();
    return 0;
}


