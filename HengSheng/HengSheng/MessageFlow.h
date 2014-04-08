#pragma once

#include <string>
#include <vector>

using namespace std;

class MessageFlow{
public:
    MessageFlow(char* logFile, bool isOnScreen = true);
    int addMessage(string msg);
    int log2File();
private:
    vector<string> messages;
    bool isOnScreen;
    string logFilename;
};