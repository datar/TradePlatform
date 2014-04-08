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