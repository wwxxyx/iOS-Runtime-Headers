/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FudInternalConnection : NSObject <FudConnection> {
    NSString *clientIdentifier;
    BOOL didStop;
    NSObject<OS_dispatch_queue> *handlerQueue;
    id messageHandler;
    NSMutableDictionary *pendingRequests;
}

- (void)dealloc;
- (long long)getNextMessageID;
- (void)handleInboundNotification:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(id)arg3;
- (void)sendMessageToFud:(id)arg1 reply:(id)arg2;
- (void)sendMessageToFud:(id)arg1;
- (void)stop;

@end
