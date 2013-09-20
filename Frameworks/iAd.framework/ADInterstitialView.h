/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADInterstitialAd, ADRemoteView, ADTapGestureRecognizer, UIView;

@interface ADInterstitialView : UIView {
    BOOL _dimmed;
    UIView *_dimmerView;
    ADTapGestureRecognizer *_gestureRecognizer;
    ADInterstitialAd *_interstitialAd;
    ADRemoteView *_remoteView;
    ADTapGestureRecognizer *_tapGestureRecognizer;
}

@property BOOL dimmed;
@property(retain) UIView * dimmerView;
@property(retain) ADTapGestureRecognizer * gestureRecognizer;
@property(retain) ADRemoteView * remoteView;
@property(readonly) ADTapGestureRecognizer * tapGestureRecognizer;

- (void)_gestureHandler:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (BOOL)dimmed;
- (id)dimmerView;
- (id)gestureRecognizer;
- (id)initForInterstitialAd:(id)arg1;
- (id)interstitialAd;
- (id)remoteView;
- (void)removeFromSuperview;
- (void)setAlpha:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setDimmerView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setRemoteView:(id)arg1;
- (void)setRemoteWindowContextId:(unsigned int)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)tapGestureRecognizer;

@end
