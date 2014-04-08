#pragma once

#include <vector>
#include <string>

using namespace std;


int loadConfig(const char* optionFilename, vector<char*> items);
int loadContracts(const char* optionFilename, vector<string>& contracts);

