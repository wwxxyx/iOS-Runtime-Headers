/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPBackgroundRoundedRectView, TPPathView, UIColor;

@interface TPRevealingRingView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    float _alphaInsideRing;
    float _alphaOutsideRing;
    int _animationStyle;
    UIColor *_colorInsideRing;
    UIColor *_colorOutsideRing;
    float _cornerRadius;
    float _defaultRingStrokeWidth;
    float _gammaBoost;
    BOOL _gammaBoostInside;
    BOOL _gammaBoostOuterRing;
    BOOL _innerGammaAlpha;
    TPPathView *_innerGammaView;
    TPPathView *_innerView;
    BOOL _isCircularRing;
    float _minimumRevealingScale;
    TPPathView *_outerGammaView;
    TPBackgroundRoundedRectView *_outerView;
    } _paddingOutsideRing;
    float _revealAnimationDuration;
    BOOL _revealed;
    float _unrevealAnimationDuration;
}

@property float alphaInsideRing;
@property float alphaOutsideRing;
@property int animationStyle;
@property(retain) UIColor * colorInsideRing;
@property(retain) UIColor * colorOutsideRing;
@property float cornerRadius;
@property float defaultRingStrokeWidth;
@property float gammaBoost;
@property BOOL gammaBoostInside;
@property BOOL gammaBoostOuterRing;
@property float minimumRevealingScale;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } paddingOutsideRing;
@property float revealAnimationDuration;
@property(readonly) struct CGSize { float x1; float x2; } ringSize;
@property float unrevealAnimationDuration;

- (void)_adjustGammaBoostIfNecessary;
- (void)_animateForReveal:(BOOL)arg1 withDuration:(float)arg2 delay:(double)arg3;
- (id)_bezierPathForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cornerRadius:(float)arg2;
- (void)_calculateOuter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 inner:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 newXOffset:(float*)arg3 newYOffset:(float*)arg4 withScale:(float)arg5;
- (void)_evaluateCircularness;
- (BOOL)_isSquare:(struct CGSize { float x1; float x2; })arg1;
- (void)_setInnerCircleScale:(float)arg1;
- (void)_setInnerGammaScale:(float)arg1;
- (void)_setOuterGammaScale:(float)arg1;
- (BOOL)_shouldDrawAsCircle:(struct CGSize { float x1; float x2; })arg1 cornerRadius:(float)arg2;
- (float)alphaInsideRing;
- (float)alphaOutsideRing;
- (int)animationStyle;
- (id)colorInsideRing;
- (id)colorOutsideRing;
- (float)cornerRadius;
- (void)dealloc;
- (float)defaultRingStrokeWidth;
- (float)gammaBoost;
- (BOOL)gammaBoostInside;
- (BOOL)gammaBoostOuterRing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 paddingOutsideRing:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (float)minimumRevealingScale;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paddingOutsideRing;
- (float)revealAnimationDuration;
- (struct CGSize { float x1; float x2; })ringSize;
- (void)setAlphaInsideRing:(float)arg1;
- (void)setAlphaOutsideRing:(float)arg1;
- (void)setAnimationStyle:(int)arg1;
- (void)setColorInsideRing:(id)arg1;
- (void)setColorOutsideRing:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setDefaultRingStrokeWidth:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGammaBoost:(float)arg1;
- (void)setGammaBoostInside:(BOOL)arg1;
- (void)setGammaBoostOuterRing:(BOOL)arg1;
- (void)setMinimumRevealingScale:(float)arg1;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setRevealAnimationDuration:(float)arg1;
- (void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3;
- (void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRingGammaBoost:(float)arg1;
- (void)setUnrevealAnimationDuration:(float)arg1;
- (void)setUsesColorDodgeBlending:(BOOL)arg1;
- (float)unrevealAnimationDuration;

@end
