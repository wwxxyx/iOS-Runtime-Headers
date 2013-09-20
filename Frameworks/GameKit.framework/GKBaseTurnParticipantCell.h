/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKTurnBasedMatch, GKTurnBasedParticipant, UIButton, UILabel;

@interface GKBaseTurnParticipantCell : GKBasePlayerCell {
    UILabel *_bottomLabel;
    UIButton *_detailButton;
    SEL _detailPressedAction;
    GKTurnBasedMatch *_match;
    GKTurnBasedParticipant *_participant;
    UILabel *_topLabel;
}

@property(retain) UILabel * bottomLabel;
@property(retain) UIButton * detailButton;
@property SEL detailPressedAction;
@property(retain) GKTurnBasedMatch * match;
@property(retain) GKTurnBasedParticipant * participant;
@property(retain) UILabel * topLabel;

+ (float)defaultRowHeight;

- (id)bottomLabel;
- (void)dealloc;
- (id)detailButton;
- (void)detailPressed:(id)arg1;
- (SEL)detailPressedAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)match;
- (id)participant;
- (void)setBottomLabel:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setDetailPressedAction:(SEL)arg1;
- (void)setMatch:(id)arg1;
- (void)setParticipant:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (id)topLabel;

@end
