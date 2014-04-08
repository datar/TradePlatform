#include <iostream>
#include <iomanip>

#include "HSUtils.h"
#include "TimeInfo.h"
#include "TradeSystem.h"

#include "CallBack.h"

using namespace std;


//�ӿڲ�ѯ
unsigned long  HSAPI CMyCallBack::QueryInterface( const char *, IHSKnown **){
    return 0;
}

//���ýӿڣ����ü�����һ
unsigned long  HSAPI CMyCallBack::AddRef(){
    return 0;
}

//�ͷŽӿڣ����ü�����һ������Ϊ0ʱ�ͷŽӿڵ�ʵ�ֶ���
unsigned long  HSAPI CMyCallBack::Release(){
    return 0;
}

void HSAPI CMyCallBack::OnNotifyConnState(IHsFutuComm* lpComm,int iType,int iStatus,const char* szNotifyTime,const char* szMessage)	{
	cout<<"ͨ��״̬�ı�:"<<iType<<" : "<< setw(2)<<iStatus<<" : "<<szNotifyTime<<" : "<<szMessage<<endl;

    //���ӶϿ���
	if((iStatus == 0) && !gIsStop){
		gIType = iType;
		SetEvent(gAutoConnectHandleEvent);
	}
}

//��½����
void HSAPI CMyCallBack::OnRspLogin(IHsFutuComm* lpComm,IFuMessage* lpMsg){
	cout<<"��½����:"<<lpMsg->GetRecord()->GetCount()<<endl;
	lpMsg->AddRef();
	ShowFuMessage(lpMsg);
}

//�ǳ�����
void HSAPI CMyCallBack::OnRspLogout(IHsFutuComm* lpComm,IFuMessage* lpMsg){
	cout<<"�ǳ�����:"<<endl;
	ShowFuMessage(lpMsg);
}

//���巴��
void  HSAPI CMyCallBack::OnRspSubResult(IHsFutuComm* lpComm,REGType sType,REGAction aType,int iResult,const char* lpParam,const char* szMessage)	{
	cout<<"���Ľ������:type="<<sType<<" action="<<aType<<" result="<<iResult<<" param="<<(lpParam?lpParam:"(null)")<<" message="<<szMessage<<endl;
}

//���յ�ҵ��Ӧ����Ϣ
void HSAPI CMyCallBack::OnReceivedBiz(IHsFutuComm* lpComm,IFuMessage* lpAnsData,int iRet,int iKeyID){
	//g_Counter.Stop();
	cout<<"�յ�ҵ����Ϣ���첽�����ʱ:"<<g_Counter.Elapse()<<" iRet="<<iRet<<"KeyID="<<iKeyID<<endl;
    ShowFuMessage(lpAnsData);
}

//���յ������г�����
void HSAPI CMyCallBack::OnRecvMarketData(IHsFutuComm* lpComm,CMarketInfo* lpInfo,REGAction rAction){
    char timeStr[TimeInfo::MAX_TIME_INFO_LENGTH];
    //TimeInfo::getNowTimeStr(timeStr);
    //Quote.addHSQuote(timeStr, lpInfo);
	LARGE_INTEGER tickTime;
	QueryPerformanceCounter(&tickTime);
	Quote.addHSQuote(tickTime, lpInfo);
    Quote.addQuoteData2Map(timeStr, lpInfo);
    //cout<<timeStr<<"--"<<QuoteData2Str(*lpInfo)<<endl;
}

//���յ�����г�����
void HSAPI CMyCallBack::OnRecvArgMarketData(IHsFutuComm* lpComm,CArgMarketInfo* lpInfo,REGAction rAction){
	cout<<"�������:("<<lpInfo->futu_exch_type<<":"<<lpInfo->arbicontract_id<<")"<<endl;
}

//���յ�ί�з�����Ϣ
void HSAPI CMyCallBack::OnRecvOrderInfo(IHsFutuComm* lpComm,const COrderRspInfo* lpInfo){
	cout<<"ί�з���:(fund_account="<<lpInfo->fund_account<<" : entrust_no="<<lpInfo->entrust_no<<")"<<endl;
}

//���յ��ɽ�����
void HSAPI CMyCallBack::OnRecvOrderRealInfo(IHsFutuComm* lpComm,const CRealRspInfo* lpInfo){
	cout<<"�ɽ�����:(";
	cout<<"fund_account="<<lpInfo->fund_account<<";";
	cout<<" entrust_no="<<lpInfo->entrust_no<<";";
	cout<<"entrust_bs="<<lpInfo->entrust_bs<<";";
	cout<<"entrust_direction="<<lpInfo->entrust_direction<<";";
	cout<<"hedge_type="<<lpInfo->hedge_type<<";";
	cout<<"futu_exch_type="<<lpInfo->futu_exch_type;
	cout<<")"<<endl;

}

//����������Ϣ
void HSAPI CMyCallBack::OnRspOnlineMsg(IHsFutuComm* lpComm,const char* szUsrID,const char* szMessage){
	cout<<"������Ϣ:(user="<<(szUsrID?szUsrID:"(null)")<<" message="<<szMessage<<")"<<endl;
}


void HSAPI CMyCallBack::OnRecvExchStatsInfo(IHsFutuComm* lpComm,const CExchStatusInfo* lpInfo){

}
