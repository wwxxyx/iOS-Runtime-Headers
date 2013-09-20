/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL, PFUbiquityLocation;

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
    NSString *_localPeerID;
    NSMutableDictionary *_locationToSafeSaveFile;
    NSMutableDictionary *_locationToStatus;
    NSMutableArray *_pendingURLs;
    int _pendingURLsLock;
    NSURL *_presentedItemURL;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _scheduledProcessingBlock;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(readonly) NSString * localPeerID;
@property(readonly) NSDictionary * locationToSafeSaveFile;
@property(readonly) NSDictionary * locationToStatus;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * presentedItemURL;
@property(readonly) NSURL * primaryPresentedItemURL;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;

+ (void)initialize;
+ (void)registerInitialSyncHandlerForURL:(id)arg1 onQueue:(id)arg2 withBlock:(id)arg3;
+ (id)sharedPrivateOperationQueue;
+ (void)startDownloadForItems:(id)arg1 onQueue:(id)arg2 withBlock:(id)arg3;

- (void)dealloc;
- (id)description;
- (void)exporterDidMoveLog:(id)arg1;
- (id)init;
- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 processingQueue:(id)arg3;
- (id)localPeerID;
- (id)locationToSafeSaveFile;
- (id)locationToStatus;
- (void)logImportWasCancelled:(id)arg1;
- (void)logWasExported:(id)arg1;
- (void)logWasImported:(id)arg1;
- (void)logsWereScheduled:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1;
- (void)printStatus:(id)arg1;
- (void)processPendingURLs;
- (void)registerSafeSaveFile:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (id)retainedStatusForLocation:(id)arg1;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;
- (id)ubiquityRootLocation;
- (void)unregisterSafeSaveFile:(id)arg1;

@end
