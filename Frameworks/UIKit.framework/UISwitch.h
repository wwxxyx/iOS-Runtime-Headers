/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView<_UISwitchInternalViewProtocol>;

@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding> {
    UIView<_UISwitchInternalViewProtocol> *_control;
    float _enabledAlpha;
    BOOL _on;
    BOOL _onStateChangedByLongPressGestureRecognizer;
    BOOL _onStateChangedByPanGestureRecognizer;
    UIPanGestureRecognizer *_panGesture;
    UILongPressGestureRecognizer *_pressGesture;
}

@property(getter=_alwaysShowOnOffLabel,setter=_setAlwaysShowsOnOffLabel:) BOOL alwaysShowOnOffLabel;
@property float enabledAlpha;
@property(retain) UIImage * offImage;
@property(getter=isOn) BOOL on;
@property(getter=_onColor,setter=_setOnColor:,retain) UIColor * onColor;
@property(retain) UIImage * onImage;
@property(retain) UIColor * onTintColor;
@property(retain) UIColor * thumbTintColor;
@property(retain) UIColor * tintColor;

- (BOOL)_alwaysShowOnOffLabel;
- (void)_animateToOn:(BOOL)arg1 withDuration:(float)arg2 sendAction:(BOOL)arg3;
- (void)_commonInitNewLook;
- (void)_commonInitNewLookNeue1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_encodeFrameWithCoder:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleLongPressNL:(id)arg1;
- (void)_handlePanNL:(id)arg1;
- (void)_handleTapNL:(id)arg1;
- (BOOL)_handleTranslationInPanGestureRecognizer:(id)arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (float)_knobBounceDamping;
- (float)_knobBounceDuration;
- (float)_knobBounceMass;
- (float)_knobBounceStiffness;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_onColor;
- (id)_onTintColor;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_scriptingInfo;
- (void)_setAlwaysShowsOnOffLabel:(BOOL)arg1;
- (void)_setKnobBounceDamping:(float)arg1;
- (void)_setKnobBounceDuration:(float)arg1;
- (void)_setKnobBounceMass:(float)arg1;
- (void)_setKnobBounceStiffness:(float)arg1;
- (void)_setOnColor:(id)arg1;
- (void)_setOnTintColor:(id)arg1;
- (void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (BOOL)_useOldSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (float)enabledAlpha;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isOn;
- (id)offImage;
- (id)onImage;
- (id)onTintColor;
- (void)setAlpha:(float)arg1;
- (void)setAlternateColors:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabledAlpha:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOn:(BOOL)arg1;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)thumbTintColor;
- (id)tintColor;

@end
