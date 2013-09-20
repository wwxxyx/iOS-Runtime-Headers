/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableIndexSet, SKUIFocusedTouchGestureRecognizer, SKUIMenuPageComponent, SKUIMenuViewController, SKUIPickerWrapperView, SKUIPillsControl, SKUIPopupMenuHeaderView, UIPopoverController, UIView;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UIPopoverControllerDelegate> {
    SKUIMenuViewController *_moreListMenuViewController;
    UIPopoverController *_moreListPopoverController;
    UIView *_pickerBackgroundView;
    SKUIFocusedTouchGestureRecognizer *_pickerDismissGestureRecognizer;
    SKUIPickerWrapperView *_pickerWrapper;
    SKUIPillsControl *_pillsControl;
    BOOL _pinned;
    SKUIPopupMenuHeaderView *_popupHeaderView;
    int _selectedIndex;
    NSMutableIndexSet *_sortRequestIndexSet;
}

@property(readonly) SKUIMenuPageComponent * pageComponent;

- (void).cxx_destruct;
- (id)_contentChildView;
- (void)_dismissPickerViewAction:(id)arg1;
- (void)_loadSortDataIfNecessaryForMenuIndex:(int)arg1 reason:(int)arg2;
- (void)_pillAction:(id)arg1;
- (id)_pillsControl;
- (id)_popupHeaderView;
- (void)_setSelectedIndex:(int)arg1;
- (void)_showMoreList;
- (void)_showPickerView;
- (void)_showPopoverController;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (int)numberOfCells;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (id)popPinnedHeaderView;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(int)arg2;
- (void)restorePinnedHeaderView:(id)arg1;
- (void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2;
- (void)willAppearInContext:(id)arg1;

@end
