/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLMediaLibraryService, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface MLMediaLibraryServiceStatementAccumulator : NSObject {
    NSString *_databasePath;
    NSUUID *_existingTransactionIdentifier;
    unsigned int _priorityLevel;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_statementQueue;
    unsigned int _statementThreshold;
    MLMediaLibraryService *_xpcService;
}

@property(readonly) NSString * databasePath;
@property(retain) NSUUID * existingTransactionIdentifier;
@property unsigned int priorityLevel;
@property(readonly) NSMutableArray * statementQueue;
@property unsigned int statementThreshold;

- (void).cxx_destruct;
- (BOOL)_onQueueFlushAndWait:(BOOL)arg1;
- (id)databasePath;
- (void)dealloc;
- (BOOL)enqueueStatement:(id)arg1;
- (id)existingTransactionIdentifier;
- (BOOL)flushAndWait:(BOOL)arg1;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;
- (unsigned int)priorityLevel;
- (void)setExistingTransactionIdentifier:(id)arg1;
- (void)setPriorityLevel:(unsigned int)arg1;
- (void)setStatementThreshold:(unsigned int)arg1;
- (id)statementQueue;
- (unsigned int)statementThreshold;

@end
