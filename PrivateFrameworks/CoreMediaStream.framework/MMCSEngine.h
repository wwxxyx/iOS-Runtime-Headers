/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MMCSEngineDelegate>, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSThread, NSTimer, NSURL;

@interface MMCSEngine : NSObject {
    struct { 
        int version; 
        void *context; 
        int (*getFileDescriptorAndContentTypeFromItemCallback)(); 
        int (*getItemProgressCallback)(); 
        int (*getItemDoneCallback)(); 
        int (*putItemProgressCallback)(); 
        int (*putItemDoneCallback)(); 
        int (*requestCompletedCallback)(); 
    NSString *_appIDHeader;
    BOOL _autoGenerateItemID;
    NSMutableDictionary *_autoItemIDDictionary;
    NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
    NSURL *_autoItemIDPersistenceURL;
    NSString *_dataClass;
    <MMCSEngineDelegate> *_delegate;
    struct __MMCSEngine { } *_engine;
    } _engineClientContext;
    BOOL _isDone;
    BOOL _isMetricsGatheringEnabled;
    NSMutableDictionary *_itemIDToAssetMap;
    NSObject<OS_dispatch_queue> *_itemIDToAssetMapQueue;
    NSDictionary *_options;
    NSObject<OS_dispatch_queue> *_reqestorContextQueue;
    NSMutableArray *_requestorContexts;
    NSTimer *_threadKeepAliveTimer;
    NSURL *_workPathURL;
    NSThread *_workThread;
}

@property BOOL autoGenerateItemID;
@property <MMCSEngineDelegate> * delegate;
@property(readonly) BOOL hasOutstandingActivity;
@property BOOL isDone;
@property BOOL isMetricsGatheringEnabled;
@property(retain) NSTimer * threadKeepAliveTimer;
@property(retain) NSThread * workThread;

+ (id)logStringForGetItemState:(int)arg1;
+ (id)logStringForPutItemState:(int)arg1;

- (void).cxx_destruct;
- (id)_assetWithItemID:(unsigned long long)arg1;
- (void)_doNothingTimerHandler:(id)arg1;
- (BOOL)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)arg1 outFD:(int*)arg2 outItemType:(id*)arg3 outError:(id*)arg4;
- (void)_getItemDoneItemID:(unsigned long long)arg1 path:(id)arg2 requestorContext:(id)arg3 error:(id)arg4;
- (void)_getItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (void)_initItemIDPersistence;
- (void)_logLevel:(int)arg1 message:(id)arg2;
- (unsigned long long)_nextItemID;
- (void)_putItemDoneItemID:(unsigned long long)arg1 requestorContext:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
- (void)_putItemProgressItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 requestorContext:(id)arg4 error:(id)arg5;
- (void)_registerAsset:(id)arg1;
- (void)_registerRequestorContext:(id)arg1;
- (void)_removeAssetForItemID:(unsigned long long)arg1;
- (void)_removeRequestorContext:(id)arg1;
- (void)_requestCompletedRequestorContext:(id)arg1;
- (BOOL)autoGenerateItemID;
- (void)cancelAllOperations;
- (void)cancelOperationsWithContext:(id)arg1;
- (id)delegate;
- (void)getAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (BOOL)hasOutstandingActivity;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4 modes:(id)arg5;
- (id)initWithWorkPath:(id)arg1 appIDHeader:(id)arg2 dataClass:(id)arg3 options:(id)arg4;
- (BOOL)isActive;
- (BOOL)isDone;
- (BOOL)isMetricsGatheringEnabled;
- (void)performBlock:(id)arg1;
- (void)performBlockOnWorkThread:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)performBlockOnWorkThread:(id)arg1;
- (void)putAssets:(id)arg1 requestURL:(id)arg2 DSID:(id)arg3 options:(id)arg4;
- (void)registerAssetForUpload:(id)arg1 completionBlock:(id)arg2;
- (void)registerAssets:(id)arg1 forDownloadCompletionBlock:(id)arg2;
- (void)reregisterAssetForDownload:(id)arg1;
- (void)reregisterAssetForUpload:(id)arg1;
- (void)setAutoGenerateItemID:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsDone:(BOOL)arg1;
- (void)setIsMetricsGatheringEnabled:(BOOL)arg1;
- (void)setThreadKeepAliveTimer:(id)arg1;
- (void)setWorkThread:(id)arg1;
- (void)shutDownCompletionBlock:(id)arg1;
- (id)threadKeepAliveTimer;
- (void)threadMain:(id)arg1;
- (void)unregisterAsset:(id)arg1;
- (void)unregisterAssets:(id)arg1;
- (id)workThread;

@end
