/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class UILabel;

@interface MusicTableSectionHeaderView : UITableViewHeaderFooterView {
    float _backgroundTransitionWeighting;
    UILabel *_titleLabel;
}

@property float backgroundTransitionWeighting;
@property(readonly) UILabel * titleLabel;

+ (float)defaultHeight;

- (void).cxx_destruct;
- (float)backgroundTransitionWeighting;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundTransitionProgress:(float)arg1;
- (void)setBackgroundTransitionWeighting:(float)arg1;
- (void)setTableViewStyle:(int)arg1;
- (id)titleLabel;

@end
