/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSString, UIImageView, UILabel;

@interface RCTrimHUD : UIView {
    UIImageView *_hudBottomImageView;
    UIImageView *_hudImageView;
    UIImageView *_hudLeftFillImageView;
    UIImageView *_hudLeftImageView;
    UIImageView *_hudRightFillImageView;
    UIImageView *_hudRightImageView;
    int _style;
    UILabel *_trimHUDLabel;
}

@property(readonly) int style;
@property(copy) NSString * text;

- (void).cxx_destruct;
- (id)_bounceAnimationWithDuration:(double)arg1;
- (float)_bounceValueForFraction:(float)arg1;
- (void)hideAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (void)showAnimated:(BOOL)arg1;
- (int)style;
- (id)text;

@end
