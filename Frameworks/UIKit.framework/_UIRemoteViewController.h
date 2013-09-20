/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSError, NSObject<OS_dispatch_semaphore>, NSString, UIActionSheet, UIDimmingView, UIView, _UIAsyncInvocation, _UIRemoteView, _UISizeTrackingView, _UITextEffectsRemoteView, _UITextServiceSession, _UIViewServiceInterface;

@interface _UIRemoteViewController : UIViewController <XPCProxyTarget, _UIRemoteViewController_ViewControllerOperatorInterface, _UIRemoteViewController_TextEffectsOperatorInterface, UIActionSheetDelegate> {
    BOOL __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    NSObject<OS_dispatch_semaphore> *_fenceBarrier;
    BOOL _fencingCurrentTransaction;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    UIActionSheet *_hostedActionSheet;
    UIDimmingView *_hostedDimmingView;
    int _preferredStatusBarStyle;
    BOOL _prefersStatusBarHidden;
    unsigned int _serviceAccessibilityServerPort;
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    unsigned int _serviceRegisteredScrollToTopViewCount;
    unsigned int _serviceScreenDisplayID;
    id _serviceViewControllerControlMessageProxy;
    id _serviceViewControllerProxy;
    _UIRemoteView *_serviceViewControllerRemoteView;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    _UISizeTrackingView *_sizeTrackingView;
    BOOL _snapshotTextEffectsAfterRotation;
    NSError *_terminationError;
    int _terminationErrorLock;
    _UIAsyncInvocation *_terminationInvocation;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UITextServiceSession *_textServiceSession;
    UIView *_touchGrabbingView;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _viewControllerOperatorProxy;
}

@property(readonly) struct { unsigned int x1[8]; } serviceAuditToken;
@property(readonly) NSString * serviceBundleIdentifier;
@property(readonly) int serviceProcessIdentifier;

+ (BOOL)_shouldUseXPCObjects;
+ (id)exportedInterface;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id)arg3;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (int)__automatic_invalidation_logic;
- (void)__dismissActionSheetWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (void)__presentActionSheetFromYCoordinate:(float)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(int)arg4 destructiveButtonIndex:(int)arg5 style:(int)arg6;
- (void)__sendNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (void)__showServiceForText:(id)arg1 type:(int)arg2 fromRectValue:(id)arg3 replyHandler:(id)arg4;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)arg1 hidden:(BOOL)arg2;
- (void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize { float x1; float x2; })arg1 animated:(BOOL)arg2 fenceSendRight:(id)arg3 withReplyHandler:(id)arg4;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (id)_appearanceSource;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (BOOL)_customizesForPresentationInPopover;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(int)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)_firstResponderDidChange:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (BOOL)_ignoreAppSupportedOrientations;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;
- (void)_restoreTextEffectsRemoteView;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (BOOL)_serviceHasScrollToTopView;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_terminateUnconditionallyThen:(id)arg1;
- (id)_terminateWithError:(id)arg1;
- (BOOL)_tryRetain;
- (void)_updateTintColor;
- (void)_updateTouchGrabbingView;
- (void)_willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)disconnect;
- (void)loadView;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (oneway void)release;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (id)retain;
- (unsigned int)retainCount;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (struct { unsigned int x1[8]; })serviceAuditToken;
- (id)serviceBundleIdentifier;
- (int)serviceProcessIdentifier;
- (id)serviceViewControllerProxy;
- (id)serviceViewControllerProxyWithErrorHandler:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewServiceSupportedInterfaceOrientationsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
