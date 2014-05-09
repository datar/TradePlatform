#include <string.h>
#include "PositionManager.h"


int PositionManager::refreshPositions(IFuMessage* positionMsg){
    positions.clear();
    int posNum = positionMsg->GetCount();
    for(int i = 0; i < posNum; i++){
        IFuRecord* pos = positionMsg->GetRecord(i);
        addPosition(pos);
    }
    return  0;
}

int PositionManager::addPosition(IFuRecord* positionRec){
    if(positionRec == NULL){
        return 0;
    }

    PositionRecord rec;
    memset(&rec, 0, sizeof(PositionRecord));
    memcpy(rec.account, positionRec->GetString(MSG_REC_NAME_FUTURES_ACCOUNT), strlen(positionRec->GetString(MSG_REC_NAME_FUTURES_ACCOUNT)));
    memcpy(rec.exchange, positionRec->GetString(MSG_REC_NAME_FUTU_EXCH_TYPE), strlen(positionRec->GetString(MSG_REC_NAME_FUTU_EXCH_TYPE)));
    memcpy(rec.contract, positionRec->GetString(MSG_REC_NAME_CONTRACT_CODE), strlen(positionRec->GetString(MSG_REC_NAME_CONTRACT_CODE)));
    rec.buySell = positionRec->GetChar(MSG_REC_NAME_ENTRUST_BS);
    rec.amount = positionRec->GetDouble(MSG_REC_NAME_ENABLE_AMOUNT);
    rec.todayAmount = positionRec->GetDouble((MSG_REC_NAME_TODAY_ENABLE_AMOUNT));
    positions.push_back(rec);
    return 1;
}

//IO contract is like IO1405-C-1950
int PositionManager::initPairs(vector<string> &contracts){
	char tempContract[16];
	string putChar = "P";
	ArbitragePair tempPair;
	for (vector<string>::iterator it = contracts.begin(); it != contracts.end(); it++){
		if (it->size() != 13){
			continue;
		}
		if (it->at(7) == 'C' && it->at(0) == 'I'){
			tempPair.legFirst.contract = *it;
			tempPair.legFirst.destVolume = 0;
			tempPair.legFirst.volume = 0;
			strcpy(tempContract, it->c_str());
			tempContract[7] = 'P';
			tempPair.legSecond.contract = tempContract;
			tempPair.legSecond.destVolume = 0;
			tempPair.legSecond.volume = 0;
			pairs.push_back(tempPair);
		}
	}
	return pairs.size();
}

void showPosition(PositionManager& positionManage){
    size_t len = positionManage.positions.size();
    for(size_t i = 0; i < len; i++){
        Messages.print("%s_%s_%s_%c_%.2f_%.2f", positionManage.positions[i].account, positionManage.positions[i].exchange, positionManage.positions[i].contract, positionManage.positions[i].buySell, positionManage.positions[i].amount, positionManage.positions[i].todayAmount);
    }
    if(len == 0){
        Messages.print("Ã»³Ö²Ö");
    }
}