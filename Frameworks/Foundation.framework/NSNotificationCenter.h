/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationCenter : NSObject {
    void *_callback;
    void *_impl;
    void *_pad[11];
}

+ (void)_postNotificationName:(id)arg1;
+ (id)defaultCenter;

- (void)__mainThreadPostNotification:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (BOOL)isEmpty;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationNameOnMainThread:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)postNotificationNameOnMainThreadHandler:(id)arg1;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;

@end
