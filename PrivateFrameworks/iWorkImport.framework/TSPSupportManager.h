/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_group>, NSOperationQueue, NSRecursiveLock, NSURL, TSPObjectContext, TSPSupportSaveOperationState;

@interface TSPSupportManager : NSObject <NSFilePresenter, TSPFileCoordinatorDelegate> {
    TSPObjectContext *_context;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSOperationQueue *_presentedItemQueue;
    NSURL *_presentedSupportURL;
    NSRecursiveLock *_presentedSupportURLLock;
    TSPSupportSaveOperationState *_saveOperationState;
}

@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * presentedItemURL;
@property(copy) NSURL * presentedSupportURL;
@property(readonly) NSURL * primaryPresentedItemURL;

+ (BOOL)copyOrMoveSupportAtURL:(id)arg1 toURL:(id)arg2 isCopying:(BOOL)arg3 newDocumentProperties:(id)arg4 filePresenter:(id)arg5 error:(id*)arg6;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2;
+ (BOOL)isSupportAtURLValid:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3;
+ (id)supportBundleURLForUUID:(id)arg1 delegate:(id)arg2;
+ (id)supportDirectoryURLWithDelegate:(id)arg1;
+ (id)updateDocumentUUIDForDocumentURL:(id)arg1 preserveOriginalDocumentSupport:(BOOL)arg2 coordinateWrite:(BOOL)arg3 filePresenter:(id)arg4 delegate:(id)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)beginSaveWithDocumentUUID:(id)arg1 versionUUID:(id)arg2 originalURL:(id)arg3 updateType:(unsigned int)arg4;
- (BOOL)didUpdateDocumentUUIDForNewDocumentProperties:(id)arg1 preserveOriginalDocumentSupport:(BOOL)arg2 originalURL:(id)arg3 newURL:(id*)arg4 error:(id*)arg5;
- (BOOL)endSaveWithSuccess:(BOOL)arg1 newURL:(id*)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)performReadUsingAccessor:(id)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)presentedSupportURL;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)removeFilePresenter;
- (void)setPresentedSupportURL:(id)arg1;
- (id)supportURLWithDocumentUUID:(id)arg1;
- (void)updatePresentedItemURL:(id)arg1;
- (BOOL)writeSupportForDocumentUUID:(id)arg1 error:(id*)arg2 writer:(id)arg3;

@end
