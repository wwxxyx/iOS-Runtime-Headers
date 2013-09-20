/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

@property BOOL adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;

- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (BOOL)adjustsMaxConcurrentOperationCount;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)init;
- (int)maxConcurrentOperationCount;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)operationCount;
- (id)operations;
- (void)setAdjustsMaxConcurrentOperationCount:(BOOL)arg1;
- (void)setMaxConcurrentOperationCount:(int)arg1;
- (void)setName:(id)arg1;
- (void)setSuspended:(BOOL)arg1;

@end
