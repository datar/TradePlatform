#pragma once

#include "HSFutures.h"
 
//�첽�ص��ӿڵ�ʵ��
class CMyCallBack:public IFuCallBack{
public:
	//�ӿڲ�ѯ
	unsigned long  HSAPI QueryInterface( const char *, IHSKnown **);
	//���ýӿڣ����ü�����һ
	unsigned long  HSAPI AddRef();
	//�ͷŽӿڣ����ü�����һ������Ϊ0ʱ�ͷŽӿڵ�ʵ�ֶ���
	unsigned long  HSAPI Release();
	
    
    //����״̬�ĸı�
	void HSAPI OnNotifyConnState(IHsFutuComm* lpComm,int iType,int iStatus,const char* szNotifyTime,const char* szMessage);

	//��½����
	void HSAPI OnRspLogin(IHsFutuComm* lpComm,IFuMessage* lpMsg);

	//�ǳ�����
	void HSAPI OnRspLogout(IHsFutuComm* lpComm,IFuMessage* lpMsg);

	//���巴��
	void  HSAPI OnRspSubResult(IHsFutuComm* lpComm,REGType sType,REGAction aType,int iResult,const char* lpParam,const char* szMessage);

	//���յ�ҵ��Ӧ����Ϣ
	void HSAPI OnReceivedBiz(IHsFutuComm* lpComm,IFuMessage* lpAnsData,int iRet,int iKeyID);

	//���յ������г�����
	void HSAPI OnRecvMarketData(IHsFutuComm* lpComm,CMarketInfo* lpInfo,REGAction rAction);

	//���յ�����г�����
	void HSAPI OnRecvArgMarketData(IHsFutuComm* lpComm,CArgMarketInfo* lpInfo,REGAction rAction);

	//���յ�ί�з�����Ϣ
	void HSAPI OnRecvOrderInfo(IHsFutuComm* lpComm,const COrderRspInfo* lpInfo);

	//���յ��ɽ�����
	void HSAPI OnRecvOrderRealInfo(IHsFutuComm* lpComm,const CRealRspInfo* lpInfo);

	//����������Ϣ
	void HSAPI OnRspOnlineMsg(IHsFutuComm* lpComm,const char* szUsrID,const char* szMessage);

    void HSAPI OnRecvExchStatsInfo(IHsFutuComm* lpComm,const CExchStatusInfo* lpInfo);
};