#include <vector>
#include <string>

#include "HSFutures.h"
#include "SystemType.h"

using namespace std;

struct PositionRecord{
    MSG_REC_TYPE_FUTURES_ACCOUNT account;
    MSG_REC_TYPE_FUTU_EXCH_TYPE exchange;
    MSG_REC_TYPE_CONTRACT_CODE contract;
    MSG_REC_TYPE_ENTRUST_BS buySell;
    MSG_REC_TYPE_ENABLE_AMOUNT amount;
    MSG_REC_TYPE_TODAY_ENABLE_AMOUNT todayAmount;
};

struct ArbitrageLeg{
	string contract;
	int volume;
	int destVolume;
};

struct ArbitragePair{
	ArbitrageLeg legFirst;
	ArbitrageLeg legSecond;
};

class ArbitragePositionManager{
public:
	vector<ArbitragePair> pairs;
};


class PositionManager{
public:
    int refreshPositions(IFuMessage* positionMsg);
    int addPosition(IFuRecord* positionRec);
	int initPairs(vector<string> &contract);
public:

public:
    vector<PositionRecord> positions;
	vector<ArbitragePair> pairs;
};

void showPosition(PositionManager& positionManage);

