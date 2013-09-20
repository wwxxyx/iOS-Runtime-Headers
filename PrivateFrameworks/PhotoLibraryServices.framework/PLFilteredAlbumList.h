/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <NSObject><NSCopying>, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSObject<PLIndexMappingCache>, NSPredicate, NSString, PLIndexMapper, PLManagedAlbumList, PLPhotoLibrary;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin> {
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
    NSMutableIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSMutableOrderedSet *_weak_albums;
    PLManagedAlbumList *backingAlbumList;
    int filter;
    NSPredicate *predicate;
}

@property(retain) NSMutableOrderedSet * _albums;
@property(readonly) NSString * _prettyDescription;
@property(readonly) NSString * _typeDescription;
@property(readonly) int albumListType;
@property(readonly) NSMutableOrderedSet * albums;
@property(readonly) unsigned int albumsCount;
@property(readonly) id albumsSortingComparator;
@property(retain) PLManagedAlbumList * backingAlbumList;
@property(readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) BOOL canEditAlbums;
@property(readonly) unsigned int containersCount;
@property int filter;
@property(readonly) NSIndexSet * filteredIndexes;
@property(readonly) PLIndexMapper * indexMapper;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(retain) NSPredicate * predicate;
@property(readonly) unsigned int unreadAlbumsCount;

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;

- (id)_albums;
- (void)_backingContextDidChange:(id)arg1;
- (void)_invalidateFilteredIndexes;
- (id)_prettyDescription;
- (id)_typeDescription;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (int)albumListType;
- (id)albums;
- (unsigned int)albumsCount;
- (id)albumsSortingComparator;
- (id)backingAlbumList;
- (id)cachedIndexMapState;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (unsigned int)countOfFilteredAlbums;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (id)description;
- (void)enumerateDerivedAlbumLists:(id)arg1;
- (int)filter;
- (id)filteredAlbumsAtIndexes:(id)arg1;
- (id)filteredIndexes;
- (void)getFilteredAlbums:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (unsigned int)indexInFilteredAlbumsOfObject:(id)arg1;
- (id)indexMapper;
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned int)arg2;
- (BOOL)isEmpty;
- (id)managedObjectContext;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (BOOL)needsReordering;
- (id)objectInFilteredAlbumsAtIndex:(unsigned int)arg1;
- (id)photoLibrary;
- (id)predicate;
- (void)registerDerivedAlbumList:(struct NSObject { Class x1; }*)arg1;
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned int)arg1;
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)setBackingAlbumList:(id)arg1;
- (void)setFilter:(int)arg1;
- (void)setNeedsReordering;
- (void)setPredicate:(id)arg1;
- (void)set_albums:(id)arg1;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (unsigned int)unreadAlbumsCount;
- (void)unregisterAllDerivedAlbums;
- (void)updateAlbumsOrderIfNeeded;

@end
