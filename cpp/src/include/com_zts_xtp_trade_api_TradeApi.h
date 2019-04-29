/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_zts_xtp_trade_api_TradeApi */

#ifndef _Included_com_zts_xtp_trade_api_TradeApi
#define _Included_com_zts_xtp_trade_api_TradeApi
#ifdef __cplusplus
extern "C" {
#endif

/*
* Class:     com_zts_xtp_trade_api_TradeApi
* Method:    initGlog
* Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
*/
JNIEXPORT void JNICALL Java_com_zts_xtp_trade_api_TradeApi_initGlog
        (JNIEnv *, jobject, jstring,jstring,jstring);
/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    getApiLastError
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zts_xtp_trade_api_TradeApi_getApiLastError
  (JNIEnv *, jobject);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    tradeInit
 * Signature: (SLjava/lang/String;Ljava/lang/String;Lcom/zts/xtp/common/enums/XtpLogLevel;)V
 */
JNIEXPORT void JNICALL Java_com_zts_xtp_trade_api_TradeApi_tradeInit
  (JNIEnv *, jobject, jshort, jstring, jstring, jobject);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    disconnect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_zts_xtp_trade_api_TradeApi_disconnect
  (JNIEnv *, jobject);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    login
 * Signature: (Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/zts/xtp/common/enums/TransferProtocol;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zts_xtp_trade_api_TradeApi_login
  (JNIEnv *, jobject, jstring, jint, jstring, jstring, jobject);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    logout
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_logout
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    insertOrder
 * Signature: (Lcom/zts/xtp/trade/model/request/OrderInsertRequest;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zts_xtp_trade_api_TradeApi_insertOrder
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    cancelOrder
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zts_xtp_trade_api_TradeApi_cancelOrder
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryOrderByXtpId
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryOrderByXtpId
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryOrders
 * Signature: (Lcom/zts/xtp/trade/model/request/OrderQueryRequest;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryOrders
  (JNIEnv *, jobject, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryTradesByXtpId
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryTradesByXtpId
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryTrades
 * Signature: (Lcom/zts/xtp/trade/model/request/TraderQueryRequest;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryTrades
  (JNIEnv *, jobject, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryPosition
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryPosition
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryAsset
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryAsset
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryStructuredFund
 * Signature: (Lcom/zts/xtp/trade/model/request/StructuredFundInfoQueryRequest;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryStructuredFund
  (JNIEnv *, jobject, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    fundTransfer
 * Signature: (Lcom/zts/xtp/trade/model/request/FundTransferRequest;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zts_xtp_trade_api_TradeApi_fundTransfer
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryFundTransfer
 * Signature: (Lcom/zts/xtp/trade/model/request/FundTransferLogQueryRequest;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryFundTransfer
  (JNIEnv *, jobject, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryETF
 * Signature: (Lcom/zts/xtp/trade/model/request/ETFBaseQueryRequest;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryETF
  (JNIEnv *, jobject, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryETFTickerBasket
 * Signature: (Lcom/zts/xtp/trade/model/request/ETFComponentQueryRequest;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryETFTickerBasket
  (JNIEnv *, jobject, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryIPOInfoList
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryIPOInfoList
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryIPOQuotaInfo
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryIPOQuotaInfo
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_zts_xtp_trade_api_TradeApi
 * Method:    queryOptionAuctionInfo
 * Signature: (Lcom/zts/xtp/trade/model/request/OptionAuctionInfoRequest;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_zts_xtp_trade_api_TradeApi_queryOptionAuctionInfo
  (JNIEnv *, jobject, jobject, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
