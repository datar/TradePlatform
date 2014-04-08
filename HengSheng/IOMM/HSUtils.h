#pragma once


#include <Windows.h>

#include "HSFutures.h"
#include "Constants.h"
using namespace std;


//�����̺߳���
//auto connect
extern HANDLE   gAutoConnectHandleEvent;
extern HANDLE   gAutoConnectThread;
extern volatile int  gIType;
extern volatile bool gIsStop;
DWORD WINAPI auto_connect(void* lpParam);

//��ʾ������Ϣ
void ShowFuMessage(IFuMessage* lpMessage);
void GetFuMessageString(IFuMessage* message, string& result);

int message2String(IFuMessage* message, char* result, unsigned int maxLength=MAX_HS_MSG_STR_LENGTH);

int getErrorMessage(IHsFutuComm* comm, int errorCode, char* message);

int saveQuote2File(char* filename);
