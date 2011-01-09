/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSNotificationCenter : NSObject 
{
    void *_impl;
    void *_callback_block[4];
    void *_pad[8];
}

+ (id)defaultCenter;
+ (void)setNotificationCenterSerializeRemoves:(BOOL)arg1;
+ (void)_postNotificationName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)init;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (BOOL)isEmpty;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)_ay_postNotification:(id)arg1 inThread:(id)arg2;
- (void)_ay_postNotification:(id)arg1 inThread:(id)arg2 beforeDate:(id)arg3;
- (void)_ay_postNotificationName:(id)arg1 object:(id)arg2 inThread:(id)arg3;
- (void)_ay_postNotificationName:(id)arg1 object:(id)arg2 inThread:(id)arg3 beforeDate:(id)arg4;
- (void)_ay_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 inThread:(id)arg4;
- (void)_ay_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 inThread:(id)arg4 beforeDate:(id)arg5;
- (void)postNotificationInMainThread:(id)arg1;

@end