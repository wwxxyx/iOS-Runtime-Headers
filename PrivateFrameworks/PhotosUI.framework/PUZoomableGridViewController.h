/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSIndexPath, PUGridMagnifiedImageViewController, PUGridPinchGestureRecognizer, PUGridZoomLevelInfo, PUMomentsZoomLevelManager, PUZoomableGridTransition, PUZoomableGridViewControllerSpec, UITapGestureRecognizer;

@interface PUZoomableGridViewController : PUPhotosGridViewController <PUMagnfiedViewControllerDelegate> {
    PUGridPinchGestureRecognizer *__gridPinchGestureRecognizer;
    NSIndexPath *__lastZoomInTransitionAnchorIndexPath;
    NSArray *__syncProgressAlbums;
    UITapGestureRecognizer *__tapGestureRecognizer;
    NSIndexPath *__transitionExplicitAnchorIndexPath;
    PUGridZoomLevelInfo *__zoomLevelInfo;
    PUZoomableGridTransition *_currentGridZoomTransitionInfo;
    PUGridMagnifiedImageViewController *_magnifiedImageViewController;
    unsigned int _zoomLevel;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    PUZoomableGridViewControllerSpec *_zoomableGridSpec;
}

@property(setter=_setGridPinchGestureRecognizer:,retain) PUGridPinchGestureRecognizer * _gridPinchGestureRecognizer;
@property(setter=_setLastZoomInTransitionAnchorIndexPath:,retain) NSIndexPath * _lastZoomInTransitionAnchorIndexPath;
@property(readonly) NSArray * _syncProgressAlbums;
@property(setter=_setTapGestureRecognizer:,retain) UITapGestureRecognizer * _tapGestureRecognizer;
@property(setter=_setTransitionExplicitAnchorIndexPath:,retain) NSIndexPath * _transitionExplicitAnchorIndexPath;
@property(readonly) PUGridZoomLevelInfo * _zoomLevelInfo;
@property(readonly) PUZoomableGridTransition * currentGridZoomTransitionInfo;
@property(setter=_setCurrentGridZoomTransitionInfo:,retain) PUZoomableGridTransition * currentGridZoomTransitionInfo;
@property(setter=_setMagnifiedImageViewController:,retain) PUGridMagnifiedImageViewController * magnifiedImageViewController;
@property(readonly) unsigned int zoomLevel;
@property(readonly) PUMomentsZoomLevelManager * zoomLevelManager;
@property(retain) PUZoomableGridViewControllerSpec * zoomableGridSpec;

- (void).cxx_destruct;
- (id)_beginInteractiveTransitionWithReferenceItemPath:(id)arg1 zoomingOut:(BOOL)arg2;
- (BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { float x1; float x2; })arg2 contentSize:(struct CGSize { float x1; float x2; })arg3;
- (BOOL)_disallowNavigationToHigherZoomLevel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForItemAtIndexPath:(id)arg1;
- (id)_gridPinchGestureRecognizer;
- (void)_handleGridPinchGestureRecognizer:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;
- (void)_invalidateSyncProgressAlbums;
- (id)_itemPathForLocationInGesture:(id)arg1;
- (id)_lastZoomInTransitionAnchorIndexPath;
- (void)_navigateToLowerZoomLevelWithReferenceItemPath:(id)arg1;
- (void)_reclaimCollectionView;
- (void)_setCurrentGridZoomTransitionInfo:(id)arg1;
- (void)_setGridPinchGestureRecognizer:(id)arg1;
- (void)_setLastZoomInTransitionAnchorIndexPath:(id)arg1;
- (void)_setMagnifiedImageViewController:(id)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTransitionExplicitAnchorIndexPath:(id)arg1;
- (id)_syncProgressAlbums;
- (id)_tapGestureRecognizer;
- (id)_transitionExplicitAnchorIndexPath;
- (id)_zoomLevelInfo;
- (BOOL)allowSlideshowButton;
- (id)bestTransitionReferenceItemIndexPathOutIsFromLastTransition:(BOOL*)arg1 outIsExplicit:(BOOL*)arg2;
- (BOOL)canBeginStackCollapseTransition;
- (BOOL)canBeginZoomIntoPhotoTransition;
- (BOOL)canDisplayEditButton;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (BOOL)collectionViewPointInSectionHeader:(struct CGPoint { float x1; float x2; })arg1;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (struct CGPoint { float x1; float x2; })contentOffsetForPreheating;
- (struct CGSize { float x1; float x2; })contentSizeForPreheating;
- (id)currentGridZoomTransitionInfo;
- (void)dealloc;
- (id)description;
- (void)didReceiveMemoryWarning;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)gridZoomTransitionDidFinish:(BOOL)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (id)imageWithFormat:(int)arg1 forIndexPath:(id)arg2;
- (id)initWithSpec:(id)arg1 zoomLevelManager:(id)arg2 zoomLevel:(unsigned int)arg3;
- (void)installGestureRecognizers;
- (BOOL)isTransitionAutoAdjustContentOffsetEnabled;
- (id)magnifiedImageViewController;
- (id)magnifiedImageViewControllerCreatingIfNecessary:(BOOL)arg1;
- (id)newGridLayout;
- (id)preheatManager;
- (void)prepareForTransitionToZoomableViewController:(id)arg1 anchorItemIndexPath:(id)arg2 anchorShiftsColumns:(BOOL)arg3 animated:(BOOL)arg4 interactive:(BOOL)arg5;
- (void)processPendingModelChangeNotifications;
- (BOOL)pu_shouldActAsTabRootViewController;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPhotoCollections:(id)arg1;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(int)arg3 animated:(BOOL)arg4;
- (void)setZoomableGridSpec:(id)arg1;
- (BOOL)shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (void)tearDownMagnifiedImageViewController;
- (void)uninstallGestureRecognizers;
- (void)updateInterfaceForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (void)updateLayoutMetrics;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsGlobalFooter;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)zoomLevel;
- (id)zoomLevelManager;
- (void)zoomTransition:(id)arg1 didFinishAnimationForOperation:(int)arg2;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5;
- (void)zoomTransition:(id)arg1 willBeginAnimationForOperation:(int)arg2;
- (id)zoomableGridSpec;

@end
