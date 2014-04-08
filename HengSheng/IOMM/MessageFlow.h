#pragma once

#include <string>
#include <vector>
#include <sstream>

using namespace std;

class MessageFlow{
public:
    static const int MAX_MESSAGE_LINE_LENGTH = 1024;
public:
    MessageFlow(char* logFile, bool isOnScreen = true);
    int addMessage(string msg);
    int log2File();
    int print(const char* format, ...);
private:
    vector<string> messages;
    bool isOnScreen;
    string logFilename;
    stringstream os;
};