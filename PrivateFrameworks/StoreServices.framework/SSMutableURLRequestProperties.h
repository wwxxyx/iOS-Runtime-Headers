/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface SSMutableURLRequestProperties : SSURLRequestProperties {
}

@property(copy) NSData * HTTPBody;
@property(retain) NSInputStream * HTTPBodyStream;
@property(copy) NSDictionary * HTTPHeaders;
@property(copy) NSString * HTTPMethod;
@property(getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property(retain) NSURL * URL;
@property(copy) NSString * URLBagKey;
@property int URLBagType;
@property(copy) id URLBagURLBlock;
@property(copy) NSArray * URLs;
@property int allowedRetryCount;
@property unsigned int cachePolicy;
@property(copy) NSString * clientAuditBundleIdentifier;
@property(copy) NSData * clientAuditTokenData;
@property(copy) NSString * clientIdentifier;
@property long long expectedContentLength;
@property(getter=isLargeDownload) BOOL largeDownload;
@property unsigned int networkServiceType;
@property(copy) NSDictionary * requestParameters;
@property BOOL requiresExtendedValidationCertificates;
@property BOOL shouldAddKBSyncData;
@property BOOL shouldDecodeResponse;
@property BOOL shouldDisableCellular;
@property BOOL shouldDisableCellularFallback;
@property BOOL shouldProcessProtocol;
@property BOOL shouldSendSecureToken;
@property BOOL shouldSetCookies;
@property double timeoutInterval;
@property(copy) NSArray * userAgentComponents;

+ (id)newForRadioRequestURL:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)radio_mescalSignWithRequestContext:(id)arg1;
- (void)setAllowedRetryCount:(int)arg1;
- (void)setCachePolicy:(unsigned int)arg1;
- (void)setClientAuditBundleIdentifier:(id)arg1;
- (void)setClientAuditTokenData:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setExpectedContentLength:(long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setITunesStoreRequest:(BOOL)arg1;
- (void)setLargeDownload:(BOOL)arg1;
- (void)setMultiPartFormDataWithDictionary:(id)arg1;
- (void)setNetworkServiceType:(unsigned int)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiresExtendedValidationCertificates:(BOOL)arg1;
- (void)setShouldAddKBSyncData:(BOOL)arg1;
- (void)setShouldDecodeResponse:(BOOL)arg1;
- (void)setShouldDisableCellular:(BOOL)arg1;
- (void)setShouldDisableCellularFallback:(BOOL)arg1;
- (void)setShouldProcessProtocol:(BOOL)arg1;
- (void)setShouldSendSecureToken:(BOOL)arg1;
- (void)setShouldSetCookies:(BOOL)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setURLBagKey:(id)arg1;
- (void)setURLBagType:(int)arg1;
- (void)setURLBagURLBlock:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;

@end
