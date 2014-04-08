#pragma once

#include <vector>
#include "HSFutures.h"

class HSMessageFlow{
public:
	HSMessageFlow();
	~HSMessageFlow();
	void addMessage(IFuMessage* message);
	void clear();

private:
	vector<IFuMessage*> messages;
};