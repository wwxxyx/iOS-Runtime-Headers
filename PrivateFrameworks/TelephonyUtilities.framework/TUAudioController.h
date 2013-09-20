/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioController : NSObject {
    struct dispatch_semaphore_s { } *_modifyingStateLock;
    struct dispatch_group_s { } *_outstandingRequestsGroup;
}

- (void)_acquireLock;
- (void)_enterOutstandingRequestsGroup;
- (void)_leaveOutstandingRequestsGroup;
- (void)_releaseLock;
- (void)_requestUpdatedValueWithBlock:(id)arg1 object:(id*)arg2 isRequestingPointer:(BOOL*)arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(unsigned long long*)arg5 notificationString:(id)arg6 queue:(struct dispatch_queue_s { }*)arg7;
- (void)blockUntilOutstandingRequestsComplete;
- (void)dealloc;
- (id)init;

@end
