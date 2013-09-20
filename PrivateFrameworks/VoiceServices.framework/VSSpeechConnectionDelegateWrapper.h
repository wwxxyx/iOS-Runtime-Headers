/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class <VSSpeechConnectionDelegate>, VSSpeechConnection, VSSpeechRequest;

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate> {
    VSSpeechConnection *_connection;
    <VSSpeechConnectionDelegate> *_delegate;
    VSSpeechRequest *_request;
}

@property VSSpeechConnection * connection;
@property <VSSpeechConnectionDelegate> * delegate;
@property(retain) VSSpeechRequest * request;

- (void).cxx_destruct;
- (id)connection;
- (id)delegate;
- (id)request;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequest:(id)arg1;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;
- (oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestMark:(int)arg1 didStartForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end
