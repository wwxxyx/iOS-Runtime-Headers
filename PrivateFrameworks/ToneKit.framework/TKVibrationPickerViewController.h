/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class <TKVibrationPickerStyleProvider>, <TKVibrationPickerViewControllerDelegate>, NSArray, NSIndexPath, NSString, NSTimer, TKLabelContainerView, TKVibratorController, TLVibrationManager;

@interface TKVibrationPickerViewController : UITableViewController <TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate> {
    int _alertType;
    BOOL _allowsDeletingCurrentSystemVibration;
    BOOL _canEnterEditingMode;
    TKLabelContainerView *_defaultSectionHeaderView;
    <TKVibrationPickerViewControllerDelegate> *_delegate;
    BOOL _isCallingParentViewController;
    NSString *_noneString;
    NSIndexPath *_selectedVibrationIndexPath;
    BOOL _showsDefault;
    BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;
    BOOL _showsNone;
    BOOL _showsNothingSelected;
    BOOL _showsUserGenerated;
    BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    NSArray *_sortedVibrationIdentifiers;
    <TKVibrationPickerStyleProvider> *_styleProvider;
    BOOL _swipeToDeleteMode;
    TKLabelContainerView *_systemSectionHeaderView;
    TKLabelContainerView *_userGeneratedSectionHeaderView;
    BOOL _vibrating;
    TLVibrationManager *_vibrationManager;
    NSTimer *_vibrationShouldStopTimer;
    TKVibratorController *_vibratorController;
    BOOL _viewHasAppearedAtLeastOnce;
}

@property(setter=_setDefaultSectionHeaderView:,retain) TKLabelContainerView * _defaultSectionHeaderView;
@property(readonly) int _sectionForDefaultGroup;
@property(readonly) int _sectionForNoneGroup;
@property(readonly) int _sectionForSystemGroup;
@property(readonly) int _sectionForUserGeneratedGroup;
@property(setter=_setSelectedVibrationIndexPath:,retain) NSIndexPath * _selectedVibrationIndexPath;
@property(readonly) BOOL _showsOnlyEditableSections;
@property(readonly) NSArray * _sortedUserGeneratedVibrationIdentifiers;
@property(readonly) NSArray * _sortedVibrationIdentifiers;
@property(setter=_setStyleProvider:,retain) <TKVibrationPickerStyleProvider> * _styleProvider;
@property(setter=_setSystemSectionHeaderView:,retain) TKLabelContainerView * _systemSectionHeaderView;
@property(setter=_setUserGeneratedSectionHeaderView:,retain) TKLabelContainerView * _userGeneratedSectionHeaderView;
@property BOOL allowsDeletingCurrentSystemVibration;
@property BOOL canEnterEditingMode;
@property(readonly) float contentHeight;
@property <TKVibrationPickerViewControllerDelegate> * delegate;
@property(retain) NSString * noneString;
@property(retain) NSString * selectedVibrationIdentifier;
@property BOOL showsEditButtonAtRightSideOfCurrentNavigationController;
@property BOOL showsNothingSelected;
@property(retain) <TKVibrationPickerStyleProvider> * styleProvider;

- (id)_actualIndexPathFromNonEditingIndexPath:(id)arg1;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (id)_defaultSectionHeaderView;
- (void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(int)arg3;
- (void)_handleError:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (id)_navigationItem;
- (id)_nonEditingIndexPathFromActualIndexPath:(id)arg1;
- (void)_presentVibrationRecorderViewController;
- (void)_processSelectionOfVibrationWithIdentifier:(id)arg1;
- (int)_sectionForDefaultGroup;
- (int)_sectionForNoneGroup;
- (int)_sectionForSystemGroup;
- (int)_sectionForUserGeneratedGroup;
- (id)_selectedVibrationIndexPath;
- (void)_setDefaultSectionHeaderView:(id)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 processSelectionOfVibrationIdentifier:(BOOL)arg2;
- (void)_setSelectedVibrationIndexPath:(id)arg1;
- (void)_setStyleProvider:(id)arg1;
- (void)_setSystemSectionHeaderView:(id)arg1;
- (void)_setUserGeneratedSectionHeaderView:(id)arg1;
- (BOOL)_showsOnlyEditableSections;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(BOOL)arg2;
- (id)_sortedUserGeneratedVibrationIdentifiers;
- (id)_sortedVibrationIdentifiers;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (id)_styleProvider;
- (id)_systemSectionHeaderView;
- (void)_updateEditButtonItem;
- (void)_updateEditButtonItemWithAnimation:(BOOL)arg1;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (id)_userGeneratedSectionHeaderView;
- (BOOL)allowsDeletingCurrentSystemVibration;
- (BOOL)canEnterEditingMode;
- (float)contentHeight;
- (void)dealloc;
- (id)delegate;
- (void)finishedWithPicker;
- (id)initWithAlertType:(int)arg1 showsDefault:(BOOL)arg2 showsUserGenerated:(BOOL)arg3 showsNone:(BOOL)arg4;
- (id)initWithStyle:(int)arg1;
- (id)initWithVibrationType:(int)arg1 avController:(id)arg2 showsDefault:(BOOL)arg3 showsUserGenerated:(BOOL)arg4 showsNone:(BOOL)arg5;
- (id)noneString;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)selectedVibrationIdentifier;
- (void)setAllowsDeletingCurrentSystemVibration:(BOOL)arg1;
- (void)setCanEnterEditingMode:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNoneString:(id)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (void)setShowsEditButtonAtRightSideOfCurrentNavigationController:(BOOL)arg1;
- (void)setShowsNothingSelected:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)showsEditButtonAtRightSideOfCurrentNavigationController;
- (BOOL)showsNothingSelected;
- (void)stopVibrating;
- (id)styleProvider;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
