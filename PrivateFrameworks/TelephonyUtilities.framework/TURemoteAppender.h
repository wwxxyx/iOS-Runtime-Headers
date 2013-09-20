/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString;

@interface TURemoteAppender : NSObject <TUAppender> {
    struct dispatch_queue_s { } *_backgroundQueue;
    struct _xpc_connection_s { } *_connection;
    NSString *_name;
}

- (void)dealloc;
- (void)flush;
- (id)initWithName:(id)arg1;
- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (void)setAppenderDelegate:(id)arg1;

@end
