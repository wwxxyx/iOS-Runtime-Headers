/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSString, UILabel, UIView;

@interface MusicCollectionTrackTableViewCell : MusicSongTableViewCell {
    UILabel *_durationLabel;
    float _maximumDurationWidth;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIView *_topSeparatorView;
    UILabel *_trackNumberLabel;
}

@property(copy) NSString * durationText;
@property float maximumDurationWidth;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;
@property(copy) NSString * trackNumberText;

- (void).cxx_destruct;
- (id)durationText;
- (void)layoutSubviews;
- (float)maximumDurationWidth;
- (void)setDisplayAsDisabled:(BOOL)arg1;
- (void)setDurationText:(id)arg1;
- (void)setMaximumDurationWidth:(float)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackNumberText:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)trackNumberText;

@end
