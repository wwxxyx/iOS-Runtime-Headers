/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSDate, NSHTTPURLResponse, NSMutableData, NSString;

@interface YTAccountAuthenticator : NSObject <NSURLConnectionDelegate> {
    NSString *_account;
    NSString *_accountToken;
    NSDate *_accountTokenDate;
    NSString *_accountYouTubeName;
    NSString *_authURLBase;
    NSString *_clientUUID;
    NSString *_password;
    NSMutableData *_responseData;
    NSHTTPURLResponse *_urlResponse;
}

@property(retain) NSString * account;
@property(retain) NSString * accountToken;
@property(retain) NSDate * accountTokenDate;
@property(retain) NSString * accountYouTubeName;
@property(retain) NSString * password;
@property(retain) NSHTTPURLResponse * urlResponse;

+ (id)sharedAuthenticator;

- (id)_authRequestForAccount:(id)arg1 password:(id)arg2;
- (id)_authRequestWithURL:(id)arg1;
- (void)_clearURLResponseInfo;
- (id)_clientUUID;
- (void)_getNewTokenForAccount:(id)arg1 password:(id)arg2;
- (BOOL)_isTokenExpired:(id)arg1;
- (id)_passwordFromKeychain;
- (void)_postAccountTokenGenerationFailedWithError:(id)arg1;
- (void)_postNewAccountTokenAvailable;
- (void)_removePasswordFromKeychain;
- (id)account;
- (id)accountToken;
- (id)accountTokenDate;
- (id)accountYouTubeName;
- (BOOL)cachedCredentialsValid;
- (void)clearAccountInfo;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)loadStoredCredentials;
- (id)password;
- (BOOL)readyToRequestToken;
- (void)setAccount:(id)arg1;
- (void)setAccountToken:(id)arg1;
- (void)setAccountTokenDate:(id)arg1;
- (void)setAccountYouTubeName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUrlResponse:(id)arg1;
- (id)tokenForCurrentAccount;
- (id)urlResponse;
- (void)validateAccount:(id)arg1 password:(id)arg2;

@end
