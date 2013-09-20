/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class ACAccount, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<SLTimestampSkewStorageDelegate>, NSString, NSURL, OACredential;

@interface SLTwitterRequest : NSObject {
    ACAccount *_account;
    NSString *_applicationID;
    int _callingPID;
    OACredential *_credential;
    NSMutableArray *_multiParts;
    NSMutableDictionary *_parameters;
    int _requestMethod;
    NSObject<SLTimestampSkewStorageDelegate> *_timestampSkewStorageDelegate;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(retain) ACAccount * account;
@property(readonly) NSDictionary * parameters;
@property(readonly) int requestMethod;

+ (BOOL)responseIsTimestampOutOfBounds:(id)arg1 data:(id)arg2;
+ (BOOL)shouldRetryAfterCount:(int)arg1 delay:(float*)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)_allParameters;
- (id)_parameterString;
- (void)_setTimestampSkew:(double)arg1;
- (double)_timestampSkew;
- (id)_urlEncodedString:(id)arg1;
- (id)account;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (void)calculateTimestampSkewFromResponse:(id)arg1;
- (int)callingPID;
- (id)commandName;
- (id)credential;
- (id)initWithCredential:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(int)arg3;
- (id)initWithURL:(id)arg1;
- (id)multiPartBodyData;
- (id)parameters;
- (void)performJSONRequestWithHandler:(id)arg1 retryCount:(int)arg2;
- (void)performJSONRequestWithHandler:(id)arg1;
- (void)performRequestWithHandler:(id)arg1 retryCount:(int)arg2;
- (void)performRequestWithHandler:(id)arg1;
- (int)requestMethod;
- (BOOL)requiresAuthorization;
- (void)setAccount:(id)arg1;
- (void)setApplicationID:(id)arg1;
- (void)setCallingPID:(int)arg1;
- (void)setCredential:(id)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setRequestMethod:(int)arg1;
- (void)setTimestampSkewStorageDelegate:(id)arg1;
- (void)sharedPrivateInit;
- (id)signedURLRequest;
- (id)timestampSkewStorageDelegate;

@end
