/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class SSURLConnectionRequest;

@interface RadioOptInRequest : RadioRequest {
    unsigned long long _accountIdentifier;
    SSURLConnectionRequest *_request;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)startWithCompletionHandler:(id)arg1;
- (void)startWithOptInCompletionHandler:(id)arg1;

@end
