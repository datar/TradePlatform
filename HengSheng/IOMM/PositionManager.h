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

class PositionManager{
public:
    int refreshPositions(IFuMessage* positionMsg);
    int addPosition(IFuRecord* positionRec);
public:

public:
    vector<PositionRecord> positions;
};

void showPosition(PositionManager& positionManage);