#pragma once

    typedef char MSG_REC_TYPE_ARBICODE[30];  //组合策略
    typedef char MSG_REC_TYPE_ARBICONTRACT_ID[30];  //套利合约代码
    typedef char MSG_REC_TYPE_ARBITRAGE_CODE[30];  //套利合约代码
    typedef char MSG_REC_TYPE_BANK_ACCOUNT[32];  //银行帐号
    typedef char MSG_REC_TYPE_BANK_NAME[64];  //银行名称
    typedef char MSG_REC_TYPE_BANK_NO[4];  //银行代码
    typedef char MSG_REC_TYPE_BANK_PASSWORD[10];  //银行密码
    typedef char MSG_REC_TYPE_BANK_TRANS_FLAG;  //银行转帐允许标志
    typedef char MSG_REC_TYPE_BKACCOUNT_REGFLAG;  //银行帐号存管指定标记
    typedef char MSG_REC_TYPE_BKACCOUNT_RIGHTS[64];  //银行帐号权限
    typedef char MSG_REC_TYPE_BKACCOUNT_STATUS;  //银行帐号状态
    typedef char MSG_REC_TYPE_BUSINESS_NAME[16];  //业务标志名称
    typedef char MSG_REC_TYPE_BUSINESS_TYPE;  //成交类别
    typedef char MSG_REC_TYPE_CANCEL_INFO[20];  //废单原因
    typedef char MSG_REC_TYPE_CFMMC_KEY[10];  //密钥
    typedef char MSG_REC_TYPE_CHECK_TAB_DATA[2000];  //帐单信息
    typedef char MSG_REC_TYPE_CLIENT_ID[18];  //客户号
    //typedef char MSG_REC_TYPE_CLIENT_NAME[14];  //客户姓名
    typedef char MSG_REC_TYPE_CLIENT_NAME[18];  //客户姓名
    typedef char MSG_REC_TYPE_COMPANY_ID[10];  //机构编码
    typedef char MSG_REC_TYPE_COMPANY_NAME[64];  //公司名称
    typedef char MSG_REC_TYPE_CONFIRM_NO[20];  //主场单号
    typedef char MSG_REC_TYPE_CONTRACT_CODE[30];  //合约代码
    typedef char MSG_REC_TYPE_CONTRACT_NAME[12];  //品种简称
    typedef char MSG_REC_TYPE_CONTRACT_TYPE;  //合约代码类别
    typedef char MSG_REC_TYPE_CONTRACT_TYPE;  //合约代码类别
    typedef char MSG_REC_TYPE_EN_ENTRUST_STATUS[10];  //允许委托状态
    typedef char MSG_REC_TYPE_ENTRUST_BS;  //买卖方向
    typedef char MSG_REC_TYPE_ENTRUST_BS;   //买卖方向
    typedef char MSG_REC_TYPE_ENTRUST_BS_NAME[12];  //买卖方向
    typedef char MSG_REC_TYPE_ENTRUST_KIND;  //委托类型（仅支持0）
    typedef char MSG_REC_TYPE_ENTRUST_NAME[8];  //委托状态名称
    typedef char MSG_REC_TYPE_ENTRUST_STATUS;  //委托状态
    typedef char MSG_REC_TYPE_ERROR_MESSAGE[255];  //错误信息
    typedef char MSG_REC_TYPE_EXCHANGE_NAME[16];  //交易名称
    //typedef char MSG_REC_TYPE_EXCHANGE_NAME[8];  //交易名称
    typedef char MSG_REC_TYPE_EXECUTE_TYPE;  //执行方式（1 欧式，2 美式）
    typedef char MSG_REC_TYPE_FORCECLOSE_REASON;  //强平原因
    typedef char MSG_REC_TYPE_FORCECLOSE_REASON_NAME[12];  //强平原因名称
    typedef char MSG_REC_TYPE_FUND_PASSWORD[10];  //资金密码
    typedef char MSG_REC_TYPE_FUTU_BUSINESS_NO[20];  //成交编号
    typedef char MSG_REC_TYPE_FUTU_ENTRUST_PROP;  //期货委托属性
    typedef char MSG_REC_TYPE_FUTU_ENTRUST_TYPE;  //委托类型
    typedef char MSG_REC_TYPE_FUTU_ENTRUST_TYPE_NAME[12];  //委托类型名称
    typedef char MSG_REC_TYPE_FUTU_EXCH_TYPE[4];  //交易类别
    typedef char MSG_REC_TYPE_FUTU_PRODUCT_TYPE;  //产品类别(1 期货2 期权3 组合 4 即期 5 期转现)
    typedef char MSG_REC_TYPE_FUTU_REPORT_UNIT;  //申报单位
    typedef char MSG_REC_TYPE_FUTUACCOUNT_STATUS;  //期货账号状态('0'为正常，其他为不正常)
    typedef char MSG_REC_TYPE_FUTUFARE_TYPE;  //费用类别
    typedef char MSG_REC_TYPE_FUTUFARE_TYPE;  //费用类别
    typedef char MSG_REC_TYPE_FUTURES_ACCOUNT[12];  //期货账号
    typedef char MSG_REC_TYPE_FUTURES_DIRECTION;  //开平方向
    typedef char MSG_REC_TYPE_FUTURES_DIRECTION_NAME[12];  //开平仓方向
    typedef char MSG_REC_TYPE_FUTURES_RESTRICTS[16];  //期货账号限制
    typedef char MSG_REC_TYPE_FUTURES_RIGHTS[16];  //期货账号权限(对于金融交易所'A'或者空 表示投机 'B'表示套保)
    typedef char MSG_REC_TYPE_GIVEUP_TYPE;  //放弃执行类型
    typedef char MSG_REC_TYPE_HEDGE_TYPE;  //套保标志
    typedef char MSG_REC_TYPE_LAST_LOGIN_IP[20];  //上次登陆IP 地址(需要服务商支持)
    typedef char MSG_REC_TYPE_MAIN_FLAG;  //主副标志('1'为主帐号)
    typedef char MSG_REC_TYPE_MONEY_NAME[64];  //币种名称
    typedef char MSG_REC_TYPE_MONEY_TYPE;  //币种类别
    typedef char MSG_REC_TYPE_NATIVE_CODE[30];  //原始代码(行情库中的代码)
    typedef char MSG_REC_TYPE_NEW_PASSWORD[10];  //新密码
    typedef char MSG_REC_TYPE_OPTIONS_EXPIRE[30];  //期权系列
    typedef char MSG_REC_TYPE_OPTIONS_TYPE;  //期权类型(0 非期权1 看涨2 看跌)
    typedef char MSG_REC_TYPE_PASSWORD[10];  //原密码
    typedef char MSG_REC_TYPE_PASSWORD_TYPE;  //密码类别
    typedef char MSG_REC_TYPE_POSITION_STR[100];  //定位串
    //typedef char MSG_REC_TYPE_POSITION_STR[32];  //定位串
    typedef char MSG_REC_TYPE_PRICE_UNIT;  //价格单位( '1'   按手存放 '2'   按吨存放)
    typedef char MSG_REC_TYPE_QUERY_DIRECTION;  //查询方向
    typedef char MSG_REC_TYPE_QUERY_MODE;  //查询模式 (0  过滤持仓为0 的数据 1  不过滤持仓为0 的)
    typedef char MSG_REC_TYPE_REMARK[255];  //摘要
    typedef char MSG_REC_TYPE_RESERVE_MESSAGE[64];  //客户预留信息
    typedef char MSG_REC_TYPE_RESULT_TEXT[20];  //登出结果
    typedef char MSG_REC_TYPE_RIGHTS_TYPE;  //行权方式（0 放弃行权 1 行权）
    typedef char MSG_REC_TYPE_SECOND_CODE[30];  //第二腿合约代码
    typedef char MSG_REC_TYPE_SOURCE_FLAG;  //发起方
    typedef char MSG_REC_TYPE_SQUARE_FLAG;  //结算标示，用来标志资产账户的结算模式
    typedef char MSG_REC_TYPE_STATUS_NAME[60];  //委托状态名称
    typedef char MSG_REC_TYPE_STOP_FLAG;  //开始交易标志
    typedef char MSG_REC_TYPE_SYS_STATUS;  //系统状态
    typedef char MSG_REC_TYPE_SYS_STATUS_NAME[64];  //系统状态说明
    typedef char MSG_REC_TYPE_TABCONFIRM_FLAG;  //强制帐单确认
    typedef char MSG_REC_TYPE_TIME_CONDITION;  //有效期类型
    typedef char MSG_REC_TYPE_TOTAL_TYPE;  //统计类别(0  明细+汇总 1  明细 2 汇总)
    typedef char MSG_REC_TYPE_TRANS_NAME[64];  //成交类别名称
    typedef char MSG_REC_TYPE_TRANSFER_DIRECTION;  //交易方向
    typedef char MSG_REC_TYPE_VOLUME_CONDITION;  //成交量类型
    typedef char MSG_REC_TYPE_WEAVE_TYPE;  //组合委托类型
    typedef double MSG_REC_TYPE_AMOUNT_BALANCE;  //单位数量手续费金额
    typedef double MSG_REC_TYPE_APPLY_AMOUNT;  //申请手数
    typedef double MSG_REC_TYPE_AVERAGE_PRICE;  //平均价
    typedef double MSG_REC_TYPE_BAIL_BALANCE;  //客户保证金
    typedef double MSG_REC_TYPE_BEAR_AMOUNT;  //空盘量
    typedef double MSG_REC_TYPE_BEGIN_AMOUNT;  //期初数量
    typedef double MSG_REC_TYPE_BEGIN_BALANCE;  //上日结存
    typedef double MSG_REC_TYPE_BEGIN_EXCH_HOLD;  //上一交易日持仓冻结交易所保证金
    typedef double MSG_REC_TYPE_BEGIN_HOLD_BALANCE;  //上一交易日持仓冻结保证金
    typedef double MSG_REC_TYPE_BEXEC_AMOUNT;  //买执行量（买未平数量- 申请放弃量）
    typedef double MSG_REC_TYPE_BEXEC_EXCH_FARE;  //买执行交易所手续费
    typedef double MSG_REC_TYPE_BEXEC_FARE;  //买执行客户手续费
    typedef double MSG_REC_TYPE_BEXEC_PROFIT;  //买执行盈亏
    typedef double MSG_REC_TYPE_BEXECABLE_AMOUNT;  //买可执行量（买未平数量||0）
    typedef double MSG_REC_TYPE_BPOS_AMOUNT;  //买未平数量
    typedef double MSG_REC_TYPE_BUSINESS_AMOUNT;  //成交数量
    typedef double MSG_REC_TYPE_BUSINESS_BALANCE;  //成交金额
    typedef double MSG_REC_TYPE_BUSINESS_RATIO;  //成交金额比例
    typedef double MSG_REC_TYPE_BUY_AMOUNT;  //买入持仓量
    typedef double MSG_REC_TYPE_BUY_HIGH_AMOUNT;  //最高买入价买量
    typedef double MSG_REC_TYPE_BUY_HIGH_PRICE;  //最高买入价
    typedef double MSG_REC_TYPE_BUY_OP_BALANCE;  //买权利金
    typedef double MSG_REC_TYPE_BUY_PRICE;  //最高买入价
    typedef double MSG_REC_TYPE_BUY_TOTAL_AMOUNT;  //全部买量
    typedef double MSG_REC_TYPE_CANCEL_AMOUNT;  //撤单数量
    typedef double MSG_REC_TYPE_CHANGE_DIRECTION;  //趋势
    typedef double MSG_REC_TYPE_CLIENT_RISK;  //客户风险率
    typedef double MSG_REC_TYPE_CURRENT_BALANCE;  //当前余额
    typedef double MSG_REC_TYPE_DELIVER_BAIL_BALANCE;  //交割保证金
    typedef double MSG_REC_TYPE_DELIVER_BAIL_RATIO;  //交割保证金比例
    typedef double MSG_REC_TYPE_DOWNLIMITED_PRICE;  //跌停板价格
    typedef double MSG_REC_TYPE_DROP_BAIL_BALANCE;  //平仓保证金
    typedef double MSG_REC_TYPE_DROP_BAIL_RATIO;  //平仓保证金比例
    typedef double MSG_REC_TYPE_DROP_PROFIT;  //平仓盈亏
    typedef double MSG_REC_TYPE_DROP_PROFIT_FLOAT;  //平仓浮动盈亏
    typedef double MSG_REC_TYPE_DROP_UNIT;  //平仓最小单位
    typedef double MSG_REC_TYPE_DROPCU_BAIL_BALANCE;  //平今仓保证金
    typedef double MSG_REC_TYPE_DROPCU_BAIL_RATIO;  //平今仓保证金比例
    typedef double MSG_REC_TYPE_EN_BALANCE;  //可用资金
    typedef double MSG_REC_TYPE_ENABLE_AMOUNT;  //实际可下单量
    typedef double MSG_REC_TYPE_ENABLE_BALANCE;  //可用金额
    typedef double MSG_REC_TYPE_ENTRUST_AMOUNT;  //期货委托数量
    typedef double MSG_REC_TYPE_EXCH_BAIL_BALANCE;  //交易所保证金
    typedef double MSG_REC_TYPE_EXCH_HOLD_BALANCE;  //当日持仓冻结交易所保证金
    typedef double MSG_REC_TYPE_EXCH_RISK;  //交易所风险率
    typedef double MSG_REC_TYPE_EXEC_AMOUNT;  //申请行权量
    typedef double MSG_REC_TYPE_FETCH_BALANCE;  //可取资金
    typedef double MSG_REC_TYPE_FORM_BUY_AMOUNT;  //组合买入数量
    typedef double MSG_REC_TYPE_FORM_SALE_AMOUNT;  //组合卖出数量
    typedef double MSG_REC_TYPE_FROZEN_BALANCE;  //冻结资金
    typedef double MSG_REC_TYPE_FROZEN_FARE;  //冻结费用
    typedef double MSG_REC_TYPE_FUND_IN;  //入金
    typedef double MSG_REC_TYPE_FUND_OUT;  //出金
    typedef double MSG_REC_TYPE_FUTU_AVERAGE_PRICE;  //平均价
    typedef double MSG_REC_TYPE_FUTU_BUSINESS_PRICE;  //期货成交价格
    typedef double MSG_REC_TYPE_FUTU_ENTRUST_PRICE;  //期货委托价格
    typedef double MSG_REC_TYPE_FUTU_HIGH_PRICE;  //最高价
    typedef double MSG_REC_TYPE_FUTU_LAST_PRICE;  //最新价格
    typedef double MSG_REC_TYPE_FUTU_LOW_PRICE;  //最低价
    typedef double MSG_REC_TYPE_FUTU_OPEN_PRICE;  //开盘价
    typedef double MSG_REC_TYPE_FUTU_PRICE_STEP;  //最小价差
    typedef double MSG_REC_TYPE_GIVEUP_AMOUNT;  //申请放弃量
    typedef double MSG_REC_TYPE_HIGH_LIMIT_PRICE;  //报价上限
    typedef double MSG_REC_TYPE_HIS_BUSIN_BALANCE;  //老仓持仓成交金额
    typedef double MSG_REC_TYPE_HOLD_BALANCE;  //上交易日保证金
    typedef double MSG_REC_TYPE_HOLD_BALANCE_TOT;  //总持仓
    typedef double MSG_REC_TYPE_HOLD_PROFIT;  //持仓盯市盈亏
    typedef double MSG_REC_TYPE_HOLD_PROFIT_FLOAT;  //持仓浮动盈亏
    typedef double MSG_REC_TYPE_HOLD_UNIT;  //开仓最小单位
    typedef double MSG_REC_TYPE_INTEREST_BALANCE;  //预计利息
    typedef double MSG_REC_TYPE_LATE_FEE;  //滞纳金
    typedef double MSG_REC_TYPE_LATEFEE_RATE;  //滞纳金比例
    typedef double MSG_REC_TYPE_LIMITED_AMOUNT;  //限价委托每笔最大下单数量
    typedef double MSG_REC_TYPE_LOW_LIMIT_PRICE;  //报价下限
    typedef double MSG_REC_TYPE_MARKET_AMOUNT;  //市价委托每笔最大下单数量
    typedef double MSG_REC_TYPE_MARKET_CLIENT_RIGHT;  //客户市值权益(UFT)
    typedef double MSG_REC_TYPE_MARKET_VALUE;  //客户市值权益(06)
    typedef double MSG_REC_TYPE_MAX_ENTRUST_AMOUNT;  //最大可下单量
    typedef double MSG_REC_TYPE_MAX_LIMIT_AMOUNT;  //最大下单数量
    typedef double MSG_REC_TYPE_MIN_LIMIT_AMOUNT;  //最小下单数量
    typedef double MSG_REC_TYPE_OCCUR_BALANCE;  //发生金额
    typedef double MSG_REC_TYPE_OPEN_BAIL_BALANCE;  //开仓保证金
    typedef double MSG_REC_TYPE_OPEN_BAIL_RATIO;  //开仓保证金比例
    typedef double MSG_REC_TYPE_OPEN_DROP_PRICE;  //开平仓价格
    typedef double MSG_REC_TYPE_OPTION_PREMIUMS;  //客户权利金净值(UFT)
    typedef double MSG_REC_TYPE_OPTION_PROFIT_FLOAT;  //期权持仓浮动盈亏(UFT)
    typedef double MSG_REC_TYPE_PAYMENT_BALANCE;  //交割货款
    typedef double MSG_REC_TYPE_POST_BALANCE;  //发生后余额
    typedef double MSG_REC_TYPE_PRE_DELTA;  //昨虚实度
    typedef double MSG_REC_TYPE_PRE_RIGHTS_BALANCE;  //期初客户权益
    typedef double MSG_REC_TYPE_PRE_SQUARE_PRICE;  //昨日结算价
    typedef double MSG_REC_TYPE_PROFIT;  //盯市盈亏
    typedef double MSG_REC_TYPE_PROFIT_FLOAT;  //浮动盈亏
    typedef double MSG_REC_TYPE_REAL_AMOUNT;  //总持仓
    typedef double MSG_REC_TYPE_REAL_BUY_AMOUNT;  //今开仓买入持仓量
    typedef double MSG_REC_TYPE_REAL_DROP;  //盯市平仓盈亏
    typedef double MSG_REC_TYPE_REAL_DROP_FLOAT;  //浮动平仓盈亏
    typedef double MSG_REC_TYPE_REAL_HOLD_BALANCEA;  //当日开仓预冻结金额
    typedef double MSG_REC_TYPE_REAL_HOLD_BALANCEB;  //当日开仓冻结保证金和费用
    typedef double MSG_REC_TYPE_REAL_SALE_AMOUNT;  //今开仓卖出持仓量
    typedef double MSG_REC_TYPE_RIGHTS_BALANCE;  //客户权益
    typedef double MSG_REC_TYPE_RISK_RATE;  //风险率
    typedef double MSG_REC_TYPE_RISK_RATE_N;  //内部风险率
    typedef double MSG_REC_TYPE_SALE_AMOUNT;  //卖出持仓量
    typedef double MSG_REC_TYPE_SALE_LOW_AMOUNT;  //最低卖价卖量
    typedef double MSG_REC_TYPE_SALE_LOW_PRICE;  //最低卖出价格
    typedef double MSG_REC_TYPE_SALE_OP_BALANCE;  //卖权利金(06）
    typedef double MSG_REC_TYPE_SALE_PRICE;  //最低卖价价格
    typedef double MSG_REC_TYPE_SALE_TOTAL_AMOUNT;  //全部卖量
    typedef double MSG_REC_TYPE_SELL_OP_BALANCE;  //卖权利金(UFT)
    typedef double MSG_REC_TYPE_SEXEC_AMOUNT;  //卖执行量（卖未平数量- 申请放弃量）
    typedef double MSG_REC_TYPE_SEXEC_EXCH_FARE;  //卖执行交易所手续费
    typedef double MSG_REC_TYPE_SEXEC_FARE;  //卖执行客户手续费
    typedef double MSG_REC_TYPE_SEXEC_PROFIT;  //卖执行盈亏
    typedef double MSG_REC_TYPE_SPEC_AMOUNT_BALANCE;  //特殊单位数量手续费金额
    typedef double MSG_REC_TYPE_SPEC_BUSINESS_RATIO;  //特殊成交金额比例
    typedef double MSG_REC_TYPE_SPOS_AMOUNT;  //卖未平数量
    typedef double MSG_REC_TYPE_SPRING_PRICE;  //止损触发价格
    typedef double MSG_REC_TYPE_SQUARE_PRICE;  //结算价
    typedef double MSG_REC_TYPE_STRIKE_PRICE;  //执行价
    typedef double MSG_REC_TYPE_SUPERADD_BALANCE;  //追加保证金
    typedef double MSG_REC_TYPE_TODAY_BUSIN_BALANCE;  //今仓持仓成交金额
    typedef double MSG_REC_TYPE_TODAY_ENABLE_AMOUNT;  //当日开仓可用数量
    typedef double MSG_REC_TYPE_TOTAL_FARE;  //手续费
    typedef double MSG_REC_TYPE_UNDERLYING_PRICE;  //标的指数价格
    typedef double MSG_REC_TYPE_UPLIMITED_PRICE;  //涨停板价格
    typedef double MSG_REC_TYPE_WILLGIVEUP_AMOUNT;  //放弃手数
    typedef int MSG_REC_TYPE_ACTION_IN;  //操作类型 (0  不区分投机套保 1  区分投机套保)
    typedef int MSG_REC_TYPE_AMOUNT_PER_HAND;  //每手吨数
    typedef int MSG_REC_TYPE_BATCH_NO;  //委托批号
    typedef int MSG_REC_TYPE_BEGIN_DATE;  //开始日期
    typedef int MSG_REC_TYPE_BRANCH_NO;  //分支代码
    typedef int MSG_REC_TYPE_BUSINESS_FLAG;  //业务标志
    typedef int MSG_REC_TYPE_BUSINESS_TIME;  //成交时间
    typedef int MSG_REC_TYPE_CORP_CLIENT_GROUP;  //公司客户类别
    typedef int MSG_REC_TYPE_CURR_DATE;  //发生日期
    typedef int MSG_REC_TYPE_CURR_TIME;  //数据库当前时间
    typedef int MSG_REC_TYPE_END_DATE;  //结束日期
    typedef int MSG_REC_TYPE_ENTRUST_NO;  //委托编号
    typedef int MSG_REC_TYPE_ENTRUST_TIME;  //委托时间
    typedef int MSG_REC_TYPE_EXPIRE_DATE;  //合约到期日
    typedef int MSG_REC_TYPE_FORM_BUY_PRICE;  //组合买入价格
    typedef int MSG_REC_TYPE_FORM_SALE_PRICE;  //组合卖出价格
    typedef int MSG_REC_TYPE_FUND_ACCOUNT;  //资金账号
    typedef int MSG_REC_TYPE_FUNDACCOUNT_COUNT;  //资产账号个数，当客户号登录的时候返 回资产账号个数，否则返回0
    typedef int MSG_REC_TYPE_FUTU_DIFF_TIME;  //交易所数据库时间差
    typedef int MSG_REC_TYPE_HOLD_DATE;  //开仓日期
    typedef int MSG_REC_TYPE_INIT_DATE;  //当前交易日期
    typedef int MSG_REC_TYPE_KEY_ID;  //密钥序号
    typedef int MSG_REC_TYPE_LAST_DATE;  //上一交易日
    typedef int MSG_REC_TYPE_LAST_LOGIN_DATE;  //上次登陆日期(需要服务商支持)
    typedef int MSG_REC_TYPE_LAST_LOGIN_TIME;  //上次登陆时间(需要服务商支持)
    typedef int MSG_REC_TYPE_LEG_NUM;  //腿数
    typedef int MSG_REC_TYPE_MONEY_COUNT;  //开通币种个数
    typedef int MSG_REC_TYPE_ONLINE_COUNT;  //当前在线连接数(- 1 表示未知)
    typedef int MSG_REC_TYPE_QUERY_DATE;  //查询日期
    typedef int MSG_REC_TYPE_REPORT_TIME;  //申报时间
    typedef int MSG_REC_TYPE_REQUEST_NUM;  //查询条数
    typedef int MSG_REC_TYPE_RESULT_NUM;  //成功标志(0 表示成功其他表示失败)
    typedef int MSG_REC_TYPE_RSP_TIME;  //交易所反馈时间
    typedef int MSG_REC_TYPE_SERIAL_NO;  //流水号
    typedef int MSG_REC_TYPE_START_DATE;  //起始日期
    typedef int MSG_REC_TYPE_VALID_DATE;  //委托有效期

    extern const char* const MSG_REC_NAME_ARBICODE;  //组合策略
    extern const char* const MSG_REC_NAME_ARBICONTRACT_ID;  //套利合约代码
    extern const char* const MSG_REC_NAME_ARBITRAGE_CODE;  //套利合约代码
    extern const char* const MSG_REC_NAME_BANK_ACCOUNT;  //银行帐号
    extern const char* const MSG_REC_NAME_BANK_NAME;  //银行名称
    extern const char* const MSG_REC_NAME_BANK_NO;  //银行代码
    extern const char* const MSG_REC_NAME_BANK_PASSWORD;  //银行密码
    extern const char* const MSG_REC_NAME_BANK_TRANS_FLAG;  //银行转帐允许标志
    extern const char* const MSG_REC_NAME_BKACCOUNT_REGFLAG;  //银行帐号存管指定标记
    extern const char* const MSG_REC_NAME_BKACCOUNT_RIGHTS;  //银行帐号权限
    extern const char* const MSG_REC_NAME_BKACCOUNT_STATUS;  //银行帐号状态
    extern const char* const MSG_REC_NAME_BUSINESS_NAME;  //业务标志名称
    extern const char* const MSG_REC_NAME_BUSINESS_TYPE;  //成交类别
    extern const char* const MSG_REC_NAME_CANCEL_INFO;  //废单原因
    extern const char* const MSG_REC_NAME_CFMMC_KEY;  //密钥
    extern const char* const MSG_REC_NAME_CHECK_TAB_DATA;  //帐单信息
    extern const char* const MSG_REC_NAME_CLIENT_ID;  //客户号
    extern const char* const MSG_REC_NAME_CLIENT_NAME;  //客户姓名
    extern const char* const MSG_REC_NAME_COMPANY_ID;  //机构编码
    extern const char* const MSG_REC_NAME_COMPANY_NAME;  //公司名称
    extern const char* const MSG_REC_NAME_CONFIRM_NO;  //主场单号
    extern const char* const MSG_REC_NAME_CONTRACT_CODE;  //合约代码
    extern const char* const MSG_REC_NAME_CONTRACT_NAME;  //品种简称
    extern const char* const MSG_REC_NAME_CONTRACT_TYPE;  //合约代码类别
    extern const char* const MSG_REC_NAME_EN_ENTRUST_STATUS;  //允许委托状态
    extern const char* const MSG_REC_NAME_ENTRUST_BS;  //买卖方向
    extern const char* const MSG_REC_NAME_ENTRUST_BS;  //买卖方向
    extern const char* const MSG_REC_NAME_ENTRUST_BS_NAME;  //买卖方向
    extern const char* const MSG_REC_NAME_ENTRUST_KIND;  //委托类型（仅支持0）
    extern const char* const MSG_REC_NAME_ENTRUST_NAME;  //委托状态名称
    extern const char* const MSG_REC_NAME_ENTRUST_STATUS;  //委托状态
    extern const char* const MSG_REC_NAME_ERROR_MESSAGE;  //错误信息
    extern const char* const MSG_REC_NAME_EXCHANGE_NAME;  //交易名称
    extern const char* const MSG_REC_NAME_EXECUTE_TYPE;  //执行方式（1 欧式，2 美式）
    extern const char* const MSG_REC_NAME_FORCECLOSE_REASON;  //强平原因
    extern const char* const MSG_REC_NAME_FORCECLOSE_REASON_NAME;  //强平原因名称
    extern const char* const MSG_REC_NAME_FUND_PASSWORD;  //资金密码
    extern const char* const MSG_REC_NAME_FUTU_BUSINESS_NO;  //成交编号
    extern const char* const MSG_REC_NAME_FUTU_ENTRUST_PROP;  //期货委托属性
    extern const char* const MSG_REC_NAME_FUTU_ENTRUST_TYPE;  //委托类型
    extern const char* const MSG_REC_NAME_FUTU_ENTRUST_TYPE_NAME;  //委托类型名称
    extern const char* const MSG_REC_NAME_FUTU_EXCH_TYPE;  //交易类别
    extern const char* const MSG_REC_NAME_FUTU_PRODUCT_TYPE;  //产品类别(1 期货2 期权3 组合 4 即期 5 期转现)
    extern const char* const MSG_REC_NAME_FUTU_REPORT_UNIT;  //申报单位
    extern const char* const MSG_REC_NAME_FUTUACCOUNT_STATUS;  //期货账号状态('0'为正常，其他为不正常)
    extern const char* const MSG_REC_NAME_FUTUFARE_TYPE;  //费用类别
    extern const char* const MSG_REC_NAME_FUTURES_ACCOUNT;  //期货账号
    extern const char* const MSG_REC_NAME_FUTURES_DIRECTION;  //开平方向
    extern const char* const MSG_REC_NAME_FUTURES_DIRECTION_NAME;  //开平仓方向
    extern const char* const MSG_REC_NAME_FUTURES_RESTRICTS;  //期货账号限制
    extern const char* const MSG_REC_NAME_FUTURES_RIGHTS;  //期货账号权限(对于金融交易所'A'或者空 表示投机 'B'表示套保)
    extern const char* const MSG_REC_NAME_GIVEUP_TYPE;  //放弃执行类型
    extern const char* const MSG_REC_NAME_HEDGE_TYPE;  //套保标志
    extern const char* const MSG_REC_NAME_LAST_LOGIN_IP;  //上次登陆IP 地址(需要服务商支持)
    extern const char* const MSG_REC_NAME_MAIN_FLAG;  //主副标志('1'为主帐号)
    extern const char* const MSG_REC_NAME_MONEY_NAME;  //币种名称
    extern const char* const MSG_REC_NAME_MONEY_TYPE;  //币种类别
    extern const char* const MSG_REC_NAME_NATIVE_CODE;  //原始代码(行情库中的代码)
    extern const char* const MSG_REC_NAME_NEW_PASSWORD;  //新密码
    extern const char* const MSG_REC_NAME_OPTIONS_EXPIRE;  //期权系列
    extern const char* const MSG_REC_NAME_OPTIONS_TYPE;  //期权类型(0 非期权1 看涨2 看跌)
    extern const char* const MSG_REC_NAME_PASSWORD;  //原密码
    extern const char* const MSG_REC_NAME_PASSWORD_TYPE;  //密码类别
    extern const char* const MSG_REC_NAME_POSITION_STR;  //定位串
    extern const char* const MSG_REC_NAME_POSITION_STR;  //定位串
    extern const char* const MSG_REC_NAME_PRICE_UNIT;  //价格单位( '1'   按手存放 '2'   按吨存放)
    extern const char* const MSG_REC_NAME_QUERY_DIRECTION;  //查询方向
    extern const char* const MSG_REC_NAME_QUERY_MODE;  //查询模式 (0  过滤持仓为0 的数据 1  不过滤持仓为0 的)
    extern const char* const MSG_REC_NAME_REMARK;  //摘要
    extern const char* const MSG_REC_NAME_RESERVE_MESSAGE;  //客户预留信息
    extern const char* const MSG_REC_NAME_RESULT;  //登出结果
    extern const char* const MSG_REC_NAME_RIGHTS_TYPE;  //行权方式（0 放弃行权 1 行权）
    extern const char* const MSG_REC_NAME_SECOND_CODE;  //第二腿合约代码
    extern const char* const MSG_REC_NAME_SOURCE_FLAG;  //发起方
    extern const char* const MSG_REC_NAME_SQUARE_FLAG;  //结算标示，用来标志资产账户的结算模式
    extern const char* const MSG_REC_NAME_STATUS_NAME;  //委托状态名称
    extern const char* const MSG_REC_NAME_STOP_FLAG;  //开始交易标志
    extern const char* const MSG_REC_NAME_SYS_STATUS;  //系统状态
    extern const char* const MSG_REC_NAME_SYS_STATUS_NAME;  //系统状态说明
    extern const char* const MSG_REC_NAME_TABCONFIRM_FLAG;  //强制帐单确认
    extern const char* const MSG_REC_NAME_TIME_CONDITION;  //有效期类型
    extern const char* const MSG_REC_NAME_TOTAL_TYPE;  //统计类别(0  明细+汇总 1  明细 2 汇总)
    extern const char* const MSG_REC_NAME_TRANS_NAME;  //成交类别名称
    extern const char* const MSG_REC_NAME_TRANSFER_DIRECTION;  //交易方向
    extern const char* const MSG_REC_NAME_VOLUME_CONDITION;  //成交量类型
    extern const char* const MSG_REC_NAME_WEAVE_TYPE;  //组合委托类型
    extern const char* const MSG_REC_NAME_AMOUNT_BALANCE;  //单位数量手续费金额
    extern const char* const MSG_REC_NAME_APPLY_AMOUNT;  //申请手数
    extern const char* const MSG_REC_NAME_AVERAGE_PRICE;  //平均价
    extern const char* const MSG_REC_NAME_BAIL_BALANCE;  //客户保证金
    extern const char* const MSG_REC_NAME_BEAR_AMOUNT;  //空盘量
    extern const char* const MSG_REC_NAME_BEGIN_AMOUNT;  //期初数量
    extern const char* const MSG_REC_NAME_BEGIN_BALANCE;  //上日结存
    extern const char* const MSG_REC_NAME_BEGIN_EXCH_HOLD;  //上一交易日持仓冻结交易所保证金
    extern const char* const MSG_REC_NAME_BEGIN_HOLD_BALANCE;  //上一交易日持仓冻结保证金
    extern const char* const MSG_REC_NAME_BEXEC_AMOUNT;  //买执行量（买未平数量- 申请放弃量）
    extern const char* const MSG_REC_NAME_BEXEC_EXCH_FARE;  //买执行交易所手续费
    extern const char* const MSG_REC_NAME_BEXEC_FARE;  //买执行客户手续费
    extern const char* const MSG_REC_NAME_BEXEC_PROFIT;  //买执行盈亏
    extern const char* const MSG_REC_NAME_BEXECABLE_AMOUNT;  //买可执行量（买未平数量||0）
    extern const char* const MSG_REC_NAME_BPOS_AMOUNT;  //买未平数量
    extern const char* const MSG_REC_NAME_BUSINESS_AMOUNT;  //成交数量
    extern const char* const MSG_REC_NAME_BUSINESS_BALANCE;  //成交金额
    extern const char* const MSG_REC_NAME_BUSINESS_RATIO;  //成交金额比例
    extern const char* const MSG_REC_NAME_BUY_AMOUNT;  //买入持仓量
    extern const char* const MSG_REC_NAME_BUY_HIGH_AMOUNT;  //最高买入价买量
    extern const char* const MSG_REC_NAME_BUY_HIGH_PRICE;  //最高买入价
    extern const char* const MSG_REC_NAME_BUY_OP_BALANCE;  //买权利金
    extern const char* const MSG_REC_NAME_BUY_PRICE;  //最高买入价
    extern const char* const MSG_REC_NAME_BUY_TOTAL_AMOUNT;  //全部买量
    extern const char* const MSG_REC_NAME_CANCEL_AMOUNT;  //撤单数量
    extern const char* const MSG_REC_NAME_CHANGE_DIRECTION;  //趋势
    extern const char* const MSG_REC_NAME_CLIENT_RISK;  //客户风险率
    extern const char* const MSG_REC_NAME_CURRENT_BALANCE;  //当前余额
    extern const char* const MSG_REC_NAME_DELIVER_BAIL_BALANCE;  //交割保证金
    extern const char* const MSG_REC_NAME_DELIVER_BAIL_RATIO;  //交割保证金比例
    extern const char* const MSG_REC_NAME_DOWNLIMITED_PRICE;  //跌停板价格
    extern const char* const MSG_REC_NAME_DROP_BAIL_BALANCE;  //平仓保证金
    extern const char* const MSG_REC_NAME_DROP_BAIL_RATIO;  //平仓保证金比例
    extern const char* const MSG_REC_NAME_DROP_PROFIT;  //平仓盈亏
    extern const char* const MSG_REC_NAME_DROP_PROFIT_FLOAT;  //平仓浮动盈亏
    extern const char* const MSG_REC_NAME_DROP_UNIT;  //平仓最小单位
    extern const char* const MSG_REC_NAME_DROPCU_BAIL_BALANCE;  //平今仓保证金
    extern const char* const MSG_REC_NAME_DROPCU_BAIL_RATIO;  //平今仓保证金比例
    extern const char* const MSG_REC_NAME_EN_BALANCE;  //可用资金
    extern const char* const MSG_REC_NAME_ENABLE_AMOUNT;  //实际可下单量
    extern const char* const MSG_REC_NAME_ENABLE_BALANCE;  //可用金额
    extern const char* const MSG_REC_NAME_ENTRUST_AMOUNT;  //期货委托数量
    extern const char* const MSG_REC_NAME_EXCH_BAIL_BALANCE;  //交易所保证金
    extern const char* const MSG_REC_NAME_EXCH_HOLD_BALANCE;  //当日持仓冻结交易所保证金
    extern const char* const MSG_REC_NAME_EXCH_RISK;  //交易所风险率
    extern const char* const MSG_REC_NAME_EXEC_AMOUNT;  //申请行权量
    extern const char* const MSG_REC_NAME_FETCH_BALANCE;  //可取资金
    extern const char* const MSG_REC_NAME_FORM_BUY_AMOUNT;  //组合买入数量
    extern const char* const MSG_REC_NAME_FORM_SALE_AMOUNT;  //组合卖出数量
    extern const char* const MSG_REC_NAME_FROZEN_BALANCE;  //冻结资金
    extern const char* const MSG_REC_NAME_FROZEN_FARE;  //冻结费用
    extern const char* const MSG_REC_NAME_FUND_IN;  //入金
    extern const char* const MSG_REC_NAME_FUND_OUT;  //出金
    extern const char* const MSG_REC_NAME_FUTU_AVERAGE_PRICE;  //平均价
    extern const char* const MSG_REC_NAME_FUTU_BUSINESS_PRICE;  //期货成交价格
    extern const char* const MSG_REC_NAME_FUTU_ENTRUST_PRICE;  //期货委托价格
    extern const char* const MSG_REC_NAME_FUTU_HIGH_PRICE;  //最高价
    extern const char* const MSG_REC_NAME_FUTU_LAST_PRICE;  //最新价格
    extern const char* const MSG_REC_NAME_FUTU_LOW_PRICE;  //最低价
    extern const char* const MSG_REC_NAME_FUTU_OPEN_PRICE;  //开盘价
    extern const char* const MSG_REC_NAME_FUTU_PRICE_STEP;  //最小价差
    extern const char* const MSG_REC_NAME_GIVEUP_AMOUNT;  //申请放弃量
    extern const char* const MSG_REC_NAME_HIGH_LIMIT_PRICE;  //报价上限
    extern const char* const MSG_REC_NAME_HIS_BUSIN_BALANCE;  //老仓持仓成交金额
    extern const char* const MSG_REC_NAME_HOLD_BALANCE;  //上交易日保证金
    extern const char* const MSG_REC_NAME_HOLD_BALANCE_TOT;  //总持仓
    extern const char* const MSG_REC_NAME_HOLD_PROFIT;  //持仓盯市盈亏
    extern const char* const MSG_REC_NAME_HOLD_PROFIT_FLOAT;  //持仓浮动盈亏
    extern const char* const MSG_REC_NAME_HOLD_UNIT;  //开仓最小单位
    extern const char* const MSG_REC_NAME_INTEREST_BALANCE;  //预计利息
    extern const char* const MSG_REC_NAME_LATE_FEE;  //滞纳金
    extern const char* const MSG_REC_NAME_LATEFEE_RATE;  //滞纳金比例
    extern const char* const MSG_REC_NAME_LIMITED_AMOUNT;  //限价委托每笔最大下单数量
    extern const char* const MSG_REC_NAME_LOW_LIMIT_PRICE;  //报价下限
    extern const char* const MSG_REC_NAME_MARKET_AMOUNT;  //市价委托每笔最大下单数量
    extern const char* const MSG_REC_NAME_MARKET_CLIENT_RIGHT;  //客户市值权益(UFT)
    extern const char* const MSG_REC_NAME_MARKET_VALUE;  //客户市值权益(06)
    extern const char* const MSG_REC_NAME_MAX_ENTRUST_AMOUNT;  //最大可下单量
    extern const char* const MSG_REC_NAME_MAX_LIMIT_AMOUNT;  //最大下单数量
    extern const char* const MSG_REC_NAME_MIN_LIMIT_AMOUNT;  //最小下单数量
    extern const char* const MSG_REC_NAME_OCCUR_BALANCE;  //发生金额
    extern const char* const MSG_REC_NAME_OPEN_BAIL_BALANCE;  //开仓保证金
    extern const char* const MSG_REC_NAME_OPEN_BAIL_RATIO;  //开仓保证金比例
    extern const char* const MSG_REC_NAME_OPEN_DROP_PRICE;  //开平仓价格
    extern const char* const MSG_REC_NAME_OPTION_PREMIUMS;  //客户权利金净值(UFT)
    extern const char* const MSG_REC_NAME_OPTION_PROFIT_FLOAT;  //期权持仓浮动盈亏(UFT)
    extern const char* const MSG_REC_NAME_PAYMENT_BALANCE;  //交割货款
    extern const char* const MSG_REC_NAME_POST_BALANCE;  //发生后余额
    extern const char* const MSG_REC_NAME_PRE_DELTA;  //昨虚实度
    extern const char* const MSG_REC_NAME_PRE_RIGHTS_BALANCE;  //期初客户权益
    extern const char* const MSG_REC_NAME_PRE_SQUARE_PRICE;  //昨日结算价
    extern const char* const MSG_REC_NAME_PROFIT;  //盯市盈亏
    extern const char* const MSG_REC_NAME_PROFIT_FLOAT;  //浮动盈亏
    extern const char* const MSG_REC_NAME_REAL_AMOUNT;  //总持仓
    extern const char* const MSG_REC_NAME_REAL_BUY_AMOUNT;  //今开仓买入持仓量
    extern const char* const MSG_REC_NAME_REAL_DROP;  //盯市平仓盈亏
    extern const char* const MSG_REC_NAME_REAL_DROP_FLOAT;  //浮动平仓盈亏
    extern const char* const MSG_REC_NAME_REAL_HOLD_BALANCEA;  //当日开仓预冻结金额
    extern const char* const MSG_REC_NAME_REAL_HOLD_BALANCEB;  //当日开仓冻结保证金和费用
    extern const char* const MSG_REC_NAME_REAL_SALE_AMOUNT;  //今开仓卖出持仓量
    extern const char* const MSG_REC_NAME_RIGHTS_BALANCE;  //客户权益
    extern const char* const MSG_REC_NAME_RISK_RATE;  //风险率
    extern const char* const MSG_REC_NAME_RISK_RATE_N;  //内部风险率
    extern const char* const MSG_REC_NAME_SALE_AMOUNT;  //卖出持仓量
    extern const char* const MSG_REC_NAME_SALE_LOW_AMOUNT;  //最低卖价卖量
    extern const char* const MSG_REC_NAME_SALE_LOW_PRICE;  //最低卖出价格
    extern const char* const MSG_REC_NAME_SALE_OP_BALANCE;  //卖权利金(06）
    extern const char* const MSG_REC_NAME_SALE_PRICE;  //最低卖价价格
    extern const char* const MSG_REC_NAME_SALE_TOTAL_AMOUNT;  //全部卖量
    extern const char* const MSG_REC_NAME_SELL_OP_BALANCE;  //卖权利金(UFT)
    extern const char* const MSG_REC_NAME_SEXEC_AMOUNT;  //卖执行量（卖未平数量- 申请放弃量）
    extern const char* const MSG_REC_NAME_SEXEC_EXCH_FARE;  //卖执行交易所手续费
    extern const char* const MSG_REC_NAME_SEXEC_FARE;  //卖执行客户手续费
    extern const char* const MSG_REC_NAME_SEXEC_PROFIT;  //卖执行盈亏
    extern const char* const MSG_REC_NAME_SPEC_AMOUNT_BALANCE;  //特殊单位数量手续费金额
    extern const char* const MSG_REC_NAME_SPEC_BUSINESS_RATIO;  //特殊成交金额比例
    extern const char* const MSG_REC_NAME_SPOS_AMOUNT;  //卖未平数量
    extern const char* const MSG_REC_NAME_SPRING_PRICE;  //止损触发价格
    extern const char* const MSG_REC_NAME_SQUARE_PRICE;  //结算价
    extern const char* const MSG_REC_NAME_STRIKE_PRICE;  //执行价
    extern const char* const MSG_REC_NAME_SUPERADD_BALANCE;  //追加保证金
    extern const char* const MSG_REC_NAME_TODAY_BUSIN_BALANCE;  //今仓持仓成交金额
    extern const char* const MSG_REC_NAME_TODAY_ENABLE_AMOUNT;  //当日开仓可用数量
    extern const char* const MSG_REC_NAME_TOTAL_FARE;  //手续费
    extern const char* const MSG_REC_NAME_UNDERLYING_PRICE;  //标的指数价格
    extern const char* const MSG_REC_NAME_UPLIMITED_PRICE;  //涨停板价格
    extern const char* const MSG_REC_NAME_WILLGIVEUP_AMOUNT;  //放弃手数
    extern const char* const MSG_REC_NAME_ACTION_IN;  //操作类型 (0  不区分投机套保 1      区分投机套保)
    extern const char* const MSG_REC_NAME_AMOUNT_PER_HAND;  //每手吨数
    extern const char* const MSG_REC_NAME_BATCH_NO;  //委托批号
    extern const char* const MSG_REC_NAME_BEGIN_DATE;  //开始日期
    extern const char* const MSG_REC_NAME_BRANCH_NO;  //分支代码
    extern const char* const MSG_REC_NAME_BUSINESS_FLAG;  //业务标志
    extern const char* const MSG_REC_NAME_BUSINESS_TIME;  //成交时间
    extern const char* const MSG_REC_NAME_CORP_CLIENT_GROUP;  //公司客户类别
    extern const char* const MSG_REC_NAME_CURR_DATE;  //发生日期
    extern const char* const MSG_REC_NAME_CURR_TIME;  //数据库当前时间
    extern const char* const MSG_REC_NAME_END_DATE;  //结束日期
    extern const char* const MSG_REC_NAME_ENTRUST_NO;  //委托编号
    extern const char* const MSG_REC_NAME_ENTRUST_TIME;  //委托时间
    extern const char* const MSG_REC_NAME_EXPIRE_DATE;  //合约到期日
    extern const char* const MSG_REC_NAME_FORM_BUY_PRICE;  //组合买入价格
    extern const char* const MSG_REC_NAME_FORM_SALE_PRICE;  //组合卖出价格
    extern const char* const MSG_REC_NAME_FUND_ACCOUNT;  //资金账号
    extern const char* const MSG_REC_NAME_FUNDACCOUNT_COUNT;  //资产账号个数，当客户号登录的时候返 回资产账号个数，否则返回0
    extern const char* const MSG_REC_NAME_FUTU_DIFF_TIME;  //交易所数据库时间差
    extern const char* const MSG_REC_NAME_HOLD_DATE;  //开仓日期
    extern const char* const MSG_REC_NAME_INIT_DATE;  //当前交易日期
    extern const char* const MSG_REC_NAME_KEY_ID;  //密钥序号
    extern const char* const MSG_REC_NAME_LAST_DATE;  //上一交易日
    extern const char* const MSG_REC_NAME_LAST_LOGIN_DATE;  //上次登陆日期(需要服务商支持)
    extern const char* const MSG_REC_NAME_LAST_LOGIN_TIME;  //上次登陆时间(需要服务商支持)
    extern const char* const MSG_REC_NAME_LEG_NUM;  //腿数
    extern const char* const MSG_REC_NAME_MONEY_COUNT;  //开通币种个数
    extern const char* const MSG_REC_NAME_ONLINE_COUNT;  //当前在线连接数(- 1 表示未知)
    extern const char* const MSG_REC_NAME_QUERY_DATE;  //查询日期
    extern const char* const MSG_REC_NAME_REPORT_TIME;  //申报时间
    extern const char* const MSG_REC_NAME_REQUEST_NUM;  //查询条数
    extern const char* const MSG_REC_NAME_RSP_TIME;  //交易所反馈时间
    extern const char* const MSG_REC_NAME_SERIAL_NO;  //流水号
    extern const char* const MSG_REC_NAME_START_DATE;  //起始日期
    extern const char* const MSG_REC_NAME_VALID_DATE;  //委托有效期


enum QUOTE_PRICE{
    FUTU_OPEN_PRICE,
    FUTU_HIGH_PRICE,
    FUTU_LOW_PRICE,
    FUTU_LAST_PRICE,
    AVERAGE_PRICE,
    UPLIMITED_PRICE,
    DOWNLIMITED_PRICE,

    FUTU_CLOSE_PRICE,
    PRE_CLOSE_PRICE,
    SQUARE_PRICE,
    PRE_SQUARE_PRICE,
    BUSINESS_BALANCE,

    BID_PRICE1,
    BID_PRICE2,
    BID_PRICE3,
    BID_PRICE4,
    BID_PRICE5,

    ASK_PRICE1,
    ASK_PRICE2,
    ASK_PRICE3,
    ASK_PRICE4,
    ASK_PRICE5,

    FORM_BID_PRICE,
    FORM_ASK_PRICE
};

enum QUOTE_QUANTITY{
    BUSINESS_VOLUME,
    OPEN_INTEREST,
    PRE_OPEN_INTEREST,

    BID_TOTAL_VOLUME,
    BID_VOLUME1,
    BID_VOLUME2,
    BID_VOLUME3,
    BID_VOLUME4,
    BID_VOLUME5,

    ASK_TOTAL_VOLUME,
    ASK_VOLUME1,
    ASK_VOLUME2,
    ASK_VOLUME3,
    ASK_VOLUME4,
    ASK_VOLUME5,

    FORM_BID_VOLUME,
    FORM_ASK_VOLUME,

};

enum QUOTE_INDEX{
    PRE_DELTA,
    CURR_DELTA

};

struct PositionRspInfo{

};