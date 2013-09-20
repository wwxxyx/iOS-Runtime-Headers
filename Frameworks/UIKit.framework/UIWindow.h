/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, NSArray, NSMutableArray, NSMutableSet, NSUndoManager, UIColor, UIResponder, UIScreen, UIView, UIViewController, _UIResponderSelectionCursor, _UISystemGestureGateGestureRecognizer;

@interface UIWindow : UIView <NSISEngineDelegate> {
    struct { 
        unsigned int delegateWillRotate : 1; 
        unsigned int delegateDidRotate : 1; 
        unsigned int delegateWillAnimateFirstHalf : 1; 
        unsigned int delegateDidAnimationFirstHalf : 1; 
        unsigned int delegateWillAnimateSecondHalf : 1; 
        unsigned int autorotatesToPortrait : 1; 
        unsigned int autorotatesToPortraitUpsideDown : 1; 
        unsigned int autorotatesToLandscapeLeft : 1; 
        unsigned int autorotatesToLandscapeRight : 1; 
        unsigned int dontBecomeKeyOnOrderFront : 1; 
        unsigned int output : 1; 
        unsigned int inGesture : 1; 
        unsigned int bitsPerComponent : 4; 
        unsigned int autorotates : 1; 
        unsigned int isRotating : 1; 
        unsigned int isUsingOnePartRotationAnimation : 1; 
        unsigned int isHandlingContentRotation : 1; 
        unsigned int disableAutorotationCount : 4; 
        unsigned int needsAutorotationWhenReenabled : 1; 
        unsigned int forceTwoPartRotationAnimation : 1; 
        unsigned int orderKeyboardInAfterRotating : 1; 
        unsigned int roundedCorners : 4; 
        unsigned int resizesToFullScreen : 1; 
        unsigned int keepContextInBackground : 1; 
        unsigned int ignoreSetHidden : 1; 
        unsigned int forceVisibleOnInit : 1; 
        unsigned int settingFirstResponder : 1; 
        unsigned int legacyOrientationChecks : 1; 
        unsigned int windowResizedToFullScreen : 1; 
        unsigned int statusBarFollowsOrientation : 1; 
    id __rotationCompleteBlock;
    BOOL __usesLegacySupportedOrientationChecks;
    id _currentTintView;
    id _deferredLaunchBlock;
    id _delegate;
    UIView *_exclusiveTouchView;
    id _fingerInfo;
    UIResponder *_firstResponder;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    id _layerContext;
    _UIResponderSelectionCursor *_responderSelectionCursor;
    NSArray *_rootViewConstraints;
    UIViewController *_rootViewController;
    NSMutableArray *_rotationViewControllers;
    UIColor *_savedBackgroundColor;
    UIScreen *_screen;
    NSMutableSet *_subtreeMonitoringViews;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    NSMutableSet *_tintViews;
    id _touchData;
    CALayer *_transformLayer;
    NSUndoManager *_undoManager;
    int _viewOrientation;
    id _windowController;
    } _windowFlags;
    NSArray *_windowInternalConstraints;
    float _windowLevel;
    float _windowSublevel;
}

@property(setter=_setDeferredLaunchBlock:,copy) id _deferredLaunchBlock;
@property(setter=_setLegacyOrientationChecks:) BOOL _legacyOrientationChecks;
@property(setter=_setRootViewConstraints:,copy) NSArray * _rootViewConstraints;
@property(setter=_setRotationCompleteBlock:,copy) id _rotationCompleteBlock;
@property(readonly) BOOL _usesLegacySupportedOrientationChecks;
@property(setter=_setWindowInternalConstraints:,copy) NSArray * _windowInternalConstraints;
@property(getter=isKeyWindow,readonly) BOOL keyWindow;
@property(retain) UIViewController * rootViewController;
@property(retain) UIScreen * screen;
@property float windowLevel;

+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(BOOL)arg2;
+ (void)_clearKeyWindowStack;
+ (void)_executeDeferredLaunchBlocks;
+ (id)_externalKeyWindow;
+ (id)_findWithDisplayPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_hitTestToPoint:(struct CGPoint { float x1; float x2; })arg1 pathIndex:(int)arg2 forEvent:(id)arg3 screen:(id)arg4;
+ (unsigned int)_keyWindowStackSize;
+ (void)_noteStatusBarHeightChanged:(float)arg1 oldHeight:(float)arg2 forAutolayoutRootViewsOnly:(BOOL)arg3;
+ (void)_noteStatusBarHeightChanged:(float)arg1 oldHeight:(float)arg2;
+ (void)_popKeyWindow:(id)arg1;
+ (void)_popKeyWindow;
+ (void)_prepareWindowsForAppResume;
+ (void)_prepareWindowsForAppSuspend;
+ (void)_prepareWindowsPassingTestForAppResume:(id)arg1;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_removeWindowFromStack:(id)arg1;
+ (void)_setKeyWindowStackEnabled:(BOOL)arg1;
+ (id)_statusBarControllingWindow;
+ (void)_synchronizeDrawing;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(id)arg2;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id)arg1;
+ (id)_topVisibleWindowPassingTest:(id)arg1;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 forScreen:(id)arg3;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void*)createIOSurfaceFromScreen:(id)arg1;
+ (void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int*)arg2 count:(unsigned int)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 usePurpleGfx:(BOOL)arg5 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg6;
+ (void*)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 usePurpleGfx:(BOOL)arg4 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg5;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (void*)createScreenIOSurface;
+ (id)keyWindow;
+ (Class)layerClass;
+ (void)setAllWindowsKeepContextInBackground:(BOOL)arg1;

- (id)__clientsForRotationCallbacks;
- (void)_addRotationViewController:(id)arg1;
- (void)_addTintView:(id)arg1;
- (id)_appearanceContainer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_axConvertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)_beginModalSession;
- (BOOL)_canActAsKeyWindowForScreen:(id)arg1;
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canPromoteFromKeyWindowStack;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(BOOL)arg2;
- (float)_chargeMultiplicationFactor;
- (float)_classicOffset;
- (BOOL)_clearMouseView;
- (void)_clearPendingKeyboardChanges;
- (id)_clientsForRotation;
- (void)_commonInit;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (BOOL)_containedInAbsoluteResponderChain;
- (unsigned int)_contextId;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (float)_convertVisualAltitude:(float)arg1 fromWindow:(id)arg2;
- (float)_convertVisualAltitude:(float)arg1 toWindow:(id)arg2;
- (void)_createContext;
- (void)_createContextIfNecessaryForCurrentApplicationState;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (id)_currentTintView;
- (id)_deepestUnambiguousResponder;
- (id)_deferredLaunchBlock;
- (id)_descendantWithAmbiguousLayout;
- (void)_destroyContext;
- (void)_destroyContextFromScreen:(id)arg1;
- (id)_directionalGestureRecognizers;
- (BOOL)_disableGroupOpacity;
- (BOOL)_disableViewScaling;
- (id)_effectiveScreen;
- (void)_endModalSession;
- (id)_exclusiveTouchView;
- (unsigned int)_expectedWindowInternalConstraintsCount;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(BOOL)arg4;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_firstResponder;
- (void)_forceTwoPartRotationAnimation:(BOOL)arg1;
- (void)_geometryDidChangeForView:(id)arg1;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (BOOL)_hasContext;
- (id)_hostingHandle;
- (BOOL)_ignoresHitTest;
- (BOOL)_includeInDefaultImageSnapshot;
- (void)_initializeLayoutEngine;
- (void)_invalidateWindowInternalConstraints;
- (BOOL)_isAnyWindowRotating;
- (BOOL)_isClippedByScreenJail;
- (BOOL)_isConstrainedByScreenJail;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isInAWindow;
- (BOOL)_isLoweringAnchoringConstraints;
- (BOOL)_isScrollingEnabledForView:(id)arg1;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_isStatusBarWindow;
- (BOOL)_isTextEffectsWindow;
- (BOOL)_isWindowServerHostingManaged;
- (id)_layoutEngineCreateIfNecessary;
- (id)_layoutEngineIfAvailable;
- (BOOL)_legacyOrientationChecks;
- (BOOL)_legacyShouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_makeExternalKeyWindow;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(BOOL)arg1;
- (void)_matchDeviceBounds;
- (BOOL)_needsShakesWhenInactive;
- (void)_orderContextToFront;
- (void)_orderFrontWithoutMakingKey;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(int)arg3;
- (id)_redundantConstraints;
- (void)_registerChargedView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (id)_registeredScrollToTopViews;
- (void)_removeRotationViewController:(id)arg1;
- (void)_removeTintView:(id)arg1;
- (void)_resignKeyWindowStatus;
- (void)_resizeWindowToFullScreenIfNecessary;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderWindow;
- (id)_rootForKeyResponderCycle;
- (id)_rootLayer;
- (id)_rootViewConstraints;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (id)_rotationCompleteBlock;
- (id)_rotationViewControllers;
- (id)_screen;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (void)_sendButtonGesturesForEvent:(id)arg1;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendGesturesForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_setDeferredLaunchBlock:(id)arg1;
- (void)_setExclusiveTouchView:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setHidden:(BOOL)arg1 forced:(BOOL)arg2;
- (void)_setIsLoweringAnchoringConstraints:(BOOL)arg1;
- (void)_setIsSettingFirstResponder:(BOOL)arg1;
- (void)_setLayerHidden:(BOOL)arg1;
- (void)_setLegacyOrientationChecks:(BOOL)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setRootViewConstraints:(id)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2;
- (void)_setRotatableViewOrientation:(int)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_setRotatableViewOrientation:(int)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3;
- (void)_setRotationCompleteBlock:(id)arg1;
- (void)_setWindowControlsStatusBarOrientation:(BOOL)arg1;
- (void)_setWindowInternalConstraints:(id)arg1;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)_shouldDelayTouchForSystemGestures:(id)arg1;
- (BOOL)_shouldZoom;
- (void)_slideFooterFromOrientation:(int)arg1 toOrientation:(int)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(int)arg4;
- (id)_subtreeMonitorsForView:(id)arg1;
- (unsigned int)_supportedInterfaceOrientationsForRootViewController;
- (BOOL)_supportsBecomeFirstResponderWhenPossible;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_tagAsSpringboardPresentationWindow;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (id)_touchData;
- (float)_touchSloppinessFactor;
- (struct CGPoint { float x1; float x2; })_transformDisplayToWindowCoordinates:(struct CGPoint { float x1; float x2; })arg1;
- (void)_transformLayerShouldMaskToBounds:(BOOL)arg1;
- (id)_uiib_candidateRedundantConstraints;
- (void)_uiib_invalidateWindowInternalConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (void)_unregisterChargedView:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_updateAppTintView;
- (void)_updateConstraintsAtWindowLevelIfNeeded;
- (void)_updateCurrentTintView;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2 fenceID:(int)arg3 animation:(int)arg4;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_updateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateToInterfaceOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_updateTransformLayer;
- (void)_updateTransformLayerForClassicPresentation;
- (BOOL)_usesLegacySupportedOrientationChecks;
- (BOOL)_usesWindowServerHitTesting;
- (id)_window;
- (BOOL)_windowControlsStatusBarOrientation;
- (int)_windowInterfaceOrientation;
- (id)_windowInternalConstraints;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (void)_writeLayerTreeToPath:(id)arg1;
- (void)addRootViewControllerViewIfPossible;
- (id)addTouchCaptureViewWithTag:(int)arg1;
- (BOOL)autorotates;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (void)becomeKeyWindow;
- (void)beginDisablingInterfaceAutorotation;
- (int)bitsPerComponent;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentView;
- (struct CGPoint { float x1; float x2; })convertDeviceToWindow:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertWindowToDevice:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyIOSurfaceSnapshotView:(int)arg1;
- (void*)createIOSurface;
- (void*)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg1;
- (void)exerciseAmbiguityInLayout;
- (id)firstResponder;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (BOOL)hasAmbiguousLayout;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isInterfaceAutorotationDisabled;
- (BOOL)isInternalWindow;
- (BOOL)isKeyWindow;
- (BOOL)isRotating;
- (BOOL)isUsingOnePartRotationAnimation;
- (BOOL)keepContextInBackground;
- (void)layoutSublayersOfLayer:(id)arg1;
- (float)level;
- (void)makeKey:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyAndVisible;
- (void)makeKeyWindow;
- (void)matchDeviceOrientation;
- (id)nextResponder;
- (void)orderFront:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)redo:(id)arg1;
- (void)removeFromSuperview;
- (id)removeTouchCaptureViewWithTag:(int)arg1;
- (id)representation;
- (void)resignKeyWindow;
- (BOOL)resizesToFullScreen;
- (id)rootViewController;
- (id)screen;
- (void)sendEvent:(id)arg1;
- (void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2;
- (void)setAutorotates:(BOOL)arg1;
- (void)setBecomeKeyOnOrderFront:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setKeepContextInBackground:(BOOL)arg1;
- (void)setLevel:(float)arg1;
- (void)setResizesToFullScreen:(BOOL)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)setWindowLevel:(float)arg1;
- (void)setupForOrientation:(int)arg1;
- (void)synchronizeDrawingWithID:(int)arg1 count:(unsigned int)arg2;
- (void)synchronizeDrawingWithID:(int)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)updateConstraints;
- (void)updateConstraintsIfNeeded;
- (struct CGPoint { float x1; float x2; })warpPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)windowLevel;
- (int)windowOutput;

@end
