#include <cstdio>
#include <cstdarg>

#include <iostream>
#include <fstream>

#include "MessageFlow.h"

using namespace std;

MessageFlow::MessageFlow(char* logFile, bool isOnScreen){
    this->isOnScreen = isOnScreen;
    logFilename = logFile;
}
int MessageFlow::addMessage(string msg){
    messages.push_back(msg);
    if(isOnScreen){
        cout<<msg<<endl;
    }
    return 0;
}
 
int MessageFlow::log2File(){
    ofstream out(logFilename.c_str(), ios::app);
    for(vector<string>::iterator it = messages.begin(); it != messages.end(); it++){
        out<<*it<<endl;
    }
    out.close();
    return 0;
}

int MessageFlow::print( const char * format, ... ){
    char buffer[MAX_MESSAGE_LINE_LENGTH];
    va_list args;
    va_start (args, format);
    vsprintf_s (buffer,MAX_MESSAGE_LINE_LENGTH,format, args);
    //perror (buffer);
    va_end (args);
    addMessage(buffer);
    return 0;
}