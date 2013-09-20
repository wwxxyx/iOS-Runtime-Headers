/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class UIColor, UIView;

@interface SiriUIKeyline : UIView {
    UIColor *_customBackgroundColor;
    float _customLeftPadding;
    float _customRightPadding;
    UIView *_keyLineView;
    int _keylineType;
    BOOL _veritical;
}

@property(retain) UIColor * customBackgroundColor;
@property float customLeftPadding;
@property float customRightPadding;
@property int keylineType;
@property(getter=_isVeritical,setter=_setVertical:) BOOL veritical;

+ (id)keyline;
+ (id)keylineForSelectableRow;
+ (id)keylineWithDefaultInsets;
+ (id)keylineWithKeylineType:(int)arg1;
+ (id)starkKeyline;
+ (id)verticalKeyline;

- (void).cxx_destruct;
- (BOOL)_isVeritical;
- (id)_keylineColorForType:(int)arg1;
- (float)_keylineWidthForType:(int)arg1;
- (void)_setVertical:(BOOL)arg1;
- (id)customBackgroundColor;
- (float)customLeftPadding;
- (float)customRightPadding;
- (id)initWithKeylineType:(int)arg1;
- (int)keylineType;
- (void)layoutSubviews;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setCustomLeftPadding:(float)arg1;
- (void)setCustomRightPadding:(float)arg1;
- (void)setKeylineType:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
