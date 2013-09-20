/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_queue>, TSUProgressContext;

@interface TSUProgressContextProgress : TSUProgress {
    BOOL hasAddedProgressContextObserver;
    TSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
}

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithProgressContext:(id)arg1;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (void)p_progressDidChange:(id)arg1;
- (void)p_updateProgressContextObserver;
- (void)removeProgressObserver:(id)arg1;
- (double)value;

@end
