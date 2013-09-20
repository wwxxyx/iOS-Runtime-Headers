/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class _GKBubbleFlowPseudoModalViewController;

@interface _GKBubbleFlowOnDemandFormSheetViewController : GKBubbleFlowRootViewController {
    BOOL _falseDismissSkippedOrCompleted;
    _GKBubbleFlowPseudoModalViewController *_pseudoModalViewController;
}

@property BOOL falseDismissSkippedOrCompleted;
@property(retain) _GKBubbleFlowPseudoModalViewController * pseudoModalViewController;

- (void)_cleanUpOurPresentedModalSetupRootViewControllerIfNecessaryAnimated:(BOOL)arg1;
- (void)_ensureWeHaveAPresentedModalSetupRootViewControllerToPresent:(id)arg1 andThen:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_obscuringContentUnderneath;
- (void)clearInterstitialViewAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (BOOL)falseDismissSkippedOrCompleted;
- (BOOL)isCoveringContentUnderneath;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)pseudoModalViewController;
- (void)setFalseDismissSkippedOrCompleted:(BOOL)arg1;
- (void)setPseudoModalViewController:(id)arg1;
- (void)viewDidLoad;

@end
