#include "HSMessageManage.h"

HSMessageFlow::HSMessageFlow(){

}

HSMessageFlow::~HSMessageFlow(){
	clear();
}

void HSMessageFlow::addMessage(IFuMessage* message){
	message->AddRef();
	messages.push_back(message);
}

void HSMessageFlow::clear(){
	for each(auto p in messages){
		p->Release();
	}

}