#include <iostream>
#include <sstream>
#include "Constants.h"
#include "HSUtils.h"
#include "SyncOrder.h"

using namespace std;

int SendSyncMessage(IHsFutuComm* lpComm, IFuMessage* requestMessage, IFuMessage* answerMessage){
    int HS_ErrorCode = lpComm->SyncSendRecv(requestMessage, answerMessage);
    char message[MAX_HS_ERROR_MSG_LENGTH];
    if(HS_ErrorCode != 0){
        getErrorMessage(lpComm, HS_ErrorCode, message);
    }else{
        message[0] = '\0';
    }
    //CHENXING::TODO::add_message_to_system
    //ShowFuMessage(answerMessage);
    return HS_ErrorCode;
}

int sendSyncSingleOrder(IHsFutuComm* lpComm,
                        const char* fundAccount,
                        const char* password,
                        const char* exchange,
                        const char* futuresAccount,
                        const char* contractCode,
                        const char* buySell,
                        const char* openClose,
                        const char* hedgeType,
                        const char* proper,
                        const double price,
                        const int amount,
                        const char* kind){

	IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_NEW_SINGLE_ORDER,MSG_MODE_REQUEST); 
	IFuMessage* ansMsg = NewFuMessage(); 

	IFuRecord* record = reqMsg->AddRecord();
	record->SetString("fund_account",fundAccount);
	record->SetString("password",password);

	record->SetString("futu_exch_type",exchange);
	record->SetString("futures_account",futuresAccount);
	record->SetString("contract_code",contractCode);
	record->SetString("entrust_bs", buySell);
	record->SetString("futures_direction", openClose);
	record->SetString("hedge_type", hedgeType);
	record->SetString("futu_entrust_prop",proper);
    record->SetDouble("futu_entrust_price",price);

    record->SetInt("entrust_amount", amount);
	record->SetString("entrust_kind", kind);
    //lpRecord->SetString("volume_condition","0");

	int iRet = SendSyncMessage(lpComm, reqMsg,ansMsg);
    ShowFuMessage(reqMsg);
    ShowFuMessage(ansMsg);
    int orderNo = ansMsg->GetRecord(0)->GetInt("entrust_no");
    reqMsg->Release();
    ansMsg->Release();
    return orderNo;
}

int getSyncCombinQuote(IHsFutuComm* lpComm, 
                        const char* fundAccount, 
                        const char* exchange, 
                        const char* arbicontractID){

	IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_GET_COMBIN_QUOTE,MSG_MODE_REQUEST); 
	IFuMessage* ansMsg = NewFuMessage();  
	IFuRecord* record = reqMsg->AddRecord();
    record->SetString("fund_account",fundAccount);
	record->SetString("futu_exch_type", exchange);
	record->SetString("arbicontract_id",arbicontractID);
    int iRet =SendSyncMessage(lpComm, reqMsg, ansMsg);
	reqMsg->Release();
	ansMsg->Release();

    return 0;
}

int getSyncCombinCode(IHsFutuComm* lpComm, 
                        const char* fundAccount, 
                        const char* exchange, 
                        const char* requestNum){
	IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_GET_COMBIN_CODE,MSG_MODE_REQUEST); 
	IFuMessage* ansMsg = NewFuMessage();     

	IFuRecord* record = reqMsg->AddRecord();
	record->SetString("fund_account", fundAccount);
	record->SetString("futu_exch_type", exchange);
	record->SetString("request_num", requestNum);
	
	int iRet = lpComm->SyncSendRecv(reqMsg,ansMsg);

	reqMsg->Release();
	ansMsg->Release();
    return 0;
}

int checkSyncCombinCode(IHsFutuComm* lpComm, 
                        const char* fundAccount, 
                        const char* exchange, 
                        const char* futuresAccount, 
                        const char* contract, 
                        const char* buySell,
                        const char* openClose,
                        const char* secondContract,
                        const char* arbitrageCode){

	IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_CHECK_COMBIN_CODE,MSG_MODE_REQUEST);
	IFuMessage* ansMsg = NewFuMessage();
	
	IFuRecord* record = reqMsg->AddRecord();
	record->SetString("fund_account", fundAccount);
	record->SetString("futu_exch_type", exchange);
	record->SetString("futures_account", futuresAccount);
	record->SetString("contract_code", contract);
	record->SetString("entrust_bs", buySell);
	record->SetString("futures_direction", openClose);
	record->SetString("second_code", secondContract);
	record->SetString("arbitrage_code", arbitrageCode);
	
	int iRet = SendSyncMessage(lpComm, reqMsg, ansMsg);
	
	reqMsg->Release();
	ansMsg->Release();

    return 0;
}

int sendSyncCombinOrder(IHsFutuComm* lpComm,
                        const char* fundAccount,
                        const char* exchange,
                        const char* futuresAccount,
                        const char* contractCode,
                        const char* buySell,
                        const char* openClose,
                        const char* hedgeType,
                        const char* proper,
                        const double price,
                        const int amount,
                        const double springPrice,
                        const char* timeCondition,
                        const char* validDate,
                        const char* secondContract,
                        const char* volumeCondition,
                        const char* weaveType,
                        const char* arbitrageCode){

	IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_NEW_COMBIN_ORDER,MSG_MODE_REQUEST); 
	IFuMessage* ansMsg = NewFuMessage(); 

	IFuRecord* record = reqMsg->AddRecord();
	record->SetString("fund_account", fundAccount);
	record->SetString("futu_exch_type", exchange);
	record->SetString("futures_account", futuresAccount);
	record->SetString("contract_code", contractCode);
	record->SetString("entrust_bs", buySell);
	record->SetString("futures_direction", openClose);
	record->SetString("hedge_type", hedgeType);
	record->SetString("futu_entrust_prop", proper);
    record->SetDouble("futu_entrust_price", price);
	record->SetInt("entrust_amount", amount);
	record->SetDouble("spring_price", springPrice);
	record->SetString("time_condition", timeCondition);
	record->SetString("valid_date", validDate);
	record->SetString("second_code", secondContract);
	record->SetString("volume_condition", volumeCondition);
	record->SetString("weave_type", weaveType);
	record->SetString("arbitrage_code", arbitrageCode);
	
	int iRet = SendSyncMessage(lpComm, reqMsg, ansMsg);
	
	reqMsg->Release();
	ansMsg->Release();

    return 0;
}

int queryPosition(IHsFutuComm* lpComm, 
                    const char* fundAccount, 
                    const char* beginDate, 
                    const char* endDate, 
                    const char* moneyType, 
                    const char* totalType){
	IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_GET_BILL,MSG_MODE_REQUEST); 
	IFuMessage* ansMsg = NewFuMessage(); 
	IFuRecord*  record = reqMsg->AddRecord();
	record->SetString("fund_account", fundAccount);
	record->SetString("begin_date", beginDate);
	record->SetString("end_date", endDate);
	record->SetString("money_type", moneyType);
	record->SetString("total_type", totalType);
	
    SendSyncMessage(lpComm, reqMsg, ansMsg);

    reqMsg->Release();
	ansMsg->Release();

    return 0;

}

int checkPassword(IHsFutuComm* lpComm){
	IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_CHECK_PWD,MSG_MODE_REQUEST); 
	IFuMessage* ansMsg = NewFuMessage();
	
	IFuRecord* record = reqMsg->AddRecord();
	record->SetString("fund_account",DEFAULT_LOGIN_USERNAME);
	record->SetString("password",DEFAULT_LOGIN_PASSWORD);
	
    int iRet = SendSyncMessage(lpComm, reqMsg, ansMsg);
	
	reqMsg->Release();
	ansMsg->Release();

    if(0 == iRet){
		//cancel order
	}
    return 0;
}

int cancelSyncOrder(IHsFutuComm* lpComm, 
                    const char* fundAccount, 
                    const char* password, 
                    const int entrustNo){
    IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_CANCEL_ORDER,MSG_MODE_REQUEST); 
	IFuMessage* ansMsg = NewFuMessage();  
	IFuRecord* record = reqMsg->AddRecord();
	record->SetInt("entrust_no",entrustNo);
	record->SetString("fund_account", fundAccount);
	record->SetString("password", password);

	int iRet = SendSyncMessage(lpComm, reqMsg, ansMsg);
    return 0;
}

int getSingleQuote(IHsFutuComm* lpComm, 
                    const char* fundAccount,
                    const char* futuresAccount,
                    const char* contract,
                    const char* exchange,
                    const char* hedgeType){

	IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_CHECK_CONTRACT_CODE, MSG_MODE_REQUEST);
    IFuMessage* ansMsg = NewFuMessage();     
	IFuRecord* record = reqMsg->AddRecord();
	record->SetString("fund_account", fundAccount);
	record->SetString("futu_exch_type", exchange);
	record->SetString("contract_code", contract);
    record->SetString("futures_account", futuresAccount);
    record->SetString("hedge_type", hedgeType);
	
	int iRet = SendSyncMessage(lpComm, reqMsg, ansMsg);

	reqMsg->Release();
	ansMsg->Release();

    return 0;
}
