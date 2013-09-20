/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <AFUISiriViewDelegate>, SiriUIAudioRoutePickerButton, SiriUIHelpButton, UIButton, UIView, UIView<SBUIPasscodeLockView>, UIView<SiriUISiriStatusViewProtocol>, _UIBackdropView;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, SBUIPasscodeLockViewDelegate> {
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    _UIBackdropView *_backdropView;
    BOOL _carDisplaySnippetVisible;
    UIView *_contentView;
    <AFUISiriViewDelegate> *_delegate;
    UIView *_dimmingAndLockContainer;
    UIView *_dimmingView;
    BOOL _disabled;
    UIView *_foregroundView;
    int _frozenBackdropSnapshotOrientation;
    UIView *_frozenBackdropSnapshotView;
    SiriUIHelpButton *_helpButton;
    UIView<SBUIPasscodeLockView> *_lockView;
    int _mode;
    UIButton *_reportBugButton;
    int _siriSessionState;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
    UIView *_statusViewContainer;
    BOOL _statusViewHidden;
    unsigned int _unlockAttemptCount;
    id _unlockCompletion;
}

@property BOOL carDisplaySnippetVisible;
@property(retain) UIView * contentView;
@property <AFUISiriViewDelegate> * delegate;
@property BOOL disabled;
@property(readonly) UIView * foregroundView;
@property int frozenBackdropSnapshotOrientation;
@property(retain) UIView * frozenBackdropSnapshotView;
@property int mode;
@property int siriSessionState;
@property BOOL statusViewHidden;

+ (void)_animateView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fromYPosition:(float)arg3 toYPostion:(float)arg4 fade:(int)arg5 completion:(id)arg6;

- (void).cxx_destruct;
- (void)_animateLockViewIsAnimatingIn:(BOOL)arg1 completion:(id)arg2;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)_configureHelpButton;
- (void)_configureReportBugButton;
- (void)_helpButtonTapped:(id)arg1;
- (void)_hideLockViewWithResult:(int)arg1;
- (void)_layoutReportBugButton;
- (id)_lockViewBackgroundColor;
- (id)_lockViewLegibilityProvider;
- (void)_preferencesDidChange:(id)arg1;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (BOOL)_showsReportBugButton;
- (void)_updateControlsAppearance;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)cancelShowingPasscodeUnlock;
- (BOOL)carDisplaySnippetVisible;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (id)dimBackdropSettings;
- (BOOL)disabled;
- (id)foregroundView;
- (int)frozenBackdropSnapshotOrientation;
- (id)frozenBackdropSnapshotView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)mode;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)pulseHelpButton;
- (void)setAudioRoutePickerBluetoothOn:(BOOL)arg1;
- (void)setBackdropShouldRasterize:(BOOL)arg1;
- (void)setBackdropVisible:(BOOL)arg1;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)setCarDisplaySnippetVisible:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setFrozenBackdropSnapshotOrientation:(int)arg1;
- (void)setFrozenBackdropSnapshotView:(id)arg1;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setShowAudioRoutePicker:(BOOL)arg1;
- (void)setSiriSessionState:(int)arg1;
- (void)setStatusViewHidden:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)showPasscodeUnlockWithCompletion:(id)arg1;
- (int)siriSessionState;
- (void)siriStatusViewWasTapped:(id)arg1;
- (BOOL)statusViewHidden;

@end
