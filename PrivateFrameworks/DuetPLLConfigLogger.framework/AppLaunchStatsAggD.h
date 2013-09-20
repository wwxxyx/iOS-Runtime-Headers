/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
 */

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsAggD : NSObject {
    int BGReportToken;
    NSObject<OS_dispatch_queue> *aggDQueue;
    long long avgDownloadsize;
    long long avgPWConsumed;
    boolbuildLaunchStats;
    NSDate *cycleStart;
    int fetchAttempt;
    int fetchDataCount;
    long long fetchDataTotal;
    int fetchDenied;
    int fetchDeniedNoData;
    int fetchDeniedNoPW;
    int fetchDeniedPoorCell;
    int fetchFailedCount;
    int fetchGiven;
    int fetchPWTotal;
    int fetchUpdateTimeCount;
    long long fetchUpdateTimeTotal;
    int forceRelease;
    int hasStats;
    NSMutableDictionary *launchDict;
    NSMutableArray *pastCycle;
    NSMutableDictionary *prewarmDict;
    int prewarmHits;
    int prewarmMiss;
    int prewarmZoneCounts[9];
    int pushAttempt;
    int pushDenied;
    int pushDeniedNoData;
    int pushDeniedNoPW;
    int pushDeniedPoorCell;
    int totalBGDownloads;
    long long totalNonDiscDownload;
    long long totalNonDiscEnergy;
    int zoneCounts[9];
}

@property(readonly) NSDate * cycleStart;
@property(retain) NSMutableArray * pastCycle;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accountPredatePrewarm:(id)arg1 launch:(int)arg2 launchvalue:(int)arg3 prewarmvalue:(int)arg4 diff:(int)arg5;
- (void)appFGLaunch:(id)arg1;
- (void)appPrewarm:(id)arg1;
- (void)backgroundSucceeds:(long long)arg1 withPW:(long long)arg2;
- (void)calculatePrewarmHitMiss:(id)arg1 launch:(id)arg2;
- (id)cycleStart;
- (void)dealloc;
- (int)distanceToLastPrewarm:(id)arg1 currentSlot:(int)arg2 currentoffset:(int)arg3;
- (void)fetchAttemptIncrement;
- (void)fetchCountUpdate:(int)arg1;
- (void)fetchDataCount:(int)arg1;
- (void)fetchDenied;
- (void)fetchDeniedBecause:(bool)arg1 withPWBudget:(bool)arg2 inwifi:(bool)arg3 incell:(bool)arg4 ignorePoorCell:(bool)arg5;
- (void)fetchFailedUpdate;
- (void)fetchPWCount:(int)arg1;
- (void)fetchTimeUpdate:(long long)arg1;
- (void)forceReleaseCount;
- (id)init;
- (void)newCycleWithApps:(id)arg1;
- (void)nonDiscretionaryAdd:(unsigned long long)arg1 withPW:(unsigned long long)arg2;
- (id)pastCycle;
- (void)populatePredictZones:(id)arg1;
- (void)populatePrewarmZones:(id)arg1;
- (void)pushAttemptIncrement;
- (void)pushDenied;
- (void)pushDeniedBecause:(bool)arg1 withPWBudget:(bool)arg2 inwifi:(bool)arg3 incell:(bool)arg4 ignorePoorCell:(bool)arg5;
- (void)replacePredictionAtZone:(id)arg1 zoneid:(int)arg2;
- (void)setCollectLaunchStats;
- (void)setPastCycle:(id)arg1;
- (void)uploadData;

@end
