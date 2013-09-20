/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PLCloudSharedAlbum, PUPhotoStreamComposeServiceViewController, PUPhotosPickerViewController, PUVideoTrimQueueController, UIBarButtonItem, UIPopoverController, UISegmentedControl, UIViewController;

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PLAlbumStreamingOptionsViewControllerDelegate, UIPopoverControllerDelegate, PUVideoTrimQueueControllerDelegate, PUPhotoStreamComposeServiceDelegate> {
    BOOL __canContributeToCloudSharedAlbum;
    UIBarButtonItem *__optionsBarButtonItem;
    UIPopoverController *__optionsPopoverController;
    UIViewController *__optionsViewController;
    int __selectedItemIndex;
    UIBarButtonItem *__switcherBarButtonItem;
    UISegmentedControl *__switcherSegmentedControl;
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    PUPhotoStreamComposeServiceViewController *_composeServiceController;
    BOOL _displayingOptions;
    PUVideoTrimQueueController *_trimController;
}

@property(setter=_setCanContributeToCloudSharedAlbum:) BOOL _canContributeToCloudSharedAlbum;
@property(setter=_setOptionsBarButtonItem:,retain) UIBarButtonItem * _optionsBarButtonItem;
@property(setter=_setOptionsPopoverController:,retain) UIPopoverController * _optionsPopoverController;
@property(setter=_setOptionsViewController:,retain) UIViewController * _optionsViewController;
@property(setter=_setSelectedItemIndex:) int _selectedItemIndex;
@property(setter=_setSwitcherBarButtonItem:,retain) UIBarButtonItem * _switcherBarButtonItem;
@property(setter=_setSwitcherSegmentedControl:,retain) UISegmentedControl * _switcherSegmentedControl;
@property(retain) PLCloudSharedAlbum * album;
@property(getter=isDisplayingOptions,setter=setDisplayingOptions:) BOOL displayingOptions;

- (void).cxx_destruct;
- (BOOL)_appAllowsSupressionOfAlerts;
- (BOOL)_canContributeToCloudSharedAlbum;
- (BOOL)_canDisplayOptions;
- (void)_dismissOptionsPopoverAnimated:(BOOL)arg1;
- (void)_handleSwitcherSegmentedControl:(id)arg1;
- (id)_newOptionsViewController;
- (id)_optionsBarButtonItem;
- (void)_optionsBarButtonItemPressed:(id)arg1;
- (id)_optionsPopoverController;
- (id)_optionsViewController;
- (int)_selectedItemIndex;
- (void)_setCanContributeToCloudSharedAlbum:(BOOL)arg1;
- (void)_setOptionsBarButtonItem:(id)arg1;
- (void)_setOptionsPopoverController:(id)arg1;
- (void)_setOptionsViewController:(id)arg1;
- (void)_setSelectedItemIndex:(int)arg1;
- (void)_setSwitcherBarButtonItem:(id)arg1;
- (void)_setSwitcherSegmentedControl:(id)arg1;
- (BOOL)_shouldShowOptionsSwitcherInToolbar;
- (id)_suppressionContexts;
- (id)_switcherBarButtonItem;
- (id)_switcherSegmentedControl;
- (void)_updateOptionsView;
- (void)_updateOptionsViewInsets;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (BOOL)canAddToOtherAlbumContent;
- (BOOL)canDeleteContent;
- (void)configureGlobalFooterView:(id)arg1;
- (void)controller:(id)arg1 didCancelTrimmingAssets:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingAssets:(id)arg2;
- (void)didSelectAddPlaceholderInSection:(int)arg1;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (BOOL)isDisplayingOptions;
- (id)newToolbarItems;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setDisplayingOptions:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (void)updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsAddContentInToolbar;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(int)arg1;
- (BOOL)wantsGlobalFooter;

@end
