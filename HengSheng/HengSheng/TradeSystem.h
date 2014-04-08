#pragma once

#include "Constants.h" 
#include "HsFutures.h"
#include "HSUtils.h"
#include "Quote.h"
#include "MessageFlow.h"

extern QuoteSystem Quote;
extern MessageFlow Messages;

struct SingleOrder{
    char* username;
    char* password;
    char* futu_exch_type;
    char* futures_account;
    char* contract_code;
    char* entrust_bs;
    char* futures_direction;
    char* hedge_type;
    char* futu_entrust_prop;
    char* futu_entrust_price;
    char* entrust_amount;
    char* entrust_kind;
};



class TradeServer{
public:
    TradeServer(char* serverIpPort, char* lisenceStr, char* lisenceFilename);
    int startServer(char* loginName, char* password, IFuCallBack* callback);
    int closeServer();
    //bool hasStart();
    //bool hasConnect();
    IHsFutuComm* getServerInstance();

    int refreshPosition();
    map<string, int> longPosition;
    map<string, int> shortPosition;

private:
    int initServer(char* serverIpPort, char* lisenceStr, char* lisenceFilename);

public:
    char loginName[HS_USERNAME_MAX_LENGTH];
    char password[HS_PASSWORD_MAX_LENGTH];



private:
    IHsFutuComm* server;
};