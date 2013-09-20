/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIPopoverControllerDelegate>, NSArray, UIBarButtonItem, UIColor, UIDimmingView, UIPanGestureRecognizer, UIView, UIViewController, _UIPopoverLayoutInfo, _UIPopoverView;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling : 1; 
        unsigned int isInTextEffectsWindow : 1; 
        unsigned int isEmbeddingInView : 1; 
        unsigned int embeddedPresentationBounces : 1; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _allowResizePastTargetRect;
    UIColor *_backgroundColor;
    UIViewController *_contentViewController;
    unsigned int _currentArrowDirection;
    } _currentPresentationRectInView;
    UIView *_currentPresentationView;
    id _delegate;
    SEL _didEndSelector;
    BOOL _didPresentInActiveSequence;
    UIDimmingView *_dimmingView;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    BOOL _dismissesOnRotation;
    } _embeddedTargetRect;
    BOOL _ignoresKeyboardNotifications;
    UIView *_layoutConstraintView;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned int _originalArrowDirections;
    unsigned int _popoverArrowDirection;
    int _popoverBackgroundStyle;
    Class _popoverBackgroundViewClass;
    } _popoverContentSize;
    } _popoverControllerFlags;
    int _popoverControllerStyle;
    } _popoverLayoutMargins;
    _UIPopoverView *_popoverView;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    int _presentationDirection;
    unsigned int _presentationEdge;
    int _presentationState;
    UIView *_presentingView;
    unsigned int _requestedArrowDirections;
    BOOL _retainsSelfWhilePresented;
    BOOL _showsOrientationMarker;
    BOOL _showsPresentationArea;
    BOOL _showsTargetRect;
    unsigned int _slideTransitionCount;
    UIViewController *_slidingViewController;
    UIViewController *_splitParentController;
    id _target;
    UIBarButtonItem *_targetBarButtonItem;
    } _targetRectInDimmingView;
    } _targetRectInEmbeddingView;
    unsigned int _toViewAutoResizingMask;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    unsigned int draggingChildScrollViewCount;
}

@property(setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications;
@property BOOL allowResizePastTargetRect;
@property(copy) UIColor * backgroundColor;
@property(retain) UIViewController * contentViewController;
@property <UIPopoverControllerDelegate> * delegate;
@property(retain) UIDimmingView * dimmingView;
@property BOOL dismissesOnRotation;
@property(copy) NSArray * passthroughViews;
@property unsigned int popoverArrowDirection;
@property(retain) Class popoverBackgroundViewClass;
@property struct CGSize { float x1; float x2; } popoverContentSize;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } popoverLayoutMargins;
@property(getter=isPopoverVisible,readonly) BOOL popoverVisible;
@property(retain) _UIPopoverLayoutInfo * preferredLayoutInfo;
@property(getter=_presentationEdge,setter=_setPresentationEdge:) unsigned int presentationEdge;
@property(getter=_presentingView,setter=_setPresentingView:) UIView * presentingView;
@property(getter=_retainsSelfWhilePresented,setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented;
@property BOOL showsOrientationMarker;
@property BOOL showsPresentationArea;
@property BOOL showsTargetRect;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)arg1 andContentViewController:(id)arg2;
+ (BOOL)_forceAttemptsToAvoidKeyboard;
+ (Class)_popoverViewClass;
+ (BOOL)_popoversDisabled;
+ (BOOL)_showTargetRectPref;

- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (BOOL)_attemptsToAvoidKeyboard;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned int)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 arrowDirections:(unsigned int)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6;
- (BOOL)_canRepresentAutomatically;
- (struct CGPoint { float x1; float x2; })_centerPointForScale:(float)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 anchor:(struct CGPoint { float x1; float x2; })arg3;
- (void)_commonPresentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (id)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)arg1;
- (void)_containedViewControllerModalStateChanged;
- (struct CGSize { float x1; float x2; })_currentPopoverContentSize;
- (Class)_defaultChromeViewClass;
- (id)_dimmingView;
- (void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (float)_dismissalAnimationDuration;
- (BOOL)_embedsInView;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)_gestureRecognizerForPresentationFromEdge:(unsigned int)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_hostingWindowDidRotate:(id)arg1;
- (void)_hostingWindowWillRotate:(id)arg1;
- (BOOL)_ignoresKeyboardNotifications;
- (void)_incrementSlideTransitionCount:(BOOL)arg1;
- (id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(int)arg2;
- (void)_invalidateLayoutInfo;
- (BOOL)_isDismissing;
- (BOOL)_isPresenting;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (id)_managingSplitViewController;
- (BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
- (void)_modalAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (int)_popoverBackgroundStyle;
- (BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;
- (int)_popoverControllerStyle;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (void)_postludeForDismissal;
- (void)_presentPopoverBySlidingIn:(BOOL)arg1 fromEdge:(unsigned int)arg2 ofView:(id)arg3 animated:(BOOL)arg4 stateOnly:(BOOL)arg5 notifyDelegate:(BOOL)arg6;
- (void)_presentPopoverFromEdge:(unsigned int)arg1 ofView:(id)arg2 animated:(BOOL)arg3;
- (void)_presentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned int)arg4 animate:(BOOL)arg5;
- (void)_presentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned int)arg4;
- (float)_presentationAnimationDuration;
- (unsigned int)_presentationEdge;
- (int)_presentationState;
- (id)_presentingView;
- (void)_resetSlideTransitionCount;
- (BOOL)_retainsSelfWhilePresented;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(int)arg2 animated:(BOOL)arg3;
- (void)_setGesturesEnabled:(BOOL)arg1;
- (void)_setIgnoresKeyboardNotifications:(BOOL)arg1;
- (void)_setManagingSplitViewController:(id)arg1;
- (void)_setPopoverBackgroundStyle:(int)arg1;
- (void)_setPopoverView:(id)arg1;
- (void)_setPresentationEdge:(unsigned int)arg1;
- (void)_setPresentationState:(int)arg1;
- (void)_setPresentingView:(id)arg1;
- (void)_setRetainsSelfWhilePresented:(BOOL)arg1;
- (void)_setSplitParentController:(id)arg1;
- (BOOL)_shimPresentSlidingPopoverAnimated:(BOOL)arg1;
- (unsigned int)_slideTransitionCount;
- (id)_splitParentController;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForScrollViewNotifications;
- (void)_startWatchingForWindowRotations;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_stopWatchingForNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_stopWatchingForWindowRotations;
- (void)_swipe:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1;
- (BOOL)allowResizePastTargetRect;
- (id)backgroundColor;
- (id)contentViewController;
- (id)copyScriptPopOver;
- (void)dealloc;
- (id)delegate;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (BOOL)dismissesOnRotation;
- (id)init;
- (id)initWithContentViewController:(id)arg1;
- (BOOL)isPopoverVisible;
- (BOOL)isPresentingOrDismissing;
- (id)passthroughViews;
- (unsigned int)popoverArrowDirection;
- (Class)popoverBackgroundViewClass;
- (struct CGSize { float x1; float x2; })popoverContentSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })popoverLayoutMargins;
- (id)popoverView;
- (id)preferredLayoutInfo;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (void)setAllowResizePastTargetRect:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setDismissesOnRotation:(BOOL)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPopoverArrowDirection:(unsigned int)arg1;
- (void)setPopoverBackgroundViewClass:(Class)arg1;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setPopoverLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPreferredLayoutInfo:(id)arg1;
- (void)setShowsOrientationMarker:(BOOL)arg1;
- (void)setShowsPresentationArea:(BOOL)arg1;
- (void)setShowsTargetRect:(BOOL)arg1;
- (BOOL)showsOrientationMarker;
- (BOOL)showsPresentationArea;
- (BOOL)showsTargetRect;

@end
