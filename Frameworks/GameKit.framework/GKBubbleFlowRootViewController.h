/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKBubbleFlowAnimator;

@interface GKBubbleFlowRootViewController : GKViewController {
    GKBubbleFlowAnimator *_animator;
    BOOL _coveringContentUnderneath;
    BOOL _showingInterstitial;
}

@property(retain) GKBubbleFlowAnimator * animator;
@property(getter=isCoveringContentUnderneath,readonly) BOOL coveringContentUnderneath;
@property(getter=isShowingInterstitial) BOOL showingInterstitial;

+ (BOOL)_useTwoPartBubbleFlowModalPresentation;
+ (id)sharedBubbleFlowRootViewController;

- (void)_updateViewAlpha:(float)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)animator;
- (void)clearInterstitialViewAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isCoveringContentUnderneath;
- (BOOL)isShowingInterstitial;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)setAnimator:(id)arg1;
- (void)setShowingInterstitial:(BOOL)arg1;
- (void)showInterstitialViewAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)viewDidLoad;

@end
