/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIAlertViewDelegate>, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIToolbar, UIView, UIViewController, UIWindow, _UIModalItem;

@interface UIAlertView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        unsigned int numberOfRows : 7; 
        unsigned int delegateAlertSheetButtonClicked : 1; 
        unsigned int delegateDidPresentAlertSheet : 1; 
        unsigned int delegateDidDismissAlertSheet : 1; 
        unsigned int hideButtonBar : 1; 
        unsigned int alertStyle : 3; 
        unsigned int dontDimBackground : 1; 
        unsigned int dismissSuspended : 1; 
        unsigned int dontBlockInteraction : 1; 
        unsigned int sheetWasPoppedUp : 1; 
        unsigned int animating : 1; 
        unsigned int hideWhenDoneAnimating : 1; 
        unsigned int layoutWhenDoneAnimating : 1; 
        unsigned int titleMaxLineCount : 2; 
        unsigned int bodyTextMaxLineCount : 3; 
        unsigned int runsModal : 1; 
        unsigned int runningModal : 1; 
        unsigned int addedTextView : 1; 
        unsigned int addedTableShadows : 1; 
        unsigned int showOverSBAlerts : 1; 
        unsigned int showMinTableContent : 1; 
        unsigned int bodyTextTruncated : 1; 
        unsigned int orientation : 3; 
        unsigned int groupsTextFields : 1; 
        unsigned int includesCancel : 1; 
        unsigned int useUndoStyle : 1; 
        unsigned int delegateBodyTextAlignment : 1; 
        unsigned int delegateClickedButtonAtIndex : 1; 
        unsigned int delegateClickedButtonAtIndex2 : 1; 
        unsigned int delegateCancel : 1; 
        unsigned int delegateCancel2 : 1; 
        unsigned int delegateWillPresent : 1; 
        unsigned int delegateWillPresent2 : 1; 
        unsigned int delegateDidPresent : 1; 
        unsigned int delegateDidPresent2 : 1; 
        unsigned int delegateWillDismiss : 1; 
        unsigned int delegateWillDismiss2 : 1; 
        unsigned int delegateDidDismiss : 1; 
        unsigned int delegateDidDismiss2 : 1; 
        unsigned int delegateShouldEnableFirstOtherButton : 1; 
        unsigned int forceHorizontalButtonsLayout : 1; 
        unsigned int suppressKeyboardOnPopup : 1; 
        unsigned int keyboardShowing : 1; 
        unsigned int dontCallDismissDelegate : 1; 
        unsigned int useAutomaticKB : 1; 
        unsigned int manualKeyboardVisible : 1; 
        unsigned int rotatingManualKeybaord : 1; 
        unsigned int shouldHandleFirstKeyUpEvent : 1; 
        unsigned int forceKeyboardUse : 1; 
        unsigned int cancelWhenDoneAnimating : 1; 
        unsigned int alertViewStyle : 3; 
        unsigned int isSBAlert : 1; 
        unsigned int isBeingDismissed : 1; 
        unsigned int useLookNeue : 1; 
    UIView *_accessoryView;
    UIViewController *_accessoryViewController;
    UIView *_backdropView;
    UIView *_backgroundImageView;
    UIWindow *_blurWindow;
    float _bodyTextHeight;
    UILabel *_bodyTextLabel;
    NSMutableArray *_buttonTitlesNeue;
    NSMutableArray *_buttons;
    int _cancelButton;
    } _center;
    UIView *_contentViewNeue;
    id _context;
    int _defaultButton;
    <UIAlertViewDelegate> *_delegate;
    UIView *_dimView;
    UIWindow *_dimWindow;
    int _dismissButtonIndex;
    int _firstOtherButton;
    UIViewController *_hostingViewControllerNeue;
    UIView *_keyboard;
    NSString *_messageTextNeue;
    } _modalViewFlags;
    UIWindow *_originalWindow;
    _UIModalItem *_representedModalItem;
    NSMutableDictionary *_separatorsViews;
    float _startY;
    UILabel *_subtitleLabel;
    int _suspendTag;
    UIView *_table;
    UILabel *_taglineTextLabel;
    UIView *_textFieldBackgroundView;
    NSMutableArray *_textFields;
    BOOL _textFieldsHidden;
    UILabel *_titleLabel;
    NSString *_titleTextNeue;
    UIToolbar *_toolbar;
    UIWindow *_windowFOrSBNeueCompatibility;
}

@property int alertViewStyle;
@property int cancelButtonIndex;
@property(copy) id complete;
@property id delegate;
@property(readonly) int firstOtherButtonIndex;
@property(copy) NSString * message;
@property(readonly) int numberOfButtons;
@property(copy) NSString * title;
@property(getter=isVisible,readonly) BOOL visible;

+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;
+ (id)_alertViewForWindow:(id)arg1;
+ (id)_alertWindow;
+ (id)_popupAlertBackground:(BOOL)arg1;
+ (id)_remoteAlertViewWithBlock:(id)arg1;
+ (void)_setSpringBoardAlertDisplayingOverApplicationAlert:(BOOL)arg1;
+ (BOOL)_springBoardAlertDisplayingOverApplicationAlert;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;
+ (void)applyTransformToAllAlerts:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (struct CGSize { float x1; float x2; })minimumSize;

- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)_addButtonWithTitle:(id)arg1;
- (id)_addButtonWithTitleText:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3;
- (void)_addTextEntryFieldsWithStyle:(int)arg1;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (void)_adjustLabelFontSizes;
- (int)_alertOrientation;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_alertSheetTextFieldDidChange:(id)arg1;
- (void)_alertSheetTextFieldDidStartEditing:(id)arg1;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (void)_appSuspended:(id)arg1;
- (id)_blurMaskImageForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_bottomVerticalInset;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (id)_buttonAtIndex:(int)arg1;
- (void)_buttonClicked:(id)arg1;
- (float)_buttonHeight;
- (BOOL)_canShowAlerts;
- (void)_cancelAnimated:(BOOL)arg1;
- (void)_cleanupAfterPopupAnimation;
- (void)_cleanupKBWatcher;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createTitleLabelIfNeeded;
- (int)_currentOrientation;
- (id)_defaultButton;
- (id)_destructiveButton;
- (id)_dimView;
- (BOOL)_dimsBackground;
- (id)_firstOtherButton;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_handleKeyUIEvent:(id)arg1;
- (BOOL)_isAnimating;
- (BOOL)_isSBAlert;
- (void)_jiggleStage1AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage2AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage3AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage4AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage5AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage6AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardHiddingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_layoutIfNeeded;
- (void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_loginFieldDidChangeForItem:(id)arg1;
- (BOOL)_manualKeyboardIsVisible;
- (float)_maxHeight;
- (id)_modalItemForNeueCompatibility;
- (BOOL)_needsKeyboard;
- (void)_nukeOldTextFields;
- (void)_passwordFieldDidChangeForItem:(id)arg1;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1 coveredBySpringBoardAlert:(BOOL)arg2;
- (void)_performPopup:(BOOL)arg1 animationType:(int)arg2 revealedBySpringBoardAlert:(BOOL)arg3;
- (void)_performPopup:(BOOL)arg1 animationType:(int)arg2;
- (void)_performPopup:(BOOL)arg1;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_prepareForDisplay;
- (void)_prepareToBeReplaced;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_repopup;
- (void)_repopupNoAnimation;
- (id)_representedModalItem;
- (id)_representedModalItemView;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_setAccessoryView:(id)arg1;
- (void)_setAccessoryViewController:(id)arg1;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (void)_setDefaultButton:(id)arg1;
- (void)_setDestructiveButton:(id)arg1;
- (void)_setFirstOtherButtonIndex:(int)arg1;
- (void)_setTextFieldsHidden:(BOOL)arg1;
- (void)_setupKBWatcher;
- (void)_setupTitleStyle;
- (BOOL)_shouldUseUndoStyle;
- (void)_showByReplacingAlert:(id)arg1 animated:(BOOL)arg2;
- (void)_showByReplacingPreviousAlertAnimated:(BOOL)arg1;
- (void)_showKeyboard:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showManualKBIfNecessary;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (id)_textFieldAtIndex:(int)arg1;
- (float)_titleHorizontalInset;
- (float)_titleVerticalBottomInset;
- (float)_titleVerticalTopInset;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withMinimumHeight:(float)arg3;
- (void)_updateButtonTitles;
- (void)_updateFrameForDisplay;
- (void)_updateKeyboardStateForPreviousResponder:(id)arg1;
- (void)_useLegacyUI:(BOOL)arg1;
- (void)_useUndoStyle:(BOOL)arg1;
- (void)_willRotateKeyboard;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (int)addButtonWithTitle:(id)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)alertSheetStyle;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (int)alertViewStyle;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (BOOL)becomeFirstResponder;
- (BOOL)blocksInteraction;
- (int)bodyMaxLineCount;
- (id)bodyText;
- (id)bodyTextLabel;
- (id)buttonAtIndex:(int)arg1;
- (int)buttonCount;
- (id)buttonTitleAtIndex:(int)arg1;
- (id)buttons;
- (BOOL)canBecomeFirstResponder;
- (int)cancelButtonIndex;
- (id)complete;
- (id)context;
- (void)dealloc;
- (id)defaultButton;
- (int)defaultButtonIndex;
- (id)delegate;
- (id)destructiveButton;
- (void)didPresentModalItem:(id)arg1;
- (BOOL)dimsBackground;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (int)firstOtherButtonIndex;
- (BOOL)forceHorizontalButtonsLayout;
- (BOOL)groupsTextFields;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (BOOL)isBodyTextTruncated;
- (BOOL)isVisible;
- (id)keyboard;
- (void)layout;
- (void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (void)layoutAnimated:(BOOL)arg1;
- (id)message;
- (void)modalItem:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)modalItem:(id)arg1 shouldDismissForButtonAtIndex:(int)arg2;
- (void)modalItem:(id)arg1 tappedButtonAtIndex:(int)arg2;
- (void)modalItem:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (int)numberOfButtons;
- (int)numberOfLinesInTitle;
- (int)numberOfRows;
- (void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2 atOffset:(float)arg3;
- (void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)removeFromSuperview;
- (void)replaceAlert:(id)arg1;
- (BOOL)requiresPortraitOrientation;
- (BOOL)resignFirstResponder;
- (BOOL)runsModal;
- (void)setAlertSheetStyle:(int)arg1;
- (void)setAlertViewStyle:(int)arg1;
- (void)setBlocksInteraction:(BOOL)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (void)setCancelButtonIndex:(int)arg1;
- (void)setComplete:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructiveButton:(id)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setForceHorizontalButtonsLayout:(BOOL)arg1;
- (void)setGroupsTextFields:(BOOL)arg1;
- (void)setKeyboardShowsOnPopup:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setNumberOfRows:(int)arg1;
- (void)setRunsModal:(BOOL)arg1;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuspendTag:(int)arg1;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)show;
- (void)showWithAnimationType:(int)arg1;
- (BOOL)showsOverSpringBoardAlerts;
- (id)subtitle;
- (int)suspendTag;
- (BOOL)tableShouldShowMinimumContent;
- (id)tableView;
- (id)taglineTextLabel;
- (id)textField;
- (id)textFieldAtIndex:(int)arg1;
- (int)textFieldCount;
- (id)title;
- (id)titleLabel;
- (int)titleMaxLineCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (void)willPresentModalItem:(id)arg1;

@end
