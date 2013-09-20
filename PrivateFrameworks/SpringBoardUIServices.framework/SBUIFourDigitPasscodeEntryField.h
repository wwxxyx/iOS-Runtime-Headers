/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSMutableArray, UIView;

@interface SBUIFourDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    float _backgroundAlpha;
    NSMutableArray *_characterIndicators;
    UIView *_characterIndicatorsContainerView;
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_springView;
    UIView *_springViewParent;
}

- (void)_appendString:(id)arg1;
- (void)_autofillForMesaWithCompletion:(id)arg1;
- (void)_deleteLastCharacter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_entryFieldBoundsWithXOffset:(float)arg1;
- (float)_entryFieldIndicatorDiameter;
- (float)_entryFieldIndicatorWidthPadding;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_entryFieldPaddingOutsideRing;
- (BOOL)_hasAnyCharacters;
- (void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2;
- (void)_setLuminosityBoost:(float)arg1;
- (struct CGSize { float x1; float x2; })_viewSize;
- (void)dealloc;
- (id)initWithDefaultSize;
- (void)layoutSubviews;
- (void)reset;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;

@end
