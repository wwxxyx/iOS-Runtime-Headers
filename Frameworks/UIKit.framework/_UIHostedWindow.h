/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow {
    int _hostTintAdjustmentMode;
}

@property(setter=_setHostTintAdjustmentMode:) int _hostTintAdjustmentMode;
@property(readonly) _UIHostedWindowHostingHandle * hostingHandle;

- (BOOL)_canPromoteFromKeyWindowStack;
- (int)_defaultTintAdjustmentMode;
- (int)_hostTintAdjustmentMode;
- (BOOL)_isClippedByScreenJail;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_needsShakesWhenInactive;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_setHostTintAdjustmentMode:(int)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_updateAppTintView;
- (void)_updateTransformLayerForClassicPresentation;
- (BOOL)_usesWindowServerHitTesting;
- (unsigned int)contextID;
- (id)hostingHandle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
