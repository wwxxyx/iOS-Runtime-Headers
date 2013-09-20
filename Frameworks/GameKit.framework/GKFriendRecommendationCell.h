/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UILabel;

@interface GKFriendRecommendationCell : GKBasePlayerCell {
    UILabel *_reasonLabel;
}

@property(retain) UILabel * reasonLabel;

- (void)dealloc;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (id)reasonLabel;
- (void)setReasonLabel:(id)arg1;
- (void)setRepresentedItem:(id)arg1;
- (void)updateLineLayoutConstraints;

@end
