/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class <ML3DatabaseConnectionPoolDelegate>, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID, _ML3DatabaseConnectionSubPool;

@interface ML3DatabaseConnectionPool : NSObject {
    unsigned int _connectionsJournalingMode;
    int _connectionsProfilingLevel;
    NSString *_databasePath;
    <ML3DatabaseConnectionPoolDelegate> *_delegate;
    NSMutableDictionary *_identifiersConnectionsMap;
    unsigned int _maxReaders;
    unsigned int _maxWriters;
    NSUUID *_poolStorageKey;
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _useDistantWriterConnections;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
}

@property unsigned int connectionsJournalingMode;
@property int connectionsProfilingLevel;
@property(readonly) NSString * databasePath;
@property <ML3DatabaseConnectionPoolDelegate> * delegate;
@property(readonly) BOOL isCurrentThreadConnectionInTransaction;
@property(readonly) unsigned int maxReaders;
@property(readonly) unsigned int maxWriters;
@property BOOL useDistantWriterConnections;

- (void).cxx_destruct;
- (id)_connectionForIdentifier:(id)arg1;
- (id)_connectionForWriting:(BOOL)arg1 useThreadConnection:(BOOL)arg2;
- (id)_localConnectionForThread:(id)arg1;
- (void)_setConnection:(id)arg1 forIdentifier:(id)arg2;
- (void)_setLocalConnection:(id)arg1 forThread:(id)arg2;
- (void)checkInConnection:(id)arg1;
- (void)closeAllConnections;
- (unsigned int)connectionsJournalingMode;
- (int)connectionsProfilingLevel;
- (id)databasePath;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned int)arg2 maxWriters:(unsigned int)arg3;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned int)arg2;
- (BOOL)isCurrentThreadConnectionInTransaction;
- (unsigned int)maxReaders;
- (unsigned int)maxWriters;
- (id)readerConnection;
- (void)setConnectionsJournalingMode:(unsigned int)arg1;
- (void)setConnectionsProfilingLevel:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUseDistantWriterConnections:(BOOL)arg1;
- (BOOL)useDistantWriterConnections;
- (id)writerConnection;

@end
