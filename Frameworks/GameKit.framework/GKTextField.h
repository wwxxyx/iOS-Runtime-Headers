/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKTextStyle;

@interface GKTextField : UITextField {
    GKTextStyle *_appliedStyle;
    GKTextStyle *_baseStyle;
}

@property(retain) GKTextStyle * appliedStyle;
@property(retain) GKTextStyle * baseStyle;

+ (void)initialize;

- (id)appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (id)baseStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)replayAndApplyStyle;
- (void)setAppliedStyle:(id)arg1;
- (void)setBaseStyle:(id)arg1;

@end
