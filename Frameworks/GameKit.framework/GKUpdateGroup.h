/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSError, NSLock, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface GKUpdateGroup : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSError *_error;
    NSLock *_lock;
    NSString *_name;
    NSMutableArray *_notifiers;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property NSObject<OS_dispatch_group> * dispatchGroup;
@property(retain) NSError * error;
@property(retain) NSLock * lock;
@property(retain) NSString * name;
@property(retain) NSMutableArray * notifiers;
@property(retain) NSObject<OS_dispatch_queue> * targetQueue;

+ (id)updateGroup;
+ (id)updateGroupForTargetQueue:(id)arg1;
+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;
+ (id)updateGroupWithName:(id)arg1;

- (void)applyUpdates;
- (void)dealloc;
- (id)dispatchGroup;
- (id)error;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;
- (void)join:(id)arg1;
- (id)lock;
- (id)name;
- (id)notifiers;
- (void)perform:(id)arg1;
- (void)performOnQueue:(id)arg1 block:(id)arg2;
- (void)setDispatchGroup:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotifiers:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (id)targetQueue;
- (void)wait;

@end
