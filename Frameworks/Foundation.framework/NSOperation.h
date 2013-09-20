/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperation : NSObject {
    int _private1;
    id _private;
}

@property unsigned int tag;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)__;
- (id)_implicitObservationInfo;
- (void)addDependency:(id)arg1;
- (void)cancel;
- (id)completionBlock;
- (void)dealloc;
- (id)dependencies;
- (void)finalize;
- (id)init;
- (BOOL)isAsynchronous;
- (BOOL)isCancelled;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isReady;
- (void)main;
- (void*)observationInfo;
- (int)queuePriority;
- (void)removeDependency:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setQueuePriority:(int)arg1;
- (void)setTag:(unsigned int)arg1;
- (void)setThreadPriority:(double)arg1;
- (void)start;
- (unsigned int)tag;
- (double)threadPriority;
- (void)waitUntilFinished;
- (void)waitUntilFinishedOrTimeout:(double)arg1;

@end
