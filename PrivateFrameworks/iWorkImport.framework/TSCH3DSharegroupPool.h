/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSCondition, NSMutableArray, TSCH3DSharegroupDelayChecker;

@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUFlushable> {
    BOOL mBusy;
    BOOL mCanUseOpenGL;
    TSCH3DSharegroupDelayChecker *mChecker;
    NSCondition *mCondition;
    int mDisableLevel;
    int mNumAlive;
    NSMutableArray *mSharegroups;
    int mSize;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (id)autorelease;
- (BOOL)canUseOpenGL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)disable;
- (void)enable;
- (void)flush;
- (id)init;
- (id)obtainSharegroup;
- (void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)arg1;
- (void)p_flushSharegroupsIfPossible;
- (id)p_obtainSharegroupFromSharegroups;
- (void)p_removeSharegroupsFromFlushingManager;
- (oneway void)release;
- (void)releaseSharegroup:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (void)scheduleCheckCondition;
- (void)waitForBackgroundThreadsWithTimeout:(double)arg1;
- (void)willCheckCondition;

@end
