/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class <SBUIPasscodeLockNumberPadDelegate>, NSArray, SBNumberPadWithDelegate, SBUIButton, UIColor, UIControl<SBUIPasscodeNumberPadButton>, UIView;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate> {
    SBUIButton *_backspaceButton;
    UIView *_bottomPaddingView;
    SBUIButton *_cancelButton;
    UIColor *_customBackgroundColor;
    <SBUIPasscodeLockNumberPadDelegate> *_delegate;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    SBUIButton *_emergencyCallButton;
    UIView *_leftPaddingView;
    SBNumberPadWithDelegate *_numberPad;
    UIView *_rightPaddingView;
    BOOL _showsBackspaceButton;
    BOOL _showsCancelButton;
    BOOL _showsEmergencyCallButton;
}

@property(readonly) NSArray * buttons;
@property <SBUIPasscodeLockNumberPadDelegate> * delegate;
@property(retain) UIControl<SBUIPasscodeNumberPadButton> * downButton;
@property BOOL showsBackspaceButton;
@property BOOL showsCancelButton;
@property BOOL showsEmergencyCallButton;

+ (id)_buttonForCharacter:(unsigned int)arg1;
+ (struct CGSize { float x1; float x2; })_inputButtonCircleSize;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_inputButtonCircleSpacing;

- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (void)_configureAdditionalButtons;
- (float)_distanceToTopOfFirstButton;
- (void)_emergencyCallButtonHit;
- (id)_fontForAncillaryButton;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_setLuminosityBoost:(float)arg1;
- (id)buttons;
- (void)dealloc;
- (id)delegate;
- (id)downButton;
- (id)initWithDefaultSize;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownButton:(id)arg1;
- (void)setShowsBackspaceButton:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (BOOL)showsBackspaceButton;
- (BOOL)showsCancelButton;
- (BOOL)showsEmergencyCallButton;

@end
