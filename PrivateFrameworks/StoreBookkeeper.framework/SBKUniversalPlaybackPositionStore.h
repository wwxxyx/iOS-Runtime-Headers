/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class <SBKUniversalPlaybackPositionDataSource>, NSDate, NSObject<OS_dispatch_queue>, NSTimer, SBKAsynchronousTask, SBKPlaybackPositionSyncRequestHandler;

@interface SBKUniversalPlaybackPositionStore : NSObject {
    id _accountsObserver;
    unsigned int _automaticSynchronizeOptions;
    double _autorefreshInterval;
    SBKAsynchronousTask *_bagLookupTask;
    <SBKUniversalPlaybackPositionDataSource> *_dataSource;
    NSDate *_dateToFireNextTimer;
    BOOL _hasLocalChangesToSync;
    double _initialAutosyncInterval;
    BOOL _isActive;
    SBKAsynchronousTask *_lookupDomainVersionTask;
    double _pollingLimitFromBag;
    id _prefsObserver;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _refreshTimerActive;
    SBKPlaybackPositionSyncRequestHandler *_syncHandler;
    SBKAsynchronousTask *_synchronizeTask;
    NSTimer *_timer;
}

@property unsigned int automaticSynchronizeOptions;
@property(retain) SBKAsynchronousTask * bagLookupTask;
@property(readonly) <SBKUniversalPlaybackPositionDataSource> * dataSource;
@property(retain) NSDate * dateToFireNextTimer;
@property BOOL hasLocalChangesToSync;
@property(retain) SBKAsynchronousTask * lookupDomainVersionTask;
@property(retain) SBKPlaybackPositionSyncRequestHandler * syncHandler;
@property(retain) SBKAsynchronousTask * synchronizeTask;
@property(retain) NSTimer * timer;

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;

- (void).cxx_destruct;
- (id)_accountForSyncing;
- (BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)_automaticallySynchronizeOnBecomeActive;
- (double)_effectiveAutorefreshRate;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id)arg1;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id)arg1;
- (void)_onQueueResumeTimer;
- (void)_onQueueScheduleTimer;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;
- (void)_onQueueStopTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id)arg1;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned int)arg1 withCompletionBlock:(id)arg2;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_timerFired:(id)arg1;
- (BOOL)_timerIsStopped;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)arg1;
- (void)_updateForStoreAccountsChange;
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;
- (unsigned int)automaticSynchronizeOptions;
- (BOOL)automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)automaticallySynchronizeOnBecomeActive;
- (id)bagLookupTask;
- (void)becomeActive;
- (void)checkForAvailabilityWithCompletionBlock:(id)arg1;
- (id)dataSource;
- (id)dateToFireNextTimer;
- (void)dealloc;
- (void)deprecated_setDataSource:(id)arg1;
- (BOOL)hasLocalChangesToSync;
- (id)init;
- (id)initWithDataSource:(id)arg1 automaticSynchronizeOptions:(unsigned int)arg2 isActive:(BOOL)arg3;
- (id)initWithInitialUpdateDelay:(double)arg1 allowAutorefresh:(BOOL)arg2 isActive:(BOOL)arg3;
- (id)initWithInitialUpdateDelay:(double)arg1 isActive:(BOOL)arg2;
- (id)initWithInitialUpdateDelay:(double)arg1;
- (void)loadRemoteDomainVersionWithCompletionBlock:(id)arg1;
- (void)loadSyncBagContextWithCompletionBlock:(id)arg1;
- (id)lookupDomainVersionTask;
- (void)resignActive;
- (void)setAutomaticSynchronizeOptions:(unsigned int)arg1;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)arg1;
- (void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)arg1;
- (void)setBagLookupTask:(id)arg1;
- (void)setDateToFireNextTimer:(id)arg1;
- (void)setHasLocalChangesToSync:(BOOL)arg1;
- (void)setLookupDomainVersionTask:(id)arg1;
- (void)setSyncHandler:(id)arg1;
- (void)setSynchronizeTask:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)syncHandler;
- (void)synchronizeImmediatelyWithCompletionBlock:(id)arg1;
- (void)synchronizeImmediatelyWithCompletionHandler:(id)arg1;
- (id)synchronizeTask;
- (id)timer;

@end
