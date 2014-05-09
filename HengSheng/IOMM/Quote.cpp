#include <sstream>
#include <string>
#include <fstream>
#include <iomanip>
#include "TimeInfo.h"
#include "Quote.h"

using namespace std;

QuoteSystem::QuoteSystem(){
    outFilename = "quote.csv";
}

void QuoteSystem::addHSQuote(LARGE_INTEGER tickTime, QuoteData* info){
	data.push_back(*info);
	tickTimes.push_back(tickTime);
}

void QuoteSystem::addHSQuote(string timeStr, QuoteData* info){
    data.push_back(*info);
    times.push_back(timeStr);
}

void QuoteSystem::addQuoteData2Map(string timeStr, QuoteData* info){
    string contract = info->contract_code;
    quoteMap[contract].push_back(*info);
}

/*
void QuoteSystem::showStatus(){
	char msg[32];
	sprintf(msg, "%s has %d ticks", contract.c_str(), quoteMap[contract].size());
	Messages.addMessage(msg);
}
*/

void QuoteSystem::bak2File(const char* filename){
    ofstream of(filename, ios::app);
    for(size_t i = 0; i < data.size(); i++){
        of<<tickTimes[i].QuadPart<<","<<QuoteData2Str(data[i])<<endl;
    }
    of.close();
}

void QuoteSystem::saveContractList(const char* filename){
	ofstream of(filename, ios::app);
	for (size_t i = 0; i < contracts.size(); i++){
		of << contracts[i] << endl;
	}
	of.close();
}

string QuoteData2Str(QuoteData &info){
    ostringstream os;
	os.unsetf(std::ios_base::scientific);
    os<<std::fixed
        <<info.contract_code
        <<","<<info.pre_square_price
        <<","<<info.futu_open_price
        <<","<<info.futu_last_price
        <<","<<info.buy_high_price
        <<","<<info.buy_high_amount
        <<","<<info.buy_total_amount
        <<","<<info.sale_low_price
        <<","<<info.sale_low_amount
        <<","<<info.sale_total_amount
        <<","<<info.futu_high_price
        <<","<<info.futu_low_price
        <<","<<info.average_price
        <<","<<info.change_direction
        <<","<<info.business_amount
        <<","<<info.bear_amount
        <<","<<info.business_balance
        <<","<<info.uplimited_price
        <<","<<info.downlimited_price
        <<","<<info.futu_exch_type
        <<","<<info.form_buy_price
        <<","<<info.form_sale_price
        <<","<<info.form_buy_amount
        <<","<<info.form_sale_amount
        <<","<<info.pre_close_price
        <<","<<info.pre_open_interest
        <<","<<info.futu_close_price
        <<","<<info.square_price
        <<","<<info.pre_delta
        <<","<<info.curr_delta
        <<","<<info.bid_price2
        <<","<<info.bid_volume2
        <<","<<info.bid_price3
        <<","<<info.bid_volume3
        <<","<<info.bid_price4
        <<","<<info.bid_volume4
        <<","<<info.bid_price5
        <<","<<info.bid_volume5
        <<","<<info.ask_price2
        <<","<<info.ask_volume2
        <<","<<info.ask_price3
        <<","<<info.ask_volume3
        <<","<<info.ask_price4
        <<","<<info.ask_volume4
        <<","<<info.ask_price5
        <<","<<info.ask_volume5
        <<","<<info.update_time
        ;
    return os.str();
}

double QuoteSystem::GetPrice(const char* contract, QUOTE_PRICE priceType){
    double price = -1.0;
    if(quoteMap[contract].empty()){
        Messages.addMessage(string(contract) + string(" has no tick now!"));
        price = -1.0;
    }else if(FUTU_OPEN_PRICE == priceType){
        price=quoteMap[contract].back().futu_open_price;
    }

    else if(FUTU_HIGH_PRICE == priceType){
        price=quoteMap[contract].back().futu_high_price;
    }

    else if(FUTU_LOW_PRICE == priceType){
        price=quoteMap[contract].back().futu_low_price;
    }

    else if(FUTU_LAST_PRICE == priceType){
        price=quoteMap[contract].back().futu_last_price;
    }

    else if(AVERAGE_PRICE == priceType){
        price=quoteMap[contract].back().average_price;
    }

    else if(UPLIMITED_PRICE == priceType){
        price=quoteMap[contract].back().uplimited_price;
    }

    else if(DOWNLIMITED_PRICE == priceType){
        price=quoteMap[contract].back().downlimited_price;
    }

    else if(FUTU_CLOSE_PRICE == priceType){
        price=quoteMap[contract].back().futu_close_price;
    }

    else if(PRE_CLOSE_PRICE == priceType){
        price=quoteMap[contract].back().pre_close_price;
    }

    else if(SQUARE_PRICE == priceType){
        price=quoteMap[contract].back().square_price;
    }

    else if(PRE_SQUARE_PRICE == priceType){
        price=quoteMap[contract].back().pre_square_price;
    }

    else if(BUSINESS_BALANCE == priceType){
        price=quoteMap[contract].back().business_balance;
    }

    else if(BID_PRICE1 == priceType){
        price=quoteMap[contract].back().buy_high_price;
    }

    else if(BID_PRICE2 == priceType){
        price=quoteMap[contract].back().bid_price2;
    }

    else if(BID_PRICE3 == priceType){
        price=quoteMap[contract].back().bid_price3;
    }

    else if(BID_PRICE4 == priceType){
        price=quoteMap[contract].back().bid_price4;
    }

    else if(BID_PRICE5 == priceType){
        price=quoteMap[contract].back().bid_price5;
    }

    else if(ASK_PRICE1 == priceType){
        price=quoteMap[contract].back().sale_low_price;
    }

    else if(ASK_PRICE2 == priceType){
        price=quoteMap[contract].back().ask_price2;
    }

    else if(ASK_PRICE3 == priceType){
        price=quoteMap[contract].back().ask_price3;
    }

    else if(ASK_PRICE4 == priceType){
        price=quoteMap[contract].back().ask_price4;
    }

    else if(ASK_PRICE5 == priceType){
        price=quoteMap[contract].back().ask_price5;
    }

    else if(FORM_BID_PRICE == priceType){
        price=quoteMap[contract].back().form_buy_price;
    }

    else if(FORM_ASK_PRICE == priceType){
        price=quoteMap[contract].back().form_sale_price;
    }else{
        price = -1.0;
    }
    return price;
}

int QuoteSystem::GetQuantity(const char* contract, QUOTE_QUANTITY quantityType){
    int quantity = -1;
    if(quoteMap[contract].empty()){
        Messages.addMessage(string(contract) + string(" has no tick now!"));
        quantity = -1;
    }else if(BUSINESS_VOLUME == quantityType){
        quantity =  quoteMap[contract].back().business_amount;
    }
    else if(OPEN_INTEREST == quantityType){
        quantity =  quoteMap[contract].back().bear_amount;
    }
    else if(PRE_OPEN_INTEREST == quantityType){
        quantity =  quoteMap[contract].back().pre_open_interest;
    }
    else if(BID_TOTAL_VOLUME == quantityType){
        quantity =  quoteMap[contract].back().buy_total_amount;
    }
    else if(BID_VOLUME1 == quantityType){
        quantity =  quoteMap[contract].back().buy_high_amount;
    }
    else if(BID_VOLUME2 == quantityType){
        quantity =  quoteMap[contract].back().bid_volume2;
    }
    else if(BID_VOLUME3 == quantityType){
        quantity =  quoteMap[contract].back().bid_volume3;
    }
    else if(BID_VOLUME4 == quantityType){
        quantity =  quoteMap[contract].back().bid_volume4;
    }
    else if(BID_VOLUME5 == quantityType){
        quantity =  quoteMap[contract].back().bid_volume5;
    }
    else if(ASK_TOTAL_VOLUME == quantityType){
        quantity =  quoteMap[contract].back().sale_total_amount;
    }
    else if(ASK_VOLUME1 == quantityType){
        quantity =  quoteMap[contract].back().sale_low_amount;
    }
    else if(ASK_VOLUME2 == quantityType){
        quantity =  quoteMap[contract].back().ask_volume2;
    }
    else if(ASK_VOLUME3 == quantityType){
        quantity =  quoteMap[contract].back().ask_volume3;
    }
    else if(ASK_VOLUME4 == quantityType){
        quantity =  quoteMap[contract].back().ask_volume4;
    }
    else if(ASK_VOLUME5 == quantityType){
        quantity =  quoteMap[contract].back().ask_volume5;
    }
    else if(FORM_BID_VOLUME == quantityType){
            quantity =  quoteMap[contract].back().form_buy_amount;
    }
    else if(FORM_ASK_VOLUME == quantityType){
        quantity =  quoteMap[contract].back().form_sale_amount;
    }
    return quantity;

}