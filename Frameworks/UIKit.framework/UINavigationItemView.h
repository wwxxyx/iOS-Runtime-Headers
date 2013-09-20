/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, UINavigationItem, UIView;

@interface UINavigationItemView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    UIView *_bottomCrossView;
    BOOL _customFontSet;
    BOOL _isCrossFading;
    BOOL _isFadingInFromCustomAlpha;
    UINavigationItem *_item;
    UILabel *_label;
    } _titleSize;
    UIView *_topCrossView;
}

@property(setter=_setFadingInFromCustomAlpha:) BOOL _isFadingInFromCustomAlpha;

- (void)_adjustLabelTrackingIfNecessary;
- (void)_cleanUpCrossView;
- (void)_crossFadeHiddingButton:(BOOL)arg1;
- (id)_currentTextColorForBarStyle:(int)arg1;
- (id)_currentTextShadowColorForBarStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })_currentTextShadowOffsetForBarStyle:(int)arg1;
- (id)_defaultFont;
- (BOOL)_isFadingInFromCustomAlpha;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_resetTitleSize;
- (id)_scriptingInfo;
- (void)_setFadingInFromCustomAlpha:(BOOL)arg1;
- (void)_setFont:(id)arg1;
- (void)_setLineBreakMode:(int)arg1;
- (struct CGSize { float x1; float x2; })_titleSize;
- (float)_titleYAdjustmentCustomization;
- (void)_updateLabel;
- (void)_updateLabelColor;
- (void)_updateLabelContents;
- (BOOL)_useSilverLookForBarStyle:(int)arg1;
- (void)dealloc;
- (id)font;
- (id)initWithNavigationItem:(id)arg1;
- (void)layoutSubviews;
- (id)navigationItem;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (id)title;
- (BOOL)titleAutoresizesToFit;

@end
