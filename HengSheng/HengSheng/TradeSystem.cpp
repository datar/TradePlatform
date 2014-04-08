#include "SyncOrder.h"

#include "TradeSystem.h"

QuoteSystem Quote;



TradeServer::TradeServer(char* serverIpPort, char* licenseStr, char* licenseFilename){
    initServer(serverIpPort, licenseStr, licenseFilename);
}

int TradeServer::initServer(char* serverIpPort, char* licenseStr, char* licenseFilename){
    int errorCode = 0;
    server = NewFuCommObj(NULL);//FUTU_SYSTEM_V06,FUTU_SYSTEM_UFT
    server->AddRef();
    server->SetConfig("futu","server", serverIpPort);
    server->SetConfig("futu","biz_license_str", licenseStr);
    int returnCode = server->SetConfig("futu","comm_license_file", licenseFilename);
    //ASSERT(returnCode == 0);
    if(0 != returnCode){
        errorCode = -1;
    }
    server->SetConfig("futu","entrust_type","1");

    gAutoConnectHandleEvent = CreateEvent(NULL,TRUE,FALSE,NULL);
    gAutoConnectThread = CreateThread(NULL,0, auto_connect, server, 0, NULL);

    return errorCode;
}

int TradeServer::startServer(char* loginName, char* password, IFuCallBack* callback){
    strcpy(this->loginName, loginName);
    strcpy(this->password, password);
    int iRet = 0;
    if(0 != (iRet = server->Init(callback))){
        Messages.addMessage(server->GetErrorMsg(iRet));
        //cout<<"初始化失败.iRet="<<iRet<<" msg:"<<server->GetErrorMsg(iRet)<<endl;
        return FATAL_ERROR_CODE;
    }

    //启动(消息中心)
    if(0 != (iRet = server->Start(SERVICE_TYPE_QUOTE))){
        Messages.addMessage(server->GetErrorMsg(iRet));
        return FATAL_ERROR_CODE;
    }

    //启动(交易) 
    if(0 != (iRet = server->Start(SERVICE_TYPE_TRADE))){
        Messages.addMessage(server->GetErrorMsg(iRet));
        return FATAL_ERROR_CODE;
    }

    //登陆
    if(0 != (iRet = server->DoLogin(loginName, password, 1))){
        Messages.addMessage(server->GetErrorMsg(iRet));
        return FATAL_ERROR_CODE;
    }
    return 0;
}

int TradeServer::closeServer(){
    gIsStop = true;
    SetEvent(gAutoConnectHandleEvent);
    WaitForSingleObject(gAutoConnectThread,INFINITE);
    CloseHandle(gAutoConnectThread);
    server->Stop();
    server->Release();
    return 0;
}

IHsFutuComm* TradeServer::getServerInstance(){
    return server;
}


int TradeServer::refreshPosition(){
    longPosition.clear();
    shortPosition.clear();
    IFuMessage* reqMsg = NewFuMessage(MSG_TYPE_GET_HOLDSINFO, MSG_MODE_REQUEST);
    IFuMessage* ansMsg = NewFuMessage();
    IFuRecord* record = reqMsg->AddRecord();
    record->SetString("fund_account", loginName);
    record->SetString("futures_account", "");
    record->SetInt("request_num", 10000);
    SendSyncMessage(server, reqMsg, ansMsg);
    int posNum = ansMsg->GetCount();
    for(int i = 0; i < posNum; i++){
        IFuRecord* pos = ansMsg->GetRecord(i);
        int direction = pos->GetInt("entrust_bs");
        int lots = pos->GetInt("enable_amount");
        if(direction == 1){
            longPosition[pos->GetString("contract_code")] = lots;
        }
        if(direction == 2){
            shortPosition[pos->GetString("contract_code")] = lots;
        }
    }
    
    reqMsg->Release();
    ansMsg->Release();
    return 0;
}



/*
DWORD WINAPI TradeServer::autoConnect(void* connection){

    IHsFutuComm* lpComm = (IHsFutuComm*)connection;
    while(!isStop){
        if(WAIT_OBJECT_0 == WaitForSingleObject(handleEvent,INFINITE)){
            //退出
            if(isStop){
                Messages.addMessage("自动重连线程退出!");
                return 0;
            }

            Messages.addMessage("检测连接端口,开始自动重连......");
            //重连
            for (int iRet = 0;;){
                if(0 == (iRet = lpComm->Start(iType))){
                    ResetEvent(handleEvent);
                    break;
                }
                //cout<<"线程自动重连失败:"<<lpComm->GetErrorMsg(iRet)<<endl;
                Messages.addMessage(lpComm->GetErrorMsg(iRet));
                //重连失败,暂停一会儿再试
                Sleep(1000);
            }
        }
    }
    Messages.addMessage("自动重连线程退出!");
    return 0;
}
*/