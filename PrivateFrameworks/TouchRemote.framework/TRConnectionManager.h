/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class NSMapTable, NSObject<OS_dispatch_queue>;

@interface TRConnectionManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_serviceToConnection;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)TRXPCC_connectionWithUniqueIdentifier:(int)arg1 didReceivePacketEvent:(id)arg2;
- (void)TRXPCC_connectionWithUniqueIdentifierDidClose:(int)arg1;
- (void)_XPCClientConnectionDidInterruptNotification:(id)arg1;
- (void)_connectionDidCloseNotification:(id)arg1;
- (id)_existingConnectionForConnectionUniqueIdentifier:(int)arg1;
- (id)_existingConnectionForService:(id)arg1;
- (id)_init;
- (void)connectToService:(id)arg1 withCompletionHandler:(id)arg2;
- (void)dealloc;
- (id)init;

@end
