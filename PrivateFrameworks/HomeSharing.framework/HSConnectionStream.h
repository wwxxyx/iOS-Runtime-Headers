/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSObject<OS_dispatch_queue>;

@interface HSConnectionStream : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFReadStream { } *_readStream;
}

- (void)dealloc;
- (id)init;
- (void)sendCFHTTPMessage:(struct __CFHTTPMessage { }*)arg1 isConcurrent:(BOOL)arg2 timeoutInterval:(double)arg3 withResponseHandler:(id)arg4;

@end
