/**********************************************************************
源程序名称: sdk_demo.cpp
软件著作权: 恒生电子股份有限公司
系统名称  : 06版期货系统
模块名称  : 恒生期货消息订阅接口
功能说明  : HsFutuSDK示例程序
作    者  : xdx
开发日期  : 20110315
备    注  : HsFutuSDK示例程序
修改人员  ：
修改日期  ：
修改说明  : 20110315 创建
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

//测试入口函数
void test_case(IFuMessage* lpReqMsg);


int checkVersion(){
    cout<<"************************************************************"<<endl;
	cout<<"***                                                      ***"<<endl;
	cout<<"***    HsFutuSDK DEMO by HUNDSUN ("<<__DATE__<<"-"<<__TIME__<<")  ***"<<endl;
    cout<<"***              SDK Version:0x"<<hex<<GetSDKVersion()<<dec<<"                  ***"<<endl;
	cout<<"***                                                      ***"<<endl;
	cout<<"************************************************************"<<endl;
	cout<<"ProcessID:"<<GetCurrentProcessId()<<" ThreadID:"<<GetCurrentThreadId()<<endl;

	//检查dll的版本是接口声明的版本相符合否
	if(HSFUSDK_VERSION != GetSDKVersion()){
		cout<<"注意：接口的头文件版本[0x"<<hex<<HSFUSDK_VERSION<<"]与库版本[0x"<<GetSDKVersion()<<"]不符合,可能导致兼容性错误!"<<endl;
		return FATAL_ERROR_CODE;
	}
    return 0;
}

 IHsFutuComm* getYongAnHSCommInstance(){
    IHsFutuComm* lpComm = NewFuCommObj(NULL);//FUTU_SYSTEM_V06,FUTU_SYSTEM_UFT
    lpComm->AddRef();
	//设置参数
	lpComm->SetConfig("futu","server",DEFAULT_LOGIN_HOST_PORT);
 
	lpComm->SetConfig("futu","biz_license_str",DEFAULT_LICENSE_STR);
    if(0 !=	lpComm->SetConfig("futu","comm_license_file",DEFAULT_LICENSE_FILENAME)){
        cout<<"license file failed"<<endl;
    }
	lpComm->SetConfig("futu","entrust_type","1");//委托方式
    return lpComm;
}

int initEnvirenment(IHsFutuComm* lpComm, CMyCallBack* callback){
    int iRet = 0;
	if(0 != (iRet = lpComm->Init(callback))){
		cout<<"初始化失败.iRet="<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
		lpComm->Release();
		return FATAL_ERROR_CODE;
	}

	//启动(消息中心)
	if(0 != (iRet = lpComm->Start(SERVICE_TYPE_QUOTE))){
		cout<<"启动失败.iRet="<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
		lpComm->Release();
		return FATAL_ERROR_CODE;
	}

	//启动(交易) 
	if(0 != (iRet = lpComm->Start(SERVICE_TYPE_TRADE))){
		cout<<"启动失败.iRet="<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
		lpComm->Release();
		return FATAL_ERROR_CODE;
	}

	//登陆
	if(0 != (iRet = lpComm->DoLogin(DEFAULT_LOGIN_USERNAME,DEFAULT_LOGIN_PASSWORD,1))){
		cout<<"登陆失败.iRet:"<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
		lpComm->Release();
		return FATAL_ERROR_CODE;
	}
    return 0;
}

int getMarketPrice(IHsFutuComm* lpComm, string contract, string username, double& bid, double& ask, int& bidVolume, int& askVolume){
    //查询
    IFuMessage* lpGetSingleQuoteReqMsg = NewFuMessage(MSG_TYPE_GET_MARKET_DATA, MSG_MODE_REQUEST); //委托下单
    IFuMessage* lpGetSingleQuoteAnsMsg = NewFuMessage();     //接收消息(无关消息类型和模式,SDK会置相关类型)

    //打包请求参数(字段顺序无关,重复设置字段则覆盖其值)
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
    //释放消息
    lpGetSingleQuoteReqMsg->Release();
    lpGetSingleQuoteAnsMsg->Release();
    return result;
}


int getMarketMakePrice(IHsFutuComm* lpComm, string contract, double& bid, double& ask, int& bidVolume, int& askVolume){
    //查询
	IFuMessage* lpGetSingleQuoteReqMsg = NewFuMessage(MSG_TYPE_CHECK_CONTRACT_CODE, MSG_MODE_REQUEST); //委托下单
	IFuMessage* lpGetSingleQuoteAnsMsg = NewFuMessage();     //接收消息(无关消息类型和模式,SDK会置相关类型)

	//打包请求参数(字段顺序无关,重复设置字段则覆盖其值)
	IFuRecord* lpGetSingleQuoteRecord = lpGetSingleQuoteReqMsg->AddRecord();
	lpGetSingleQuoteRecord->SetString("fund_account",DEFAULT_LOGIN_USERNAME);
	lpGetSingleQuoteRecord->SetString("futu_exch_type","F4");
	lpGetSingleQuoteRecord->SetString("contract_code", contract.c_str());
    lpGetSingleQuoteRecord->SetString("futures_account", "");
    lpGetSingleQuoteRecord->SetString("hedge_type", "0");
	//CTimeCounter t4;
	//t4.Start();
	//同步接收消息
	int iRet = lpComm->SyncSendRecv(lpGetSingleQuoteReqMsg,lpGetSingleQuoteAnsMsg);
	//t4.Stop();
	//cout<<"同步委托耗时:"<<":"<<t4.Elapse()<<endl;
	if(iRet != 0){
		//cout<<"同步委托失败:iRet="<<iRet<<" msg:"<<lpComm->GetErrorMsg(iRet)<<endl;
        return FATAL_ERROR_CODE;
	}else{
		//cout<<"同步委托成功!"<<endl;
	}
	//ShowFuMessage(lpGetSingleQuoteAnsMsg);
    IFuRecord* msg = lpGetSingleQuoteAnsMsg->GetRecord(0);
    double lastPrice = msg->GetDouble("futu_last_price");
    double upLimit = msg->GetDouble("uplimited_price");
    double downLimit = msg->GetDouble("downlimited_price");
    double buyPrice = msg->GetDouble("buy_high_price");
    double sellPrice = msg->GetDouble("sale_low_price");

	//释放消息
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

	//新建通信对象
	IHsFutuComm* lpComm = getYongAnHSCommInstance();
	gAutoConnectHandleEvent = CreateEvent(NULL,TRUE,FALSE,NULL);
	//创建自动重连线程
	HANDLE hThread = CreateThread(NULL,0,auto_connect,lpComm,0,NULL);

	//初始化接口对象
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
	
    
    
    //退订登出释放资源
    cout<<"continue to exit!"<<endl;
	pause();
	lpComm->SubscribeRequest(NAType,CxlAll,ALLWWW);
    lpComm->DoLogout(DEFAULT_LOGIN_USERNAME);
	//lpComm->DoLogout("");
	//暂停等待登出结果
	pause();


	//关闭自动重连线程
	gIsStop = true;
	SetEvent(gAutoConnectHandleEvent);
	WaitForSingleObject(hThread,INFINITE);
	CloseHandle(hThread);

    //关闭通信连接
	lpComm->Stop();
	//释放通信对象
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
	//新建通信对象
	IHsFutuComm* lpComm = getYongAnHSCommInstance();
	gAutoConnectHandleEvent = CreateEvent(NULL,TRUE,FALSE,NULL);
	//创建自动重连线程
	HANDLE hThread = CreateThread(NULL,0,auto_connect,lpComm,0,NULL);

	//初始化接口对象
	CMyCallBack* callback = new CMyCallBack();
	if(FATAL_ERROR_CODE == initEnvirenment(lpComm, callback)){
        cout<<"init envirenment error"<<endl;
        return FATAL_ERROR_CODE;
    }
	*/


	//订阅一下行情或者回报
	lpComm->SubscribeRequest(SingleCode,Subscription,ALLWWW);
	//lpComm->SubscribeRequest(SingleCode,Subscription,"CF205");
	lpComm->SubscribeRequest(RspReport,Subscription,DEFAULT_LOGIN_USERNAME);
	//lpComm->SubscribeRequest(CombinCode,Subscription,"ALLWWW");
    //lpComm->SubscribeRequest(OnlineMsg,Subscription,USER_NAME);

	
    
    //release resource
    //int r = sendSyncSingleOrder(lpComm);
	pause();
	
    
    
    //退订登出释放资源
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
	//暂停等待登出结果
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


