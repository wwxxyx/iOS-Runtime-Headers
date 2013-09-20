/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSCH3DSharegroupDelegate>, NSMutableSet, NSThread, TSCH3DResourceCache, TSCH3DShaderCache, TSCH3DSharegroupToken;

@interface TSCH3DSharegroup : NSObject <TSUFlushable> {
    <TSCH3DSharegroupDelegate> *mDelegate;
    BOOL mDidReceiveFlush;
    NSThread *mOwningThread;
    int mPerformance;
    NSMutableSet *mPurgeableResourceSet;
    TSCH3DResourceCache *mResourceCache;
    TSCH3DShaderCache *mShaderCache;
    TSCH3DSharegroupToken *mToken;
}

@property <TSCH3DSharegroupDelegate> * delegate;
@property int performance;
@property(readonly) TSCH3DResourceCache * resourceCache;
@property(readonly) TSCH3DShaderCache * shaderCache;
@property(readonly) TSCH3DSharegroupToken * token;

+ (id)uniqueSharegroupWithOwningThread:(id)arg1 token:(id)arg2;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)flush;
- (void)flushIfNecessary;
- (void)flushInTargetThread;
- (void)flushMemoryForResourceSet:(id)arg1;
- (void)flushResourceSet:(id)arg1;
- (void)forceFlushResourceSet:(id)arg1;
- (id)init;
- (id)initWithOwningThread:(id)arg1 token:(id)arg2;
- (BOOL)isCurrentThreadOwner;
- (BOOL)isOneShot;
- (BOOL)mustRunOnMainThread;
- (void)nonThreadOwnedFlushCache;
- (BOOL)owningThreadIsNil;
- (struct FlushResult { BOOL x1; BOOL x2; })p_flushCacheIfNecessary;
- (void)p_flushInTargetThread;
- (int)performance;
- (id)resourceCache;
- (void)setDelegate:(id)arg1;
- (void)setIfIsMoreDemandingPerformance:(int)arg1;
- (void)setOwningThread:(id)arg1;
- (void)setPerformance:(int)arg1;
- (id)shaderCache;
- (id)token;

@end
