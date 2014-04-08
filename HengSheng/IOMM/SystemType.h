#pragma once

    typedef char MSG_REC_TYPE_ARBICODE[30];  //��ϲ���
    typedef char MSG_REC_TYPE_ARBICONTRACT_ID[30];  //������Լ����
    typedef char MSG_REC_TYPE_ARBITRAGE_CODE[30];  //������Լ����
    typedef char MSG_REC_TYPE_BANK_ACCOUNT[32];  //�����ʺ�
    typedef char MSG_REC_TYPE_BANK_NAME[64];  //��������
    typedef char MSG_REC_TYPE_BANK_NO[4];  //���д���
    typedef char MSG_REC_TYPE_BANK_PASSWORD[10];  //��������
    typedef char MSG_REC_TYPE_BANK_TRANS_FLAG;  //����ת�������־
    typedef char MSG_REC_TYPE_BKACCOUNT_REGFLAG;  //�����ʺŴ��ָ�����
    typedef char MSG_REC_TYPE_BKACCOUNT_RIGHTS[64];  //�����ʺ�Ȩ��
    typedef char MSG_REC_TYPE_BKACCOUNT_STATUS;  //�����ʺ�״̬
    typedef char MSG_REC_TYPE_BUSINESS_NAME[16];  //ҵ���־����
    typedef char MSG_REC_TYPE_BUSINESS_TYPE;  //�ɽ����
    typedef char MSG_REC_TYPE_CANCEL_INFO[20];  //�ϵ�ԭ��
    typedef char MSG_REC_TYPE_CFMMC_KEY[10];  //��Կ
    typedef char MSG_REC_TYPE_CHECK_TAB_DATA[2000];  //�ʵ���Ϣ
    typedef char MSG_REC_TYPE_CLIENT_ID[18];  //�ͻ���
    //typedef char MSG_REC_TYPE_CLIENT_NAME[14];  //�ͻ�����
    typedef char MSG_REC_TYPE_CLIENT_NAME[18];  //�ͻ�����
    typedef char MSG_REC_TYPE_COMPANY_ID[10];  //��������
    typedef char MSG_REC_TYPE_COMPANY_NAME[64];  //��˾����
    typedef char MSG_REC_TYPE_CONFIRM_NO[20];  //��������
    typedef char MSG_REC_TYPE_CONTRACT_CODE[30];  //��Լ����
    typedef char MSG_REC_TYPE_CONTRACT_NAME[12];  //Ʒ�ּ��
    typedef char MSG_REC_TYPE_CONTRACT_TYPE;  //��Լ�������
    typedef char MSG_REC_TYPE_CONTRACT_TYPE;  //��Լ�������
    typedef char MSG_REC_TYPE_EN_ENTRUST_STATUS[10];  //����ί��״̬
    typedef char MSG_REC_TYPE_ENTRUST_BS;  //��������
    typedef char MSG_REC_TYPE_ENTRUST_BS;   //��������
    typedef char MSG_REC_TYPE_ENTRUST_BS_NAME[12];  //��������
    typedef char MSG_REC_TYPE_ENTRUST_KIND;  //ί�����ͣ���֧��0��
    typedef char MSG_REC_TYPE_ENTRUST_NAME[8];  //ί��״̬����
    typedef char MSG_REC_TYPE_ENTRUST_STATUS;  //ί��״̬
    typedef char MSG_REC_TYPE_ERROR_MESSAGE[255];  //������Ϣ
    typedef char MSG_REC_TYPE_EXCHANGE_NAME[16];  //��������
    //typedef char MSG_REC_TYPE_EXCHANGE_NAME[8];  //��������
    typedef char MSG_REC_TYPE_EXECUTE_TYPE;  //ִ�з�ʽ��1 ŷʽ��2 ��ʽ��
    typedef char MSG_REC_TYPE_FORCECLOSE_REASON;  //ǿƽԭ��
    typedef char MSG_REC_TYPE_FORCECLOSE_REASON_NAME[12];  //ǿƽԭ������
    typedef char MSG_REC_TYPE_FUND_PASSWORD[10];  //�ʽ�����
    typedef char MSG_REC_TYPE_FUTU_BUSINESS_NO[20];  //�ɽ����
    typedef char MSG_REC_TYPE_FUTU_ENTRUST_PROP;  //�ڻ�ί������
    typedef char MSG_REC_TYPE_FUTU_ENTRUST_TYPE;  //ί������
    typedef char MSG_REC_TYPE_FUTU_ENTRUST_TYPE_NAME[12];  //ί����������
    typedef char MSG_REC_TYPE_FUTU_EXCH_TYPE[4];  //�������
    typedef char MSG_REC_TYPE_FUTU_PRODUCT_TYPE;  //��Ʒ���(1 �ڻ�2 ��Ȩ3 ��� 4 ���� 5 ��ת��)
    typedef char MSG_REC_TYPE_FUTU_REPORT_UNIT;  //�걨��λ
    typedef char MSG_REC_TYPE_FUTUACCOUNT_STATUS;  //�ڻ��˺�״̬('0'Ϊ����������Ϊ������)
    typedef char MSG_REC_TYPE_FUTUFARE_TYPE;  //�������
    typedef char MSG_REC_TYPE_FUTUFARE_TYPE;  //�������
    typedef char MSG_REC_TYPE_FUTURES_ACCOUNT[12];  //�ڻ��˺�
    typedef char MSG_REC_TYPE_FUTURES_DIRECTION;  //��ƽ����
    typedef char MSG_REC_TYPE_FUTURES_DIRECTION_NAME[12];  //��ƽ�ַ���
    typedef char MSG_REC_TYPE_FUTURES_RESTRICTS[16];  //�ڻ��˺�����
    typedef char MSG_REC_TYPE_FUTURES_RIGHTS[16];  //�ڻ��˺�Ȩ��(���ڽ��ڽ�����'A'���߿� ��ʾͶ�� 'B'��ʾ�ױ�)
    typedef char MSG_REC_TYPE_GIVEUP_TYPE;  //����ִ������
    typedef char MSG_REC_TYPE_HEDGE_TYPE;  //�ױ���־
    typedef char MSG_REC_TYPE_LAST_LOGIN_IP[20];  //�ϴε�½IP ��ַ(��Ҫ������֧��)
    typedef char MSG_REC_TYPE_MAIN_FLAG;  //������־('1'Ϊ���ʺ�)
    typedef char MSG_REC_TYPE_MONEY_NAME[64];  //��������
    typedef char MSG_REC_TYPE_MONEY_TYPE;  //�������
    typedef char MSG_REC_TYPE_NATIVE_CODE[30];  //ԭʼ����(������еĴ���)
    typedef char MSG_REC_TYPE_NEW_PASSWORD[10];  //������
    typedef char MSG_REC_TYPE_OPTIONS_EXPIRE[30];  //��Ȩϵ��
    typedef char MSG_REC_TYPE_OPTIONS_TYPE;  //��Ȩ����(0 ����Ȩ1 ����2 ����)
    typedef char MSG_REC_TYPE_PASSWORD[10];  //ԭ����
    typedef char MSG_REC_TYPE_PASSWORD_TYPE;  //�������
    typedef char MSG_REC_TYPE_POSITION_STR[100];  //��λ��
    //typedef char MSG_REC_TYPE_POSITION_STR[32];  //��λ��
    typedef char MSG_REC_TYPE_PRICE_UNIT;  //�۸�λ( '1'   ���ִ�� '2'   ���ִ��)
    typedef char MSG_REC_TYPE_QUERY_DIRECTION;  //��ѯ����
    typedef char MSG_REC_TYPE_QUERY_MODE;  //��ѯģʽ (0  ���˳ֲ�Ϊ0 ������ 1  �����˳ֲ�Ϊ0 ��)
    typedef char MSG_REC_TYPE_REMARK[255];  //ժҪ
    typedef char MSG_REC_TYPE_RESERVE_MESSAGE[64];  //�ͻ�Ԥ����Ϣ
    typedef char MSG_REC_TYPE_RESULT_TEXT[20];  //�ǳ����
    typedef char MSG_REC_TYPE_RIGHTS_TYPE;  //��Ȩ��ʽ��0 ������Ȩ 1 ��Ȩ��
    typedef char MSG_REC_TYPE_SECOND_CODE[30];  //�ڶ��Ⱥ�Լ����
    typedef char MSG_REC_TYPE_SOURCE_FLAG;  //����
    typedef char MSG_REC_TYPE_SQUARE_FLAG;  //�����ʾ��������־�ʲ��˻��Ľ���ģʽ
    typedef char MSG_REC_TYPE_STATUS_NAME[60];  //ί��״̬����
    typedef char MSG_REC_TYPE_STOP_FLAG;  //��ʼ���ױ�־
    typedef char MSG_REC_TYPE_SYS_STATUS;  //ϵͳ״̬
    typedef char MSG_REC_TYPE_SYS_STATUS_NAME[64];  //ϵͳ״̬˵��
    typedef char MSG_REC_TYPE_TABCONFIRM_FLAG;  //ǿ���ʵ�ȷ��
    typedef char MSG_REC_TYPE_TIME_CONDITION;  //��Ч������
    typedef char MSG_REC_TYPE_TOTAL_TYPE;  //ͳ�����(0  ��ϸ+���� 1  ��ϸ 2 ����)
    typedef char MSG_REC_TYPE_TRANS_NAME[64];  //�ɽ��������
    typedef char MSG_REC_TYPE_TRANSFER_DIRECTION;  //���׷���
    typedef char MSG_REC_TYPE_VOLUME_CONDITION;  //�ɽ�������
    typedef char MSG_REC_TYPE_WEAVE_TYPE;  //���ί������
    typedef double MSG_REC_TYPE_AMOUNT_BALANCE;  //��λ���������ѽ��
    typedef double MSG_REC_TYPE_APPLY_AMOUNT;  //��������
    typedef double MSG_REC_TYPE_AVERAGE_PRICE;  //ƽ����
    typedef double MSG_REC_TYPE_BAIL_BALANCE;  //�ͻ���֤��
    typedef double MSG_REC_TYPE_BEAR_AMOUNT;  //������
    typedef double MSG_REC_TYPE_BEGIN_AMOUNT;  //�ڳ�����
    typedef double MSG_REC_TYPE_BEGIN_BALANCE;  //���ս��
    typedef double MSG_REC_TYPE_BEGIN_EXCH_HOLD;  //��һ�����ճֲֶ��ύ������֤��
    typedef double MSG_REC_TYPE_BEGIN_HOLD_BALANCE;  //��һ�����ճֲֶ��ᱣ֤��
    typedef double MSG_REC_TYPE_BEXEC_AMOUNT;  //��ִ��������δƽ����- �����������
    typedef double MSG_REC_TYPE_BEXEC_EXCH_FARE;  //��ִ�н�����������
    typedef double MSG_REC_TYPE_BEXEC_FARE;  //��ִ�пͻ�������
    typedef double MSG_REC_TYPE_BEXEC_PROFIT;  //��ִ��ӯ��
    typedef double MSG_REC_TYPE_BEXECABLE_AMOUNT;  //���ִ��������δƽ����||0��
    typedef double MSG_REC_TYPE_BPOS_AMOUNT;  //��δƽ����
    typedef double MSG_REC_TYPE_BUSINESS_AMOUNT;  //�ɽ�����
    typedef double MSG_REC_TYPE_BUSINESS_BALANCE;  //�ɽ����
    typedef double MSG_REC_TYPE_BUSINESS_RATIO;  //�ɽ�������
    typedef double MSG_REC_TYPE_BUY_AMOUNT;  //����ֲ���
    typedef double MSG_REC_TYPE_BUY_HIGH_AMOUNT;  //������������
    typedef double MSG_REC_TYPE_BUY_HIGH_PRICE;  //��������
    typedef double MSG_REC_TYPE_BUY_OP_BALANCE;  //��Ȩ����
    typedef double MSG_REC_TYPE_BUY_PRICE;  //��������
    typedef double MSG_REC_TYPE_BUY_TOTAL_AMOUNT;  //ȫ������
    typedef double MSG_REC_TYPE_CANCEL_AMOUNT;  //��������
    typedef double MSG_REC_TYPE_CHANGE_DIRECTION;  //����
    typedef double MSG_REC_TYPE_CLIENT_RISK;  //�ͻ�������
    typedef double MSG_REC_TYPE_CURRENT_BALANCE;  //��ǰ���
    typedef double MSG_REC_TYPE_DELIVER_BAIL_BALANCE;  //���֤��
    typedef double MSG_REC_TYPE_DELIVER_BAIL_RATIO;  //���֤�����
    typedef double MSG_REC_TYPE_DOWNLIMITED_PRICE;  //��ͣ��۸�
    typedef double MSG_REC_TYPE_DROP_BAIL_BALANCE;  //ƽ�ֱ�֤��
    typedef double MSG_REC_TYPE_DROP_BAIL_RATIO;  //ƽ�ֱ�֤�����
    typedef double MSG_REC_TYPE_DROP_PROFIT;  //ƽ��ӯ��
    typedef double MSG_REC_TYPE_DROP_PROFIT_FLOAT;  //ƽ�ָ���ӯ��
    typedef double MSG_REC_TYPE_DROP_UNIT;  //ƽ����С��λ
    typedef double MSG_REC_TYPE_DROPCU_BAIL_BALANCE;  //ƽ��ֱ�֤��
    typedef double MSG_REC_TYPE_DROPCU_BAIL_RATIO;  //ƽ��ֱ�֤�����
    typedef double MSG_REC_TYPE_EN_BALANCE;  //�����ʽ�
    typedef double MSG_REC_TYPE_ENABLE_AMOUNT;  //ʵ�ʿ��µ���
    typedef double MSG_REC_TYPE_ENABLE_BALANCE;  //���ý��
    typedef double MSG_REC_TYPE_ENTRUST_AMOUNT;  //�ڻ�ί������
    typedef double MSG_REC_TYPE_EXCH_BAIL_BALANCE;  //��������֤��
    typedef double MSG_REC_TYPE_EXCH_HOLD_BALANCE;  //���ճֲֶ��ύ������֤��
    typedef double MSG_REC_TYPE_EXCH_RISK;  //������������
    typedef double MSG_REC_TYPE_EXEC_AMOUNT;  //������Ȩ��
    typedef double MSG_REC_TYPE_FETCH_BALANCE;  //��ȡ�ʽ�
    typedef double MSG_REC_TYPE_FORM_BUY_AMOUNT;  //�����������
    typedef double MSG_REC_TYPE_FORM_SALE_AMOUNT;  //�����������
    typedef double MSG_REC_TYPE_FROZEN_BALANCE;  //�����ʽ�
    typedef double MSG_REC_TYPE_FROZEN_FARE;  //�������
    typedef double MSG_REC_TYPE_FUND_IN;  //���
    typedef double MSG_REC_TYPE_FUND_OUT;  //����
    typedef double MSG_REC_TYPE_FUTU_AVERAGE_PRICE;  //ƽ����
    typedef double MSG_REC_TYPE_FUTU_BUSINESS_PRICE;  //�ڻ��ɽ��۸�
    typedef double MSG_REC_TYPE_FUTU_ENTRUST_PRICE;  //�ڻ�ί�м۸�
    typedef double MSG_REC_TYPE_FUTU_HIGH_PRICE;  //��߼�
    typedef double MSG_REC_TYPE_FUTU_LAST_PRICE;  //���¼۸�
    typedef double MSG_REC_TYPE_FUTU_LOW_PRICE;  //��ͼ�
    typedef double MSG_REC_TYPE_FUTU_OPEN_PRICE;  //���̼�
    typedef double MSG_REC_TYPE_FUTU_PRICE_STEP;  //��С�۲�
    typedef double MSG_REC_TYPE_GIVEUP_AMOUNT;  //���������
    typedef double MSG_REC_TYPE_HIGH_LIMIT_PRICE;  //��������
    typedef double MSG_REC_TYPE_HIS_BUSIN_BALANCE;  //�ϲֲֳֳɽ����
    typedef double MSG_REC_TYPE_HOLD_BALANCE;  //�Ͻ����ձ�֤��
    typedef double MSG_REC_TYPE_HOLD_BALANCE_TOT;  //�ֲܳ�
    typedef double MSG_REC_TYPE_HOLD_PROFIT;  //�ֲֶ���ӯ��
    typedef double MSG_REC_TYPE_HOLD_PROFIT_FLOAT;  //�ֲָ���ӯ��
    typedef double MSG_REC_TYPE_HOLD_UNIT;  //������С��λ
    typedef double MSG_REC_TYPE_INTEREST_BALANCE;  //Ԥ����Ϣ
    typedef double MSG_REC_TYPE_LATE_FEE;  //���ɽ�
    typedef double MSG_REC_TYPE_LATEFEE_RATE;  //���ɽ����
    typedef double MSG_REC_TYPE_LIMITED_AMOUNT;  //�޼�ί��ÿ������µ�����
    typedef double MSG_REC_TYPE_LOW_LIMIT_PRICE;  //��������
    typedef double MSG_REC_TYPE_MARKET_AMOUNT;  //�м�ί��ÿ������µ�����
    typedef double MSG_REC_TYPE_MARKET_CLIENT_RIGHT;  //�ͻ���ֵȨ��(UFT)
    typedef double MSG_REC_TYPE_MARKET_VALUE;  //�ͻ���ֵȨ��(06)
    typedef double MSG_REC_TYPE_MAX_ENTRUST_AMOUNT;  //�����µ���
    typedef double MSG_REC_TYPE_MAX_LIMIT_AMOUNT;  //����µ�����
    typedef double MSG_REC_TYPE_MIN_LIMIT_AMOUNT;  //��С�µ�����
    typedef double MSG_REC_TYPE_OCCUR_BALANCE;  //�������
    typedef double MSG_REC_TYPE_OPEN_BAIL_BALANCE;  //���ֱ�֤��
    typedef double MSG_REC_TYPE_OPEN_BAIL_RATIO;  //���ֱ�֤�����
    typedef double MSG_REC_TYPE_OPEN_DROP_PRICE;  //��ƽ�ּ۸�
    typedef double MSG_REC_TYPE_OPTION_PREMIUMS;  //�ͻ�Ȩ����ֵ(UFT)
    typedef double MSG_REC_TYPE_OPTION_PROFIT_FLOAT;  //��Ȩ�ֲָ���ӯ��(UFT)
    typedef double MSG_REC_TYPE_PAYMENT_BALANCE;  //�������
    typedef double MSG_REC_TYPE_POST_BALANCE;  //���������
    typedef double MSG_REC_TYPE_PRE_DELTA;  //����ʵ��
    typedef double MSG_REC_TYPE_PRE_RIGHTS_BALANCE;  //�ڳ��ͻ�Ȩ��
    typedef double MSG_REC_TYPE_PRE_SQUARE_PRICE;  //���ս����
    typedef double MSG_REC_TYPE_PROFIT;  //����ӯ��
    typedef double MSG_REC_TYPE_PROFIT_FLOAT;  //����ӯ��
    typedef double MSG_REC_TYPE_REAL_AMOUNT;  //�ֲܳ�
    typedef double MSG_REC_TYPE_REAL_BUY_AMOUNT;  //�񿪲�����ֲ���
    typedef double MSG_REC_TYPE_REAL_DROP;  //����ƽ��ӯ��
    typedef double MSG_REC_TYPE_REAL_DROP_FLOAT;  //����ƽ��ӯ��
    typedef double MSG_REC_TYPE_REAL_HOLD_BALANCEA;  //���տ���Ԥ������
    typedef double MSG_REC_TYPE_REAL_HOLD_BALANCEB;  //���տ��ֶ��ᱣ֤��ͷ���
    typedef double MSG_REC_TYPE_REAL_SALE_AMOUNT;  //�񿪲������ֲ���
    typedef double MSG_REC_TYPE_RIGHTS_BALANCE;  //�ͻ�Ȩ��
    typedef double MSG_REC_TYPE_RISK_RATE;  //������
    typedef double MSG_REC_TYPE_RISK_RATE_N;  //�ڲ�������
    typedef double MSG_REC_TYPE_SALE_AMOUNT;  //�����ֲ���
    typedef double MSG_REC_TYPE_SALE_LOW_AMOUNT;  //�����������
    typedef double MSG_REC_TYPE_SALE_LOW_PRICE;  //��������۸�
    typedef double MSG_REC_TYPE_SALE_OP_BALANCE;  //��Ȩ����(06��
    typedef double MSG_REC_TYPE_SALE_PRICE;  //������ۼ۸�
    typedef double MSG_REC_TYPE_SALE_TOTAL_AMOUNT;  //ȫ������
    typedef double MSG_REC_TYPE_SELL_OP_BALANCE;  //��Ȩ����(UFT)
    typedef double MSG_REC_TYPE_SEXEC_AMOUNT;  //��ִ��������δƽ����- �����������
    typedef double MSG_REC_TYPE_SEXEC_EXCH_FARE;  //��ִ�н�����������
    typedef double MSG_REC_TYPE_SEXEC_FARE;  //��ִ�пͻ�������
    typedef double MSG_REC_TYPE_SEXEC_PROFIT;  //��ִ��ӯ��
    typedef double MSG_REC_TYPE_SPEC_AMOUNT_BALANCE;  //���ⵥλ���������ѽ��
    typedef double MSG_REC_TYPE_SPEC_BUSINESS_RATIO;  //����ɽ�������
    typedef double MSG_REC_TYPE_SPOS_AMOUNT;  //��δƽ����
    typedef double MSG_REC_TYPE_SPRING_PRICE;  //ֹ�𴥷��۸�
    typedef double MSG_REC_TYPE_SQUARE_PRICE;  //�����
    typedef double MSG_REC_TYPE_STRIKE_PRICE;  //ִ�м�
    typedef double MSG_REC_TYPE_SUPERADD_BALANCE;  //׷�ӱ�֤��
    typedef double MSG_REC_TYPE_TODAY_BUSIN_BALANCE;  //��ֲֳֳɽ����
    typedef double MSG_REC_TYPE_TODAY_ENABLE_AMOUNT;  //���տ��ֿ�������
    typedef double MSG_REC_TYPE_TOTAL_FARE;  //������
    typedef double MSG_REC_TYPE_UNDERLYING_PRICE;  //���ָ���۸�
    typedef double MSG_REC_TYPE_UPLIMITED_PRICE;  //��ͣ��۸�
    typedef double MSG_REC_TYPE_WILLGIVEUP_AMOUNT;  //��������
    typedef int MSG_REC_TYPE_ACTION_IN;  //�������� (0  ������Ͷ���ױ� 1  ����Ͷ���ױ�)
    typedef int MSG_REC_TYPE_AMOUNT_PER_HAND;  //ÿ�ֶ���
    typedef int MSG_REC_TYPE_BATCH_NO;  //ί������
    typedef int MSG_REC_TYPE_BEGIN_DATE;  //��ʼ����
    typedef int MSG_REC_TYPE_BRANCH_NO;  //��֧����
    typedef int MSG_REC_TYPE_BUSINESS_FLAG;  //ҵ���־
    typedef int MSG_REC_TYPE_BUSINESS_TIME;  //�ɽ�ʱ��
    typedef int MSG_REC_TYPE_CORP_CLIENT_GROUP;  //��˾�ͻ����
    typedef int MSG_REC_TYPE_CURR_DATE;  //��������
    typedef int MSG_REC_TYPE_CURR_TIME;  //���ݿ⵱ǰʱ��
    typedef int MSG_REC_TYPE_END_DATE;  //��������
    typedef int MSG_REC_TYPE_ENTRUST_NO;  //ί�б��
    typedef int MSG_REC_TYPE_ENTRUST_TIME;  //ί��ʱ��
    typedef int MSG_REC_TYPE_EXPIRE_DATE;  //��Լ������
    typedef int MSG_REC_TYPE_FORM_BUY_PRICE;  //�������۸�
    typedef int MSG_REC_TYPE_FORM_SALE_PRICE;  //��������۸�
    typedef int MSG_REC_TYPE_FUND_ACCOUNT;  //�ʽ��˺�
    typedef int MSG_REC_TYPE_FUNDACCOUNT_COUNT;  //�ʲ��˺Ÿ��������ͻ��ŵ�¼��ʱ�� ���ʲ��˺Ÿ��������򷵻�0
    typedef int MSG_REC_TYPE_FUTU_DIFF_TIME;  //���������ݿ�ʱ���
    typedef int MSG_REC_TYPE_HOLD_DATE;  //��������
    typedef int MSG_REC_TYPE_INIT_DATE;  //��ǰ��������
    typedef int MSG_REC_TYPE_KEY_ID;  //��Կ���
    typedef int MSG_REC_TYPE_LAST_DATE;  //��һ������
    typedef int MSG_REC_TYPE_LAST_LOGIN_DATE;  //�ϴε�½����(��Ҫ������֧��)
    typedef int MSG_REC_TYPE_LAST_LOGIN_TIME;  //�ϴε�½ʱ��(��Ҫ������֧��)
    typedef int MSG_REC_TYPE_LEG_NUM;  //����
    typedef int MSG_REC_TYPE_MONEY_COUNT;  //��ͨ���ָ���
    typedef int MSG_REC_TYPE_ONLINE_COUNT;  //��ǰ����������(- 1 ��ʾδ֪)
    typedef int MSG_REC_TYPE_QUERY_DATE;  //��ѯ����
    typedef int MSG_REC_TYPE_REPORT_TIME;  //�걨ʱ��
    typedef int MSG_REC_TYPE_REQUEST_NUM;  //��ѯ����
    typedef int MSG_REC_TYPE_RESULT_NUM;  //�ɹ���־(0 ��ʾ�ɹ�������ʾʧ��)
    typedef int MSG_REC_TYPE_RSP_TIME;  //����������ʱ��
    typedef int MSG_REC_TYPE_SERIAL_NO;  //��ˮ��
    typedef int MSG_REC_TYPE_START_DATE;  //��ʼ����
    typedef int MSG_REC_TYPE_VALID_DATE;  //ί����Ч��

    extern const char* const MSG_REC_NAME_ARBICODE;  //��ϲ���
    extern const char* const MSG_REC_NAME_ARBICONTRACT_ID;  //������Լ����
    extern const char* const MSG_REC_NAME_ARBITRAGE_CODE;  //������Լ����
    extern const char* const MSG_REC_NAME_BANK_ACCOUNT;  //�����ʺ�
    extern const char* const MSG_REC_NAME_BANK_NAME;  //��������
    extern const char* const MSG_REC_NAME_BANK_NO;  //���д���
    extern const char* const MSG_REC_NAME_BANK_PASSWORD;  //��������
    extern const char* const MSG_REC_NAME_BANK_TRANS_FLAG;  //����ת�������־
    extern const char* const MSG_REC_NAME_BKACCOUNT_REGFLAG;  //�����ʺŴ��ָ�����
    extern const char* const MSG_REC_NAME_BKACCOUNT_RIGHTS;  //�����ʺ�Ȩ��
    extern const char* const MSG_REC_NAME_BKACCOUNT_STATUS;  //�����ʺ�״̬
    extern const char* const MSG_REC_NAME_BUSINESS_NAME;  //ҵ���־����
    extern const char* const MSG_REC_NAME_BUSINESS_TYPE;  //�ɽ����
    extern const char* const MSG_REC_NAME_CANCEL_INFO;  //�ϵ�ԭ��
    extern const char* const MSG_REC_NAME_CFMMC_KEY;  //��Կ
    extern const char* const MSG_REC_NAME_CHECK_TAB_DATA;  //�ʵ���Ϣ
    extern const char* const MSG_REC_NAME_CLIENT_ID;  //�ͻ���
    extern const char* const MSG_REC_NAME_CLIENT_NAME;  //�ͻ�����
    extern const char* const MSG_REC_NAME_COMPANY_ID;  //��������
    extern const char* const MSG_REC_NAME_COMPANY_NAME;  //��˾����
    extern const char* const MSG_REC_NAME_CONFIRM_NO;  //��������
    extern const char* const MSG_REC_NAME_CONTRACT_CODE;  //��Լ����
    extern const char* const MSG_REC_NAME_CONTRACT_NAME;  //Ʒ�ּ��
    extern const char* const MSG_REC_NAME_CONTRACT_TYPE;  //��Լ�������
    extern const char* const MSG_REC_NAME_EN_ENTRUST_STATUS;  //����ί��״̬
    extern const char* const MSG_REC_NAME_ENTRUST_BS;  //��������
    extern const char* const MSG_REC_NAME_ENTRUST_BS;  //��������
    extern const char* const MSG_REC_NAME_ENTRUST_BS_NAME;  //��������
    extern const char* const MSG_REC_NAME_ENTRUST_KIND;  //ί�����ͣ���֧��0��
    extern const char* const MSG_REC_NAME_ENTRUST_NAME;  //ί��״̬����
    extern const char* const MSG_REC_NAME_ENTRUST_STATUS;  //ί��״̬
    extern const char* const MSG_REC_NAME_ERROR_MESSAGE;  //������Ϣ
    extern const char* const MSG_REC_NAME_EXCHANGE_NAME;  //��������
    extern const char* const MSG_REC_NAME_EXECUTE_TYPE;  //ִ�з�ʽ��1 ŷʽ��2 ��ʽ��
    extern const char* const MSG_REC_NAME_FORCECLOSE_REASON;  //ǿƽԭ��
    extern const char* const MSG_REC_NAME_FORCECLOSE_REASON_NAME;  //ǿƽԭ������
    extern const char* const MSG_REC_NAME_FUND_PASSWORD;  //�ʽ�����
    extern const char* const MSG_REC_NAME_FUTU_BUSINESS_NO;  //�ɽ����
    extern const char* const MSG_REC_NAME_FUTU_ENTRUST_PROP;  //�ڻ�ί������
    extern const char* const MSG_REC_NAME_FUTU_ENTRUST_TYPE;  //ί������
    extern const char* const MSG_REC_NAME_FUTU_ENTRUST_TYPE_NAME;  //ί����������
    extern const char* const MSG_REC_NAME_FUTU_EXCH_TYPE;  //�������
    extern const char* const MSG_REC_NAME_FUTU_PRODUCT_TYPE;  //��Ʒ���(1 �ڻ�2 ��Ȩ3 ��� 4 ���� 5 ��ת��)
    extern const char* const MSG_REC_NAME_FUTU_REPORT_UNIT;  //�걨��λ
    extern const char* const MSG_REC_NAME_FUTUACCOUNT_STATUS;  //�ڻ��˺�״̬('0'Ϊ����������Ϊ������)
    extern const char* const MSG_REC_NAME_FUTUFARE_TYPE;  //�������
    extern const char* const MSG_REC_NAME_FUTURES_ACCOUNT;  //�ڻ��˺�
    extern const char* const MSG_REC_NAME_FUTURES_DIRECTION;  //��ƽ����
    extern const char* const MSG_REC_NAME_FUTURES_DIRECTION_NAME;  //��ƽ�ַ���
    extern const char* const MSG_REC_NAME_FUTURES_RESTRICTS;  //�ڻ��˺�����
    extern const char* const MSG_REC_NAME_FUTURES_RIGHTS;  //�ڻ��˺�Ȩ��(���ڽ��ڽ�����'A'���߿� ��ʾͶ�� 'B'��ʾ�ױ�)
    extern const char* const MSG_REC_NAME_GIVEUP_TYPE;  //����ִ������
    extern const char* const MSG_REC_NAME_HEDGE_TYPE;  //�ױ���־
    extern const char* const MSG_REC_NAME_LAST_LOGIN_IP;  //�ϴε�½IP ��ַ(��Ҫ������֧��)
    extern const char* const MSG_REC_NAME_MAIN_FLAG;  //������־('1'Ϊ���ʺ�)
    extern const char* const MSG_REC_NAME_MONEY_NAME;  //��������
    extern const char* const MSG_REC_NAME_MONEY_TYPE;  //�������
    extern const char* const MSG_REC_NAME_NATIVE_CODE;  //ԭʼ����(������еĴ���)
    extern const char* const MSG_REC_NAME_NEW_PASSWORD;  //������
    extern const char* const MSG_REC_NAME_OPTIONS_EXPIRE;  //��Ȩϵ��
    extern const char* const MSG_REC_NAME_OPTIONS_TYPE;  //��Ȩ����(0 ����Ȩ1 ����2 ����)
    extern const char* const MSG_REC_NAME_PASSWORD;  //ԭ����
    extern const char* const MSG_REC_NAME_PASSWORD_TYPE;  //�������
    extern const char* const MSG_REC_NAME_POSITION_STR;  //��λ��
    extern const char* const MSG_REC_NAME_POSITION_STR;  //��λ��
    extern const char* const MSG_REC_NAME_PRICE_UNIT;  //�۸�λ( '1'   ���ִ�� '2'   ���ִ��)
    extern const char* const MSG_REC_NAME_QUERY_DIRECTION;  //��ѯ����
    extern const char* const MSG_REC_NAME_QUERY_MODE;  //��ѯģʽ (0  ���˳ֲ�Ϊ0 ������ 1  �����˳ֲ�Ϊ0 ��)
    extern const char* const MSG_REC_NAME_REMARK;  //ժҪ
    extern const char* const MSG_REC_NAME_RESERVE_MESSAGE;  //�ͻ�Ԥ����Ϣ
    extern const char* const MSG_REC_NAME_RESULT;  //�ǳ����
    extern const char* const MSG_REC_NAME_RIGHTS_TYPE;  //��Ȩ��ʽ��0 ������Ȩ 1 ��Ȩ��
    extern const char* const MSG_REC_NAME_SECOND_CODE;  //�ڶ��Ⱥ�Լ����
    extern const char* const MSG_REC_NAME_SOURCE_FLAG;  //����
    extern const char* const MSG_REC_NAME_SQUARE_FLAG;  //�����ʾ��������־�ʲ��˻��Ľ���ģʽ
    extern const char* const MSG_REC_NAME_STATUS_NAME;  //ί��״̬����
    extern const char* const MSG_REC_NAME_STOP_FLAG;  //��ʼ���ױ�־
    extern const char* const MSG_REC_NAME_SYS_STATUS;  //ϵͳ״̬
    extern const char* const MSG_REC_NAME_SYS_STATUS_NAME;  //ϵͳ״̬˵��
    extern const char* const MSG_REC_NAME_TABCONFIRM_FLAG;  //ǿ���ʵ�ȷ��
    extern const char* const MSG_REC_NAME_TIME_CONDITION;  //��Ч������
    extern const char* const MSG_REC_NAME_TOTAL_TYPE;  //ͳ�����(0  ��ϸ+���� 1  ��ϸ 2 ����)
    extern const char* const MSG_REC_NAME_TRANS_NAME;  //�ɽ��������
    extern const char* const MSG_REC_NAME_TRANSFER_DIRECTION;  //���׷���
    extern const char* const MSG_REC_NAME_VOLUME_CONDITION;  //�ɽ�������
    extern const char* const MSG_REC_NAME_WEAVE_TYPE;  //���ί������
    extern const char* const MSG_REC_NAME_AMOUNT_BALANCE;  //��λ���������ѽ��
    extern const char* const MSG_REC_NAME_APPLY_AMOUNT;  //��������
    extern const char* const MSG_REC_NAME_AVERAGE_PRICE;  //ƽ����
    extern const char* const MSG_REC_NAME_BAIL_BALANCE;  //�ͻ���֤��
    extern const char* const MSG_REC_NAME_BEAR_AMOUNT;  //������
    extern const char* const MSG_REC_NAME_BEGIN_AMOUNT;  //�ڳ�����
    extern const char* const MSG_REC_NAME_BEGIN_BALANCE;  //���ս��
    extern const char* const MSG_REC_NAME_BEGIN_EXCH_HOLD;  //��һ�����ճֲֶ��ύ������֤��
    extern const char* const MSG_REC_NAME_BEGIN_HOLD_BALANCE;  //��һ�����ճֲֶ��ᱣ֤��
    extern const char* const MSG_REC_NAME_BEXEC_AMOUNT;  //��ִ��������δƽ����- �����������
    extern const char* const MSG_REC_NAME_BEXEC_EXCH_FARE;  //��ִ�н�����������
    extern const char* const MSG_REC_NAME_BEXEC_FARE;  //��ִ�пͻ�������
    extern const char* const MSG_REC_NAME_BEXEC_PROFIT;  //��ִ��ӯ��
    extern const char* const MSG_REC_NAME_BEXECABLE_AMOUNT;  //���ִ��������δƽ����||0��
    extern const char* const MSG_REC_NAME_BPOS_AMOUNT;  //��δƽ����
    extern const char* const MSG_REC_NAME_BUSINESS_AMOUNT;  //�ɽ�����
    extern const char* const MSG_REC_NAME_BUSINESS_BALANCE;  //�ɽ����
    extern const char* const MSG_REC_NAME_BUSINESS_RATIO;  //�ɽ�������
    extern const char* const MSG_REC_NAME_BUY_AMOUNT;  //����ֲ���
    extern const char* const MSG_REC_NAME_BUY_HIGH_AMOUNT;  //������������
    extern const char* const MSG_REC_NAME_BUY_HIGH_PRICE;  //��������
    extern const char* const MSG_REC_NAME_BUY_OP_BALANCE;  //��Ȩ����
    extern const char* const MSG_REC_NAME_BUY_PRICE;  //��������
    extern const char* const MSG_REC_NAME_BUY_TOTAL_AMOUNT;  //ȫ������
    extern const char* const MSG_REC_NAME_CANCEL_AMOUNT;  //��������
    extern const char* const MSG_REC_NAME_CHANGE_DIRECTION;  //����
    extern const char* const MSG_REC_NAME_CLIENT_RISK;  //�ͻ�������
    extern const char* const MSG_REC_NAME_CURRENT_BALANCE;  //��ǰ���
    extern const char* const MSG_REC_NAME_DELIVER_BAIL_BALANCE;  //���֤��
    extern const char* const MSG_REC_NAME_DELIVER_BAIL_RATIO;  //���֤�����
    extern const char* const MSG_REC_NAME_DOWNLIMITED_PRICE;  //��ͣ��۸�
    extern const char* const MSG_REC_NAME_DROP_BAIL_BALANCE;  //ƽ�ֱ�֤��
    extern const char* const MSG_REC_NAME_DROP_BAIL_RATIO;  //ƽ�ֱ�֤�����
    extern const char* const MSG_REC_NAME_DROP_PROFIT;  //ƽ��ӯ��
    extern const char* const MSG_REC_NAME_DROP_PROFIT_FLOAT;  //ƽ�ָ���ӯ��
    extern const char* const MSG_REC_NAME_DROP_UNIT;  //ƽ����С��λ
    extern const char* const MSG_REC_NAME_DROPCU_BAIL_BALANCE;  //ƽ��ֱ�֤��
    extern const char* const MSG_REC_NAME_DROPCU_BAIL_RATIO;  //ƽ��ֱ�֤�����
    extern const char* const MSG_REC_NAME_EN_BALANCE;  //�����ʽ�
    extern const char* const MSG_REC_NAME_ENABLE_AMOUNT;  //ʵ�ʿ��µ���
    extern const char* const MSG_REC_NAME_ENABLE_BALANCE;  //���ý��
    extern const char* const MSG_REC_NAME_ENTRUST_AMOUNT;  //�ڻ�ί������
    extern const char* const MSG_REC_NAME_EXCH_BAIL_BALANCE;  //��������֤��
    extern const char* const MSG_REC_NAME_EXCH_HOLD_BALANCE;  //���ճֲֶ��ύ������֤��
    extern const char* const MSG_REC_NAME_EXCH_RISK;  //������������
    extern const char* const MSG_REC_NAME_EXEC_AMOUNT;  //������Ȩ��
    extern const char* const MSG_REC_NAME_FETCH_BALANCE;  //��ȡ�ʽ�
    extern const char* const MSG_REC_NAME_FORM_BUY_AMOUNT;  //�����������
    extern const char* const MSG_REC_NAME_FORM_SALE_AMOUNT;  //�����������
    extern const char* const MSG_REC_NAME_FROZEN_BALANCE;  //�����ʽ�
    extern const char* const MSG_REC_NAME_FROZEN_FARE;  //�������
    extern const char* const MSG_REC_NAME_FUND_IN;  //���
    extern const char* const MSG_REC_NAME_FUND_OUT;  //����
    extern const char* const MSG_REC_NAME_FUTU_AVERAGE_PRICE;  //ƽ����
    extern const char* const MSG_REC_NAME_FUTU_BUSINESS_PRICE;  //�ڻ��ɽ��۸�
    extern const char* const MSG_REC_NAME_FUTU_ENTRUST_PRICE;  //�ڻ�ί�м۸�
    extern const char* const MSG_REC_NAME_FUTU_HIGH_PRICE;  //��߼�
    extern const char* const MSG_REC_NAME_FUTU_LAST_PRICE;  //���¼۸�
    extern const char* const MSG_REC_NAME_FUTU_LOW_PRICE;  //��ͼ�
    extern const char* const MSG_REC_NAME_FUTU_OPEN_PRICE;  //���̼�
    extern const char* const MSG_REC_NAME_FUTU_PRICE_STEP;  //��С�۲�
    extern const char* const MSG_REC_NAME_GIVEUP_AMOUNT;  //���������
    extern const char* const MSG_REC_NAME_HIGH_LIMIT_PRICE;  //��������
    extern const char* const MSG_REC_NAME_HIS_BUSIN_BALANCE;  //�ϲֲֳֳɽ����
    extern const char* const MSG_REC_NAME_HOLD_BALANCE;  //�Ͻ����ձ�֤��
    extern const char* const MSG_REC_NAME_HOLD_BALANCE_TOT;  //�ֲܳ�
    extern const char* const MSG_REC_NAME_HOLD_PROFIT;  //�ֲֶ���ӯ��
    extern const char* const MSG_REC_NAME_HOLD_PROFIT_FLOAT;  //�ֲָ���ӯ��
    extern const char* const MSG_REC_NAME_HOLD_UNIT;  //������С��λ
    extern const char* const MSG_REC_NAME_INTEREST_BALANCE;  //Ԥ����Ϣ
    extern const char* const MSG_REC_NAME_LATE_FEE;  //���ɽ�
    extern const char* const MSG_REC_NAME_LATEFEE_RATE;  //���ɽ����
    extern const char* const MSG_REC_NAME_LIMITED_AMOUNT;  //�޼�ί��ÿ������µ�����
    extern const char* const MSG_REC_NAME_LOW_LIMIT_PRICE;  //��������
    extern const char* const MSG_REC_NAME_MARKET_AMOUNT;  //�м�ί��ÿ������µ�����
    extern const char* const MSG_REC_NAME_MARKET_CLIENT_RIGHT;  //�ͻ���ֵȨ��(UFT)
    extern const char* const MSG_REC_NAME_MARKET_VALUE;  //�ͻ���ֵȨ��(06)
    extern const char* const MSG_REC_NAME_MAX_ENTRUST_AMOUNT;  //�����µ���
    extern const char* const MSG_REC_NAME_MAX_LIMIT_AMOUNT;  //����µ�����
    extern const char* const MSG_REC_NAME_MIN_LIMIT_AMOUNT;  //��С�µ�����
    extern const char* const MSG_REC_NAME_OCCUR_BALANCE;  //�������
    extern const char* const MSG_REC_NAME_OPEN_BAIL_BALANCE;  //���ֱ�֤��
    extern const char* const MSG_REC_NAME_OPEN_BAIL_RATIO;  //���ֱ�֤�����
    extern const char* const MSG_REC_NAME_OPEN_DROP_PRICE;  //��ƽ�ּ۸�
    extern const char* const MSG_REC_NAME_OPTION_PREMIUMS;  //�ͻ�Ȩ����ֵ(UFT)
    extern const char* const MSG_REC_NAME_OPTION_PROFIT_FLOAT;  //��Ȩ�ֲָ���ӯ��(UFT)
    extern const char* const MSG_REC_NAME_PAYMENT_BALANCE;  //�������
    extern const char* const MSG_REC_NAME_POST_BALANCE;  //���������
    extern const char* const MSG_REC_NAME_PRE_DELTA;  //����ʵ��
    extern const char* const MSG_REC_NAME_PRE_RIGHTS_BALANCE;  //�ڳ��ͻ�Ȩ��
    extern const char* const MSG_REC_NAME_PRE_SQUARE_PRICE;  //���ս����
    extern const char* const MSG_REC_NAME_PROFIT;  //����ӯ��
    extern const char* const MSG_REC_NAME_PROFIT_FLOAT;  //����ӯ��
    extern const char* const MSG_REC_NAME_REAL_AMOUNT;  //�ֲܳ�
    extern const char* const MSG_REC_NAME_REAL_BUY_AMOUNT;  //�񿪲�����ֲ���
    extern const char* const MSG_REC_NAME_REAL_DROP;  //����ƽ��ӯ��
    extern const char* const MSG_REC_NAME_REAL_DROP_FLOAT;  //����ƽ��ӯ��
    extern const char* const MSG_REC_NAME_REAL_HOLD_BALANCEA;  //���տ���Ԥ������
    extern const char* const MSG_REC_NAME_REAL_HOLD_BALANCEB;  //���տ��ֶ��ᱣ֤��ͷ���
    extern const char* const MSG_REC_NAME_REAL_SALE_AMOUNT;  //�񿪲������ֲ���
    extern const char* const MSG_REC_NAME_RIGHTS_BALANCE;  //�ͻ�Ȩ��
    extern const char* const MSG_REC_NAME_RISK_RATE;  //������
    extern const char* const MSG_REC_NAME_RISK_RATE_N;  //�ڲ�������
    extern const char* const MSG_REC_NAME_SALE_AMOUNT;  //�����ֲ���
    extern const char* const MSG_REC_NAME_SALE_LOW_AMOUNT;  //�����������
    extern const char* const MSG_REC_NAME_SALE_LOW_PRICE;  //��������۸�
    extern const char* const MSG_REC_NAME_SALE_OP_BALANCE;  //��Ȩ����(06��
    extern const char* const MSG_REC_NAME_SALE_PRICE;  //������ۼ۸�
    extern const char* const MSG_REC_NAME_SALE_TOTAL_AMOUNT;  //ȫ������
    extern const char* const MSG_REC_NAME_SELL_OP_BALANCE;  //��Ȩ����(UFT)
    extern const char* const MSG_REC_NAME_SEXEC_AMOUNT;  //��ִ��������δƽ����- �����������
    extern const char* const MSG_REC_NAME_SEXEC_EXCH_FARE;  //��ִ�н�����������
    extern const char* const MSG_REC_NAME_SEXEC_FARE;  //��ִ�пͻ�������
    extern const char* const MSG_REC_NAME_SEXEC_PROFIT;  //��ִ��ӯ��
    extern const char* const MSG_REC_NAME_SPEC_AMOUNT_BALANCE;  //���ⵥλ���������ѽ��
    extern const char* const MSG_REC_NAME_SPEC_BUSINESS_RATIO;  //����ɽ�������
    extern const char* const MSG_REC_NAME_SPOS_AMOUNT;  //��δƽ����
    extern const char* const MSG_REC_NAME_SPRING_PRICE;  //ֹ�𴥷��۸�
    extern const char* const MSG_REC_NAME_SQUARE_PRICE;  //�����
    extern const char* const MSG_REC_NAME_STRIKE_PRICE;  //ִ�м�
    extern const char* const MSG_REC_NAME_SUPERADD_BALANCE;  //׷�ӱ�֤��
    extern const char* const MSG_REC_NAME_TODAY_BUSIN_BALANCE;  //��ֲֳֳɽ����
    extern const char* const MSG_REC_NAME_TODAY_ENABLE_AMOUNT;  //���տ��ֿ�������
    extern const char* const MSG_REC_NAME_TOTAL_FARE;  //������
    extern const char* const MSG_REC_NAME_UNDERLYING_PRICE;  //���ָ���۸�
    extern const char* const MSG_REC_NAME_UPLIMITED_PRICE;  //��ͣ��۸�
    extern const char* const MSG_REC_NAME_WILLGIVEUP_AMOUNT;  //��������
    extern const char* const MSG_REC_NAME_ACTION_IN;  //�������� (0  ������Ͷ���ױ� 1      ����Ͷ���ױ�)
    extern const char* const MSG_REC_NAME_AMOUNT_PER_HAND;  //ÿ�ֶ���
    extern const char* const MSG_REC_NAME_BATCH_NO;  //ί������
    extern const char* const MSG_REC_NAME_BEGIN_DATE;  //��ʼ����
    extern const char* const MSG_REC_NAME_BRANCH_NO;  //��֧����
    extern const char* const MSG_REC_NAME_BUSINESS_FLAG;  //ҵ���־
    extern const char* const MSG_REC_NAME_BUSINESS_TIME;  //�ɽ�ʱ��
    extern const char* const MSG_REC_NAME_CORP_CLIENT_GROUP;  //��˾�ͻ����
    extern const char* const MSG_REC_NAME_CURR_DATE;  //��������
    extern const char* const MSG_REC_NAME_CURR_TIME;  //���ݿ⵱ǰʱ��
    extern const char* const MSG_REC_NAME_END_DATE;  //��������
    extern const char* const MSG_REC_NAME_ENTRUST_NO;  //ί�б��
    extern const char* const MSG_REC_NAME_ENTRUST_TIME;  //ί��ʱ��
    extern const char* const MSG_REC_NAME_EXPIRE_DATE;  //��Լ������
    extern const char* const MSG_REC_NAME_FORM_BUY_PRICE;  //�������۸�
    extern const char* const MSG_REC_NAME_FORM_SALE_PRICE;  //��������۸�
    extern const char* const MSG_REC_NAME_FUND_ACCOUNT;  //�ʽ��˺�
    extern const char* const MSG_REC_NAME_FUNDACCOUNT_COUNT;  //�ʲ��˺Ÿ��������ͻ��ŵ�¼��ʱ�� ���ʲ��˺Ÿ��������򷵻�0
    extern const char* const MSG_REC_NAME_FUTU_DIFF_TIME;  //���������ݿ�ʱ���
    extern const char* const MSG_REC_NAME_HOLD_DATE;  //��������
    extern const char* const MSG_REC_NAME_INIT_DATE;  //��ǰ��������
    extern const char* const MSG_REC_NAME_KEY_ID;  //��Կ���
    extern const char* const MSG_REC_NAME_LAST_DATE;  //��һ������
    extern const char* const MSG_REC_NAME_LAST_LOGIN_DATE;  //�ϴε�½����(��Ҫ������֧��)
    extern const char* const MSG_REC_NAME_LAST_LOGIN_TIME;  //�ϴε�½ʱ��(��Ҫ������֧��)
    extern const char* const MSG_REC_NAME_LEG_NUM;  //����
    extern const char* const MSG_REC_NAME_MONEY_COUNT;  //��ͨ���ָ���
    extern const char* const MSG_REC_NAME_ONLINE_COUNT;  //��ǰ����������(- 1 ��ʾδ֪)
    extern const char* const MSG_REC_NAME_QUERY_DATE;  //��ѯ����
    extern const char* const MSG_REC_NAME_REPORT_TIME;  //�걨ʱ��
    extern const char* const MSG_REC_NAME_REQUEST_NUM;  //��ѯ����
    extern const char* const MSG_REC_NAME_RSP_TIME;  //����������ʱ��
    extern const char* const MSG_REC_NAME_SERIAL_NO;  //��ˮ��
    extern const char* const MSG_REC_NAME_START_DATE;  //��ʼ����
    extern const char* const MSG_REC_NAME_VALID_DATE;  //ί����Ч��


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