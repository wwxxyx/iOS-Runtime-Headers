/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseConnection, ML3MusicLibrary, ML3PersistentIDGenerator, ML3SortMap, MLMediaLibraryServiceStatementAccumulator, NSCache, NSDictionary;

@interface MLImportSession : NSObject {
    struct unordered_map<long long, CollectionPIDSet, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, CollectionPIDSet> > > { 
        struct __hash_table<std::__1::pair<long long, CollectionPIDSet>, std::__1::__unordered_map_hasher<long long, CollectionPIDSet, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, CollectionPIDSet, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::pair<long long, CollectionPIDSet> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> *> { 
                    struct __hash_node<std::__1::pair<long long, CollectionPIDSet>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, CollectionPIDSet, std::__1::hash<long long>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, CollectionPIDSet, std::__1::equal_to<long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct { 
        unsigned int addCount; 
        unsigned int updateCount; 
        unsigned int deleteCount; 
        double importStartTime; 
    struct vector<MLRowDataSource *, std::__1::allocator<MLRowDataSource *> > { 
        struct MLRowDataSource {} **__begin_; 
        struct MLRowDataSource {} **__end_; 
        struct __compressed_pair<MLRowDataSource **, std::__1::allocator<MLRowDataSource *> > { 
            struct MLRowDataSource {} **__first_; 
        } __end_cap_; 
    MLMediaLibraryServiceStatementAccumulator *_accumulator;
    NSCache *_albumArtistPIDsForGroupingKeys;
    NSCache *_albumDataForGroupingIdentifier;
    NSCache *_artistPIDsForGroupingKeys;
    NSDictionary *_cachedNameOrders;
    NSCache *_composerPIDsForGroupingKeys;
    ML3DatabaseConnection *_connection;
    NSCache *_genrePIDsForGroupingKeys;
    ML3MusicLibrary *_library;
    ML3PersistentIDGenerator *_persistentIDGenerator;
    ML3DatabaseConnection *_readerConnection;
    BOOL _rebuildCollections;
    BOOL _rebuildIndexes;
    } _rowDataSources;
    ML3SortMap *_sortMap;
    int _sourceType;
    } _stats;
    } collectionPIDSetForTrackPID;
}

@property(retain) NSDictionary * cachedNameOrders;
@property(retain) ML3DatabaseConnection * connection;
@property(retain) ML3MusicLibrary * library;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_albumArtistGroupingNameFromDataSource:(id)arg1;
- (long long)_albumArtistPIDForTrack:(id)arg1;
- (id)_albumGroupingIdentifierWithAlbumArtistPersistentID:(long long)arg1 withTrack:(id)arg2;
- (long long)_albumPIDForTrack:(id)arg1 albumArtistPID:(long long)arg2 isUpdate:(BOOL)arg3;
- (id)_artistGroupingNameFromDataSource:(id)arg1;
- (long long)_artistPIDForTrack:(id)arg1;
- (id)_composerGroupingNameFromDataSource:(id)arg1;
- (long long)_composerPIDForTrack:(id)arg1;
- (id)_existingAlbumStateForGroupingIdentifier:(id)arg1;
- (id)_existingCollectionPidForTable:(id)arg1 groupingKey:(id)arg2;
- (id)_generateInsertionSQLWithInsertPart:(id)arg1 numberOfValues:(unsigned int)arg2;
- (id)_genreGroupingNameFromDataSource:(id)arg1;
- (long long)_genrePIDForTrack:(id)arg1;
- (id)_insertIntoAlbumArtistSQL;
- (id)_insertIntoAlbumSQL;
- (id)_insertIntoComposerSQL;
- (id)_insertIntoGenreSQL;
- (id)_insertIntoItemArtistSQL;
- (long long)_locationKindPIDForTrack:(id)arg1;
- (void)_populateNameOrderWithNameOrderForPIDMap:(struct unordered_map<long long, ML3NameOrder, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, ML3NameOrder> > > { struct __hash_table<std::__1::pair<long long, ML3NameOrder>, std::__1::__unordered_map_hasher<long long, ML3NameOrder, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, ML3NameOrder, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::pair<long long, ML3NameOrder> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> > > { struct __hash_node<std::__1::pair<long long, ML3NameOrder>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<long long, ML3NameOrder>, void *> *> { struct __hash_node<std::__1::pair<long long, ML3NameOrder>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, ML3NameOrder, std::__1::hash<long long>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, ML3NameOrder, std::__1::equal_to<long long>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg1 tableName:(id)arg2 nameSQL:(id)arg3;
- (BOOL)_prepareCollectionsForTrack:(id)arg1 isUpdate:(BOOL)arg2;
- (BOOL)_prepareSortDataForTrack:(id)arg1 isUpdate:(BOOL)arg2;
- (BOOL)_updateAlbumEntry:(id)arg1 albumArtistPID:(long long)arg2 albumPid:(long long)arg3;
- (BOOL)_updateTrackData:(id)arg1 isUpdate:(BOOL)arg2;
- (BOOL)addTrack:(id)arg1;
- (BOOL)begin:(unsigned int)arg1;
- (BOOL)begin;
- (id)cachedNameOrders;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; })collectionPIDSetForTrackPID:(long long)arg1;
- (id)connection;
- (void)dealloc;
- (BOOL)finish;
- (int)importLogLevel;
- (id)initWithLibrary:(id)arg1 onConnection:(id)arg2;
- (id)library;
- (long long)persistentIdentifierForItem:(id)arg1 existing:(BOOL*)arg2;
- (BOOL)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2;
- (BOOL)removeTrack:(id)arg1;
- (void)setCachedNameOrders:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setLibrary:(id)arg1;
- (BOOL)updateCollectionRepresentativePIDs;
- (BOOL)updateEntityRevisionTable;
- (BOOL)updateTrack:(id)arg1;

@end
