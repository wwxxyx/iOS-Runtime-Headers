/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIColorScheme, UIImage, UIImageView, UILabel;

@interface SKUIProductPageFeatureView : UIView {
    SKUIColorScheme *_colorScheme;
    UIImageView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(retain) SKUIColorScheme * colorScheme;
@property(copy) UIImage * icon;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (id)colorScheme;
- (id)icon;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)subtitle;
- (id)title;

@end
