/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSArray;

@interface MusicArtistAlbumsDataSource : MusicQueryDataSource {
    NSArray *_albums;
}

- (void).cxx_destruct;
- (id)entities;
- (void)invalidateCalculatedEntities;
- (unsigned int)numberOfSections;
- (void)overlayCompletionForSectionAtIndex:(unsigned int)arg1;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfSectionAtIndex:(unsigned int)arg1;
- (void)removeOverlayCompletionForSectionAtIndex:(unsigned int)arg1;
- (id)sectionEntities;
- (BOOL)shouldAutomaticallyLoadCompletions;
- (BOOL)shouldShowCompletions;
- (BOOL)showsIndexBar;
- (BOOL)usesSections;

@end
