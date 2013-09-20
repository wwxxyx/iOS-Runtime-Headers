/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSObject<PLAlbumProtocol>, PUPhotosPickerViewController;

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate> {
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    struct NSObject { Class x1; } *_album;
}

@property(retain) NSObject<PLAlbumProtocol> * album;

- (void).cxx_destruct;
- (BOOL)_hasScrollableContent;
- (struct NSObject { Class x1; }*)album;
- (BOOL)canBeginStackCollapseTransition;
- (void)configureGlobalFooterView:(id)arg1;
- (struct CGPoint { float x1; float x2; })contentOffsetForPreheating;
- (void)handleAddFromAction;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (id)initWithSpec:(id)arg1;
- (id)localizedTitleForAssets:(id)arg1;
- (id)newGridLayout;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)saveSlideshowSettings:(id)arg1;
- (id)savedSlideshowSettings;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setupScrubber;
- (void)updateTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsGlobalFooter;

@end
