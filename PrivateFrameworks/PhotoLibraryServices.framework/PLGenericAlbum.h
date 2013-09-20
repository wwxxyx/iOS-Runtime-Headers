/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSObject<PLIndexMappingCache>, NSOrderedSet, NSString, NSURL, PLManagedAsset, PLPhotoLibrary, UIImage;

@interface PLGenericAlbum : _PLGenericAlbum <PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin> {
    NSObject<PLIndexMappingCache> *_derivededAlbums[5];
    BOOL didRegisteredWithUserInterfaceContext;
    BOOL isRegisteredForChanges;
}

@property(readonly) unsigned int approximateCount;
@property(readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property(readonly) BOOL canContributeToCloudSharedAlbum;
@property(readonly) BOOL canShowAvalancheStacks;
@property(readonly) BOOL canShowComments;
@property BOOL didRegisteredWithUserInterfaceContext;
@property(readonly) NSDate * endDate;
@property(readonly) NSURL * groupURL;
@property BOOL hasUnseenContentBoolValue;
@property(retain) NSString * importSessionID;
@property(readonly) unsigned int indexOfPosterImage;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly) BOOL isOwnPhotoStreamAlbum;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPanoramasAlbum;
@property(readonly) BOOL isPendingPhotoStreamAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property BOOL isRegisteredForChanges;
@property(readonly) BOOL isSmartAlbum;
@property(readonly) BOOL isStandInAlbum;
@property(readonly) BOOL isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) NSNumber * kind;
@property int kindValue;
@property(readonly) NSArray * localizedLocationNames;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) NSString * name;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) unsigned int photosCount;
@property(readonly) UIImage * posterImage;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) id sectioningComparator;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(readonly) id sortingComparator;
@property(readonly) NSDate * startDate;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain) NSString * title;
@property(retain) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)allHorizontalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allPanoramasAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allSyncedAlbumsInManagedObjectContext:(id)arg1;
+ (id)allVerticalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allVideosAlbumInLibrary:(id)arg1;
+ (id)cameraRollAlbumInLibrary:(id)arg1;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewEventIntoLibrary:(id)arg1;
+ (id)insertNewEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)keyPathsForValuesAffectingName;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)wallpaperAlbumInLibrary:(id)arg1;

- (id)_compactDebugDescription;
- (id)_kindDescription;
- (id)_prettyDescription;
- (unsigned int)approximateCount;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (unsigned int)assetsCount;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canContributeToCloudSharedAlbum;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (unsigned int)count;
- (unsigned int)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)delete;
- (id)description;
- (BOOL)didRegisteredWithUserInterfaceContext;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (void)enumerateDerivedAlbums:(id)arg1;
- (void)enumerateDerivedIndexMappers:(id)arg1;
- (id)groupURL;
- (BOOL)hasDerivedIndexMappers;
- (BOOL)hasUnseenContentBoolValue;
- (unsigned int)indexOfPosterImage;
- (BOOL)isCameraAlbum;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isEmpty;
- (BOOL)isLibrary;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnPhotoStreamAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isRegisteredForChanges;
- (BOOL)isSmartAlbum;
- (BOOL)isStandInAlbum;
- (BOOL)isWallpaperAlbum;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)name;
- (id)photoLibrary;
- (unsigned int)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)registerDerivedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)registerForChanges;
- (id)sectioningComparator;
- (void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setIsRegisteredForChanges:(BOOL)arg1;
- (void)setKind:(id)arg1;
- (void)setKindValue:(int)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)title;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)unregisterForChanges;
- (id)uuid;
- (unsigned int)videosCount;
- (void)willTurnIntoFault;

@end
