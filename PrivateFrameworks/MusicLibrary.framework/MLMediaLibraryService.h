/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class <MLMediaLibraryServiceProtocol>, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol, MLMediaLibraryServiceProtocol> {
    NSObject<OS_dispatch_queue> *_completionQueue;
    BOOL _connectionOpen;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    BOOL _processRequestsInApp;
    NSObject<OS_dispatch_queue> *_serialQueue;
    <MLMediaLibraryServiceProtocol> *_serviceProxy;
    NSXPCConnection *_xpcConnection;
}

@property(readonly) BOOL connectionOpen;

+ (void)_setDaemonProcessInfo:(id)arg1;
+ (id)sharedMediaLibraryService;

- (void).cxx_destruct;
- (void)__enqueueClientCompletionHandler:(id)arg1 forInterfaceMessage:(SEL)arg2 withBlockFacade:(id)arg3;
- (struct NSNumber { Class x1; }*)_addPendingCompletionHandler:(id)arg1;
- (void)_enqueueClientCompletionHandler:(id)arg1 forInterfaceMessage:(SEL)arg2 withBlockFacade:(id)arg3;
- (void)_invalidatePendingCompletionHandlersWithError:(id)arg1;
- (void)_onQueueCloseServiceConnection;
- (void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1;
- (id)_retrieveCompletionHandlerForToken:(struct NSNumber { Class x1; }*)arg1;
- (oneway void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned int)arg2 withCompletionHandler:(id)arg3;
- (void)closeServiceConnection;
- (BOOL)connectionOpen;
- (void)dealloc;
- (oneway void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (oneway void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(id)arg5;
- (oneway void)executeTemplatedDatabaseOperation:(unsigned int)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(id)arg4;
- (oneway void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(id)arg4;
- (id)init;
- (void)openServiceConnection;
- (oneway void)performImportFromSource:(unsigned int)arg1 intoDatabaseAtPath:(id)arg2 withTrackData:(id)arg3 options:(id)arg4 completionHandler:(id)arg5;
- (oneway void)pollCurrentImportStatus:(id)arg1;
- (oneway void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(id)arg2;
- (id)serviceProxy;
- (oneway void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2;
- (oneway void)serviceWillTerminateTransactionWithIdentifier:(id)arg1 replyBlock:(id)arg2;
- (oneway void)setOptions:(id)arg1 withCompletionHandler:(id)arg2;
- (oneway void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(id)arg2;
- (void)validateDatabaseForLibrary:(id)arg1 withCompletionHandler:(id)arg2;

@end
