/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSURL;

@interface MPUQueryDataSource : MPUDataSource {
    NSArray *_entities;
    BOOL _invalidateWhenEnteringForeground;
    MPMediaQuery *_query;
    MPMediaQuerySectionInfo *_sectionInfo;
}

@property(readonly) NSURL * bestStoreURL;
@property(readonly) MPMediaQuery * query;

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (BOOL)_deleteHidesFromCloudForIndex:(unsigned int)arg1 hidesAll:(out BOOL*)arg2;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_postInvalidationNotification;
- (id)_sectionInfo;
- (id)bestStoreURL;
- (BOOL)canEditEntityAtIndex:(unsigned int)arg1;
- (BOOL)canSelectEntityAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)dataSourceFromEntityAtIndex:(unsigned int)arg1 entityType:(int)arg2;
- (void)dealloc;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (unsigned int)indexOfSectionForSectionTitleAtIndex:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (void)invalidateCalculatedEntities;
- (BOOL)isEmpty;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionTitleAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfSections;
- (id)query;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfSectionAtIndex:(unsigned int)arg1;
- (BOOL)showsEntityCountFooter;
- (BOOL)showsIndexBar;
- (id)titleForGlobalHeader;

@end
