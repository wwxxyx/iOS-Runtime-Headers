/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class UIButton;

@interface MSPlayModeControlView : UIView {
    BOOL _creatingGenius;
    UIButton *_repeatButton;
    UIButton *_shuffleButton;
}

@property BOOL creatingGenius;
@property(readonly) UIButton * repeatButton;
@property(readonly) UIButton * shuffleButton;

- (void).cxx_destruct;
- (BOOL)creatingGenius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)repeatButton;
- (void)setCreatingGenius:(BOOL)arg1;
- (id)shuffleButton;

@end
