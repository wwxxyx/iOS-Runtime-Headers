/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary, UINavigationController;

@interface PLTabbedLibraryViewController : UITabBarController <PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLInvitationRecordsObserver, PLDismissableViewController, PLRootLibraryNavigationController, UINavigationControllerDelegate> {
    BOOL _barHiddenExplicitly;
    int _baseAlbumListFilter;
    NSDictionary *_filteredAlbumListsByContentMode;
    int _pendingSelectedContentMode;
    BOOL _psBadgeIsDirty;
}

@property(readonly) int baseAlbumListFilter;
@property(readonly) BOOL needsTabBar;
@property int selectedContentMode;
@property(readonly) UINavigationController * selectedNavigationController;

+ (void)initialize;

- (void)_applicationWillEnterForeground:(id)arg1;
- (struct NSObject { Class x1; }*)_availableAlbumToNavigateToAsset:(id)arg1 preferredAlbum:(struct NSObject { Class x1; }*)arg2;
- (int)_contentModeForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_libraryDidChange:(id)arg1;
- (void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2;
- (void)_navigateToAlbum:(struct NSObject { Class x1; }*)arg1 andPerformAction:(int)arg2 initiallyHidden:(BOOL)arg3 animated:(BOOL)arg4 completion:(id)arg5;
- (void)_navigateToAsset:(id)arg1 andPerformAction:(int)arg2 inAlbum:(struct NSObject { Class x1; }*)arg3 animated:(BOOL)arg4;
- (id)_navigationControllerForContentMode:(int)arg1 replacedController:(id*)arg2;
- (void)_updatePhotoStreamTabBadgeForNavigationController:(id)arg1;
- (BOOL)albumIsAvailableForNavigation:(struct NSObject { Class x1; }*)arg1;
- (struct NSObject { Class x1; }*)albumListForContentMode:(int)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (BOOL)assetIsAvailableForNavigation:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2;
- (int)baseAlbumListFilter;
- (BOOL)canShowTabBadgeForContentMode:(int)arg1;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedIsAvailableForNavigation;
- (BOOL)commentIsAvailableForNavigation:(id)arg1 inAsset:(id)arg2;
- (void)configureTabBar:(id)arg1;
- (void)configureTabBarItem:(id)arg1 iconName:(id)arg2;
- (int)contentModeForNavigationController:(id)arg1;
- (BOOL)contentModeIsAvailableForNavigation:(int)arg1;
- (void)dealloc;
- (struct NSObject { Class x1; }*)defaultAlbumList;
- (id)existingNavigationControllerForContentMode:(int)arg1;
- (void)hideTabBar:(BOOL)arg1;
- (void)hideTabBarWithTransition:(int)arg1;
- (id)init;
- (id)initWithBaseAlbumListFilter:(int)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (BOOL)isNavigationControllerBadged:(id)arg1;
- (void)navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)navigateToAsset:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(BOOL)arg3;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedWithCompletion:(id)arg1;
- (void)navigateToComment:(id)arg1 forAsset:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToContentMode:(int)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)navigateToInitialLocationInNavigationController:(id)arg1;
- (void)navigateToRevealAlbum:(struct NSObject { Class x1; }*)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealAsset:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(id)arg2;
- (BOOL)navigateToRootOfCurrentTabAnimated:(BOOL)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)needsTabBar;
- (id)newNavigationControllerWithRootController:(id)arg1;
- (id)newRootViewControllerForContentMode:(int)arg1;
- (void)prepareForDefaultImageSnapshot;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (int)selectedContentMode;
- (id)selectedNavigationController;
- (void)setSelectedContentMode:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldShowTabForContentMode:(int)arg1;
- (void)showBarWithTransition:(int)arg1;
- (void)showTabBarIfNeeded:(BOOL)arg1;
- (void)showTabBarIfNeededWithTransition:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)updateDisplayedTabs:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
