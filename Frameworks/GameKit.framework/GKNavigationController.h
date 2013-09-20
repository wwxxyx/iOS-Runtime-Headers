/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSMutableArray;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration> {
    NSMutableArray *_deferredTransitions;
}

@property(retain) NSMutableArray * deferredTransitions;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_performDeferredTransition;
- (void)dealloc;
- (id)deferredTransitions;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setDeferredTransitions:(id)arg1;
- (void)setupGKNavigationController;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;

@end
