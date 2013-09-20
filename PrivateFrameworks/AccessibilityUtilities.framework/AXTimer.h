/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class AXAccessQueue, NSObject<OS_dispatch_source>, NSString;

@interface AXTimer : NSObject <AXTimer> {
    AXAccessQueue *_accessQueue;
    BOOL _accessQueueIsExternal;
    BOOL _active;
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSString *_label;
    int _state;
}

@property(retain) AXAccessQueue * accessQueue;
@property BOOL accessQueueIsExternal;
@property(getter=isActive) BOOL active;
@property BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(retain) NSObject<OS_dispatch_source> * dispatchTimer;
@property(copy) NSString * label;
@property(getter=isPending,readonly) BOOL pending;
@property int state;

+ (void)initialize;
+ (id)timerTargettingMainAccessQueue;

- (void)_afterDelay:(double)arg1 processBlock:(id)arg2 shouldTreatAsWritingBlock:(BOOL)arg3;
- (void)_didFinishProcessingBlock;
- (void)_performEnqueuedWritingBlock:(id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;
- (void)_reallyCancel;
- (void)_warnAboutAsynchronousCancelling;
- (void)_warnAboutAsynchronousScheduling;
- (id)accessQueue;
- (BOOL)accessQueueIsExternal;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processWritingBlock:(id)arg2;
- (BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)dispatchTimer;
- (id)init;
- (id)initWithTargetAccessQueue:(id)arg1;
- (BOOL)isActive;
- (BOOL)isPending;
- (id)label;
- (void)setAccessQueue:(id)arg1;
- (void)setAccessQueueIsExternal:(BOOL)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1;
- (void)setDispatchTimer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
