/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSDictionary, NSMutableArray, UIScreen, UIScreenMode, UISoftwareDimmingWindow, UIWindow;

@interface UIScreen : NSObject {
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
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int hasShownWindows : 1; 
        unsigned int canAccessDisplay : 1; 
        unsigned int canAccessDisplayValid : 1; 
        unsigned int screenUpdatesDisabled : 1; 
    } _bounds;
    NSDictionary *_capabilities;
    id _display;
    float _horizontalScale;
    int _lastNotifiedBacklightLevel;
    NSMutableArray *_pausedWindows;
    float _scale;
    UIWindow *_screenDisablingWindow;
    } _screenFlags;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    double _startedPausingWindows;
    int _userInterfaceIdiom;
    BOOL _wantsSoftwareDimming;
    int _workspaceCapableScreenType;
}

@property(setter=_setLastNotifiedBacklightLevel:) int _lastNotifiedBacklightLevel;
@property(setter=_setSoftwareDimmingWindow:,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } applicationFrame;
@property(readonly) NSArray * availableModes;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property float brightness;
@property(retain) UIScreenMode * currentMode;
@property(readonly) UIScreen * mirroredScreen;
@property int overscanCompensation;
@property(readonly) UIScreenMode * preferredMode;
@property(readonly) float scale;
@property BOOL wantsSoftwareDimming;
@property(getter=_workspaceCapableScreenType,setter=_setWorkspaceCapableScreenType:) int workspaceCapableScreenType;

+ (void)_beginDisableScreenUpdatesForSnapshot;
+ (void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(BOOL)arg1;
+ (void)_endDisableScreenUpdates;
+ (void)_prepareScreensForAppResume;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (BOOL)_shouldDisableJail;
+ (void)_videoOutSettingsChanged;
+ (id)_workspaceCapableScreens;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)sbs_launchImageInfoPlistKeyModifier:(int)arg1;
+ (id)sbs_screenTypes;
+ (id)sbs_snapshotImagePathComponent:(int)arg1;
+ (id)screens;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForScreenOriginRotation:(float)arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToRotateScreen:(float)arg1;

- (void)_applicationDidBecomeActive:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1 usingStatusbarHeight:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (BOOL)_areBoundsJailed;
- (void)_beginObservingBacklightLevelNotifications;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsInPixels;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_computeMetrics;
- (void)_connectScreen;
- (void)_disableScreenUpdates:(BOOL)arg1;
- (void)_disconnectScreen;
- (id)_display;
- (id)_displayID;
- (void)_enableScreenUpdates;
- (void)_endObservingBacklightLevelNotifications;
- (BOOL)_hasStatusBar;
- (BOOL)_hasWindows;
- (float)_horizontalPixelScale;
- (int)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (BOOL)_isExternal;
- (BOOL)_isMainScreen;
- (BOOL)_isOverscanned;
- (BOOL)_isRotatable;
- (BOOL)_isWorkspaceCapable;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_jailedBoundsEdgeInsets;
- (int)_lastNotifiedBacklightLevel;
- (id)_lazySoftwareDimmingWindow;
- (id)_mapkit_display;
- (id)_name;
- (BOOL)_overscanAdjustmentNeedsUpdate;
- (float)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (void)_prepareForWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_realDisplayBounds;
- (double)_refreshRate;
- (void)_requestFocusIfNecessary;
- (float)_rotation;
- (float)_scale;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setLastNotifiedBacklightLevel:(int)arg1;
- (void)_setScale:(float)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_setSpeed:(float)arg1 forWindow:(id)arg2;
- (void)_setUserInterfaceIdiom:(int)arg1;
- (void)_setWantsFocus:(BOOL)arg1;
- (void)_setWorkspaceCapableScreenType:(int)arg1;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_softwareDimmingWindow;
- (BOOL)_supportsBrightness;
- (void)_updateCapabilities;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)arg1;
- (void)_updateUserInterfaceIdiom;
- (void)_updateWorkspaceCapableScreenType;
- (int)_userInterfaceIdiom;
- (int)_workspaceCapableScreenType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (float)brightness;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithDisplay:(id)arg1;
- (id)mirroredScreen;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)overscanCompensation;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (BOOL)sbs_isCloned;
- (BOOL)sbs_isMainScreen;
- (BOOL)sbs_isStarkScreen;
- (id)sbs_launchImageInfoPlistKeyModifier;
- (id)sbs_snapshotImagePathComponent;
- (float)scale;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(float)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setOverscanCompensation:(int)arg1;
- (void)setWantsSoftwareDimming:(BOOL)arg1;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (BOOL)wantsSoftwareDimming;

@end
