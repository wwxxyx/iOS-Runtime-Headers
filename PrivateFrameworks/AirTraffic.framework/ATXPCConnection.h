/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSString;

@interface ATXPCConnection : NSObject {
    BOOL _assertionHeld;
    struct _xpc_connection_s { } *_conn;
    id _context;
    id _disconnectHandler;
    struct dispatch_queue_s { } *_eventQueue;
    id _lockdownHandler;
    id _messageHandler;
    NSMutableSet *_outstandingMessages;
}

@property BOOL assertionHeld;
@property(retain) id context;
@property(copy) id disconnectHandler;
@property(copy) id lockdownHandler;
@property(copy) id messageHandler;
@property(readonly) NSString * serviceName;

- (void)_handleLockdownMessage:(void*)arg1;
- (void)_handleXPCError:(void*)arg1;
- (void)_handleXPCMessage:(void*)arg1;
- (unsigned int)_outstandingMessages;
- (void)_registerMessage:(id)arg1;
- (void)_removeMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(id)arg2;
- (void)_setEventHandlerOnConnection:(struct _xpc_connection_s { }*)arg1;
- (BOOL)assertionHeld;
- (id)context;
- (void)dealloc;
- (id)disconnectHandler;
- (struct dispatch_queue_s { }*)eventQueue;
- (id)initWithServiceName:(id)arg1 onQueue:(struct dispatch_queue_s { }*)arg2;
- (id)initWithXPCConnection:(struct _xpc_connection_s { }*)arg1;
- (id)lockdownHandler;
- (id)messageHandler;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)sendMessage:(id)arg1;
- (id)serviceName;
- (void)setAssertionHeld:(BOOL)arg1;
- (void)setContext:(id)arg1;
- (void)setDisconnectHandler:(id)arg1;
- (void)setLockdownHandler:(id)arg1;
- (void)setMessageHandler:(id)arg1;
- (void)shutdown;

@end
