/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MKMapViewDelegate>, <MKMapViewDelegate><MKMapViewDelegatePrivate>, CLLocation, MKAnnotationContainerView, MKAnnotationView, MKAttributionLabel, MKBasicMapView, MKCompassView, MKMapAnnotationManager, MKMapCamera, MKMapGestureController, MKMapViewInternal, MKOverlayContainerView, MKScaleView, MKUserLocation, MKVariableDelayTapRecognizer, NSArray, NSTimer, UIGestureRecognizer, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, VKMapView, VKPuckAnimator;

@interface MKMapView : UIView <VKPuckAnimatorDelegate, MKOverlayContainerViewDelegate, UIGestureRecognizerDelegate, MKVariableDelayTapRecognizerDelegate, MKAnnotationContainerViewDelegate, VKMapViewDelegate, MKMapGestureControllerDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, GEOResourceManifestTileGroupObserver, NSCoding> {
    struct { 
        unsigned int callsDelegateForAllRegionChanges : 1; 
        unsigned int changingRegion : 1; 
        unsigned int debugViewHeading : 1; 
        unsigned int didStartDragging : 1; 
        unsigned int draggingInterrupted : 1; 
        unsigned int didStartSmoothScrolling : 1; 
        unsigned int hasRenderedSomething : 1; 
        unsigned int ignoreHeadingUpdates : 1; 
        unsigned int ignoreLocationUpdates : 1; 
        unsigned int isSuspended : 1; 
        unsigned int liveTrackingAutoSelectZoomLevel : 1; 
        unsigned int longPressing : 1; 
        unsigned int persistFixedUserLocation : 1; 
        unsigned int regionChangeIsAnimated : 1; 
        unsigned int regionChangeIsUserInitiated : 1; 
        unsigned int rotationSupported : 1; 
        unsigned int scrollEnabled : 1; 
        unsigned int scrolling : 1; 
        unsigned int scrollIsAnimated : 1; 
        unsigned int shouldRotateForHeading : 1; 
        unsigned int showsUserLocation : 1; 
        unsigned int zoomEnabled : 1; 
        unsigned int zoomIsAnimated : 1; 
        unsigned int zooming : 1; 
        unsigned int wasZooming : 1; 
        unsigned int isChangingViewSize : 1; 
        unsigned int shouldSetRegionOnSizeChange : 1; 
        unsigned int showsAttribution : 1; 
        unsigned int showsAttributionBadge : 1; 
        unsigned int locationUpdatesPausedForRegionChange : 1; 
        unsigned int useOld2DAnnotationContainer : 1; 
        unsigned int rotating : 1; 
        unsigned int pitching : 1; 
        unsigned int rotateEnabled : 1; 
        unsigned int pitchEnabled : 1; 
        unsigned int hasPendingCameraChange : 1; 
        unsigned int backdropViewQualityChangingDisabled : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldDelayTapResponse : 1; 
        unsigned int delegateWillChangeRotation : 1; 
        unsigned int delegateDidUpdateUserLocation : 1; 
        unsigned int delegateDidFailToLocateUser : 1; 
        unsigned int delegateWillChangeRegion : 1; 
        unsigned int delegateDidChangeRegion : 1; 
        unsigned int delegateDidStartMapRendering : 1; 
        unsigned int delegateDidFinishMapRendering : 1; 
        unsigned int delegateDidChangeUserTrackingMode : 1; 
        unsigned int delegateDidChangeUserTrackingModeButton : 1; 
        unsigned int delegateDidChangeMapType : 1; 
    float _angularVelocity;
    int _animationType;
    MKAnnotationContainerView *_annotationContainer;
    id _annotationCoordinateTest;
    MKMapAnnotationManager *_annotationManager;
    id _annotationRectTest;
    UIImageView *_attributionBadgeView;
    MKAttributionLabel *_attributionLabel;
    MKBasicMapView *_basicMapView;
    id _bottomLayoutGuide;
    MKMapCamera *_camera;
    BOOL _compassEnabled;
    MKCompassView *_compassView;
    BOOL _compassVisible;
    UIView *_contentView;
    NSTimer *_debugTimer;
    UILabel *_debugView;
    NSTimer *_defaultLocationTimer;
    <MKMapViewDelegate><MKMapViewDelegatePrivate> *_delegate;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    unsigned int _eventMode;
    unsigned int _eventModeHistory;
    } _flags;
    MKMapGestureController *_gestureController;
    double _heading;
    UITapGestureRecognizer *_immediateTapGesture;
    MKMapViewInternal *_internal;
    UIGestureRecognizer *_locationConsoleGesture;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    unsigned int _mapType;
    VKMapView *_mapView;
    MKOverlayContainerView *_overlayContainer;
    id _regionSetterWhenSized;
    int _rotationState;
    BOOL _scaleEnabled;
    MKScaleView *_scaleView;
    BOOL _scaleVisible;
    UIView *_scrollContainerView;
    id _selectAnnotationViewAfterRedrawBlock;
    id _showCalloutAfterPanBlock;
    id _showCalloutAfterRegionChangeBlock;
    NSTimer *_startEffectsTimer;
    BOOL _suppressCompassDisplay;
    unsigned int _suspendedEffectsCount;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id _topLayoutGuide;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    MKUserLocation *_userLocation;
    VKPuckAnimator *_userLocationAnimator;
    int _userTrackingMode;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } annotationVisibleRect;
@property(readonly) NSArray * annotations;
@property(copy) MKMapCamera * camera;
@property struct { double x1; double x2; } centerCoordinate;
@property <MKMapViewDelegate> * delegate;
@property BOOL ignoreLocationUpdates;
@property unsigned int mapType;
@property(readonly) float minZoomLevel;
@property(readonly) NSArray * overlays;
@property(getter=isPitchEnabled) BOOL pitchEnabled;
@property(retain) CLLocation * predictedUserLocation;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property(getter=isRotateEnabled) BOOL rotateEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(copy) NSArray * selectedAnnotations;
@property BOOL showsBuildings;
@property BOOL showsPointsOfInterest;
@property BOOL showsUserLocation;
@property(readonly) MKUserLocation * userLocation;
@property int userLocationSource;
@property(readonly) MKAnnotationView * userLocationView;
@property(getter=isUserLocationVisible,readonly) BOOL userLocationVisible;
@property int userTrackingMode;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } visibleMapRect;
@property(getter=isZoomEnabled) BOOL zoomEnabled;

+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectThatFitsViewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4 minZoomLevel:(float)arg5 maxZoomLevel:(float)arg6;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 edgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 region:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg4 minZoomLevel:(float)arg5 maxZoomLevel:(float)arg6;
+ (unsigned int)minZoomLevelForMapType:(unsigned int)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 edgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 region:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })regionThatFitsMapType:(unsigned int)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 region:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (void)setRendersInBackgroundByDefault:(BOOL)arg1;

- (void)_addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)_addDebugGesture;
- (void)_addSetRegionBlockWhenSized:(id)arg1;
- (BOOL)_animationTypeIgnoresEvents:(int)arg1;
- (void)_annotationViewDragStateChanged:(id)arg1;
- (BOOL)_annotationViewsAreAddedImmediately;
- (float)_boundedZoomLevel:(float)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (float)_boundedZoomLevel:(float)arg1;
- (Class)_calloutViewClass;
- (id)_camera;
- (void)_cancelAccessories;
- (void)_cancelAccessoriesAndDoubleTap;
- (void)_cancelDoubleTap;
- (struct { double x1; double x2; })_centerMapPoint;
- (struct { double x1; double x2; })_centerMapPointForMapRegion:(id)arg1;
- (struct CGPoint { float x1; float x2; })_centerPoint;
- (struct CGPoint { float x1; float x2; })_centerPointOffset;
- (void)_clearEventMode:(int)arg1;
- (void)_clearFixedUserLocation;
- (void)_clearGestureRecognizers;
- (void)_clearLayoutGuides;
- (id)_commonInitAndEnableLoading:(BOOL)arg1 fromIB:(BOOL)arg2;
- (void)_configureGestureRecognizers;
- (void)_considerMovingToThrottledHeading;
- (struct CADoublePoint { double x1; double x2; })_convertCoordinate:(struct { double x1; double x2; })arg1 toDoublePointToView:(id)arg2;
- (struct { double x1; double x2; })_convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toCoordinateFromView:(id)arg2;
- (struct { double x1; double x2; })_convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toMapPointFromView:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toMapRectFromView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })_convertMapPoint:(struct { double x1; double x2; })arg1 toDoublePointToView:(id)arg2;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })_convertMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDoubleRectToView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_debugViewFrame;
- (id)_defaultLocationTimer;
- (BOOL)_deviceIsPluggedIn;
- (void)_didChangeRegionMidstream:(BOOL)arg1;
- (void)_didEndScroll;
- (void)_didEndUserInteraction;
- (void)_didEndZoom;
- (void)_displayWorld;
- (void)_dropDraggingAnnotationView:(BOOL)arg1;
- (void)_ensureLiveTrackingResourcesInitialized;
- (id)_findLayoutGuideVC;
- (void)_fixUserLocationFromPresentationValue;
- (double)_goToCenterCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(float)arg2 animationType:(int)arg3 cancelDefaultLocationTimer:(BOOL)arg4;
- (double)_goToCenterCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(float)arg2 animationType:(int)arg3;
- (void)_goToMapRegion:(id)arg1 duration:(double)arg2 animationType:(int)arg3 resetHeading:(BOOL)arg4;
- (void)_handleLongPressDidEnd;
- (BOOL)_haveNewPendingLocation;
- (BOOL)_iconsShouldAlignToPixels;
- (void)_insertSubview:(id)arg1;
- (int)_interfaceOrientation;
- (BOOL)_isChangingRegionForGesture;
- (BOOL)_isHandlingUserEvent;
- (BOOL)_isScrollingAnimation;
- (BOOL)_isUserLocationInView:(BOOL)arg1;
- (BOOL)_isVisible;
- (void)_layoutAttribution;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFraction:(double)arg1 ofVisible:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_mapRegionWithCenterCoordinate:(struct { double x1; double x2; })arg1 zoomScale:(float)arg2;
- (float)_maxZoomLevelForCoordinate:(struct { double x1; double x2; })arg1;
- (double)_panDurationFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)_pauseUserLocationUpdates;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_resumeUserLocationUpdates:(BOOL)arg1;
- (BOOL)_roomForCompass;
- (BOOL)_rotationPossible;
- (int)_rotationState;
- (int)_roundedZoomLevel;
- (void)_selectUserLocationTypeWithDeltaZoomLevel:(float)arg1;
- (void)_setAnimationType:(int)arg1;
- (void)_setCalloutViewClass:(Class)arg1;
- (void)_setCamera:(id)arg1 animated:(BOOL)arg2;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timing:(id)arg3;
- (void)_setCamera:(id)arg1 duration:(double)arg2 timingCurve:(int)arg3;
- (void)_setCamera:(id)arg1;
- (void)_setCompassVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setEventMode:(int)arg1;
- (void)_setMapType:(unsigned int)arg1 onInit:(BOOL)arg2;
- (void)_setScaleVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setScrolling:(BOOL)arg1;
- (void)_setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
- (void)_setZoomScale:(float)arg1 centerCoordinate:(struct { double x1; double x2; })arg2 duration:(double)arg3 animationType:(int)arg4 resetHeading:(BOOL)arg5;
- (void)_setZoomScale:(float)arg1 centerMapPoint:(struct { double x1; double x2; })arg2 duration:(double)arg3 animationType:(int)arg4 resetHeading:(BOOL)arg5;
- (BOOL)_shouldConservePowerAnimationType:(int)arg1;
- (void)_sizeDidChangeWithCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)_sizeWillChange;
- (id)_startEffectsTimer;
- (void)_startTrackingHeading;
- (void)_stopTrackingHeading;
- (id)_stringWithEventMode:(int)arg1;
- (void)_updateAccessories;
- (void)_updateAttribution;
- (void)_updateCameraState;
- (void)_updateCenteredAttributesWithCoordinate:(struct { double x1; double x2; })arg1;
- (void)_updateCompassPosition;
- (void)_updateCompassVisibility;
- (void)_updateContentBounds;
- (void)_updateDebugViewFrameWithEdgeInsets;
- (void)_updateEffects;
- (void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(id)arg3;
- (void)_updateFromCamera:(id)arg1;
- (void)_updateHeading:(id)arg1 rotationType:(int)arg2 animated:(BOOL)arg3;
- (void)_updateHeadingOrientation;
- (void)_updateIconsShouldAlignToPixels;
- (void)_updateInsets;
- (void)_updateLocationConsole;
- (void)_updatePitchAllowed;
- (void)_updateRotationAttributes;
- (BOOL)_updateRotationSupported;
- (void)_updateScalePosition;
- (void)_updateScaleVisibility;
- (void)_updateScrollContainerView:(BOOL)arg1;
- (void)_updateScrollingAndGestures;
- (void)_updateShouldDisplayEffects;
- (void)_userScrollingEnded;
- (int)_viewIndexForSubview:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_visibleUnderRotationMapRect;
- (BOOL)_wasScrolling;
- (void)_willChangeRegionAnimated:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)_willChangeStatusBarFrame:(id)arg1;
- (void)_willStartScroll:(BOOL)arg1;
- (void)_willStartUserInteraction;
- (void)_willStartZoom:(BOOL)arg1;
- (struct { double x1; double x2; })_zoomCenterPointWithAnchor:(int)arg1 point:(struct CGPoint { float x1; float x2; })arg2 zoomScale:(float)arg3;
- (float)_zoomLevel;
- (float)_zoomLevelForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 includeAccessoryPadding:(BOOL)arg2;
- (float)_zoomLevelForRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 includeAccessoryPadding:(BOOL)arg2;
- (struct { float x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_zoomRegionForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 maxZoomLevel:(int)arg3 minZoomLevel:(int)arg4;
- (float)_zoomScale;
- (float)_zoomScaleForMapRegion:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)addAnnotations:(id)arg1;
- (void)addOverlay:(id)arg1 level:(int)arg2;
- (void)addOverlay:(id)arg1;
- (void)addOverlays:(id)arg1 level:(int)arg2;
- (void)addOverlays:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (int)animationType;
- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (float)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(struct { double x1; double x2; })arg2 maxDistance:(float*)arg3 startPoint:(struct CGPoint { float x1; float x2; }*)arg4 shadowStartPoint:(struct CGPoint { float x1; float x2; }*)arg5;
- (void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint { float x1; float x2; })arg2 annotationCoordinate:(struct { double x1; double x2; })arg3 completionHandler:(id)arg4;
- (id)annotationContainer;
- (void)annotationContainerDidAnimateBubble:(id)arg1;
- (void)annotationContainerDidDropPins:(id)arg1;
- (void)annotationContainerDidHideUserLocationView;
- (void)annotationContainerDidShowUserLocationView;
- (BOOL)annotationContainerIsRotated:(id)arg1;
- (BOOL)annotationContainerShouldAlignToPixels:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationContainerVisibleRect:(id)arg1;
- (void)annotationContainerWillAnimateBubble:(id)arg1;
- (void)annotationContainerWillDropPins:(id)arg1;
- (id)annotationCoordinateTest;
- (void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
- (void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;
- (void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
- (id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
- (id)annotationRectTest;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationVisibleRect;
- (id)annotations;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })attributionFrame;
- (id)awakeAfterUsingCoder:(id)arg1;
- (BOOL)calloutViewContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)calloutViewIsExpanded;
- (BOOL)callsDelegateForAllRegionChanges;
- (id)camera;
- (BOOL)canRotateForHeading;
- (struct { double x1; double x2; })centerCoordinate;
- (struct CGPoint { float x1; float x2; })centerLongLat;
- (id)compassView;
- (id)compassVisibilityAnimation;
- (BOOL)compassVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRegionFromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRectToView:(id)arg2;
- (id)createDrawableForOverlay:(id)arg1;
- (void)dealloc;
- (id)debugView;
- (id)delegate;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)descriptionForLocation:(id)arg1 compact:(BOOL)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)disableHeadingTracking:(BOOL)arg1;
- (void)disableLiveTracking;
- (void)disableMapRotation:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)effectsEnabled;
- (void)enableMapRotationIfNeeded;
- (void)encodeWithCoder:(id)arg1;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)geoDefaultsDidChange:(id)arg1;
- (void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerDidStopPanningDecelerating:(id)arg1;
- (void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
- (void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
- (void)gestureControllerDidStopUserInteraction:(id)arg1;
- (void)gestureControllerDidStopZooming:(id)arg1 direction:(int)arg2 willDecelerate:(BOOL)arg3;
- (void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(int)arg2;
- (void)gestureControllerWillStartPanning:(id)arg1;
- (void)gestureControllerWillStartRotating:(id)arg1;
- (void)gestureControllerWillStartTilting:(id)arg1;
- (void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
- (void)gestureControllerWillStartUserInteraction:(id)arg1;
- (void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)goToCenterCoordinate:(struct { double x1; double x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 animationType:(int)arg3;
- (BOOL)goToCenterCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(float)arg2 animationType:(int)arg3;
- (void)goToDefaultLocation;
- (BOOL)goToRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animationType:(int)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (BOOL)hasRenderedSomething;
- (BOOL)hasUserLocation;
- (BOOL)ignoreLocationUpdates;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2 level:(int)arg3;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (BOOL)isCompassEnabled;
- (BOOL)isGoingToDefaultLocation;
- (BOOL)isHeadingTrackingEnabled;
- (BOOL)isLoadingEnabled;
- (BOOL)isLocationConsoleEnabled;
- (BOOL)isPitchEnabled;
- (BOOL)isRegionChanging;
- (BOOL)isRotateEnabled;
- (BOOL)isScaleEnabled;
- (BOOL)isScrollEnabled;
- (BOOL)isScrolling;
- (BOOL)isShowingNoDataPlaceholders;
- (BOOL)isSuspended;
- (BOOL)isTrackingUserLocation;
- (BOOL)isUserLocationViewCentered;
- (BOOL)isUserLocationVisible;
- (BOOL)isZoomEnabled;
- (BOOL)isZooming;
- (void)layoutSubviews;
- (BOOL)liveTrackingAutoSelectZoomLevel;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapAttributionWithStringAttributes:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mapRegion;
- (int)mapRegionZoomLevel;
- (unsigned int)mapType;
- (id)mapView:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)mapViewDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapViewDidBecomePartiallyDrawn:(id)arg1;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)mapViewDidDraw:(id)arg1;
- (void)mapViewDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingTiles:(id)arg1;
- (void)mapViewDidStartLoadingTiles:(id)arg1;
- (void)mapViewDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)mapViewWillStartRegionAnimation:(id)arg1;
- (float)minZoomLevel;
- (void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(struct { double x1; double x2; })arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlayContainer;
- (void)overlayContainerAddedDrawables:(id)arg1;
- (id)overlays;
- (id)overlaysInLevel:(int)arg1;
- (void)pauseUserHeadingUpdates;
- (void)pauseUserLocationUpdates;
- (float)pointDistanceFromCoordinate:(struct { double x1; double x2; })arg1 toCoordinate:(struct { double x1; double x2; })arg2;
- (id)predictedUserLocation;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { double x1; double x2; double x3; })arg2 course:(double)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })regionThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotationRepresentation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (void)removeUserLocation;
- (id)rendererForOverlay:(id)arg1;
- (void)resetUserLocation;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resumeUserHeadingUpdates;
- (void)resumeUserLocationUpdates;
- (id)scaleView;
- (id)scaleVisibilityAnimation;
- (id)scrollContainerView;
- (void)scrollWithOffset:(struct CGPoint { float x1; float x2; })arg1 annotationCoordinate:(struct { double x1; double x2; })arg2 andAnimationType:(int)arg3;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)selectedAnnotations;
- (void)setBackdropViewQualityChangingDisabled:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCallsDelegateForAllRegionChanges:(BOOL)arg1;
- (void)setCamera:(id)arg1 animated:(BOOL)arg2;
- (void)setCamera:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setCompassEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHeadingTrackingEnabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIgnoreLocationUpdates:(BOOL)arg1;
- (void)setLiveTrackingAutoSelectZoomLevel:(BOOL)arg1;
- (void)setLoadingEnabled:(BOOL)arg1;
- (void)setLocationConsoleEnabled:(BOOL)arg1;
- (void)setMapType:(unsigned int)arg1;
- (void)setPitchEnabled:(BOOL)arg1;
- (void)setPredictedUserLocation:(id)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setRotateEnabled:(BOOL)arg1;
- (void)setScaleEnabled:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)setShouldReloadSynchronously:(BOOL)arg1;
- (void)setShouldRotateForHeading:(BOOL)arg1;
- (void)setShowsAttribution:(BOOL)arg1;
- (void)setShowsAttributionBadge:(BOOL)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPOIIcons:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (void)setShowsUserLocation:(BOOL)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)setUserLocationSource:(int)arg1;
- (void)setUserTrackingMode:(int)arg1 animated:(BOOL)arg2;
- (void)setUserTrackingMode:(int)arg1;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 animated:(BOOL)arg3;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)set_annotationViewsAreAddedImmediately:(BOOL)arg1;
- (void)set_defaultLocationTimer:(id)arg1;
- (void)set_rotationState:(int)arg1;
- (void)set_startEffectsTimer:(id)arg1;
- (void)set_zoomScale:(float)arg1;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (BOOL)shouldReloadSynchronously;
- (BOOL)shouldRotateForHeading;
- (void)showAnnotations:(id)arg1 animated:(BOOL)arg2;
- (void)showCalloutIfNecessaryForAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (BOOL)showsAttribution;
- (BOOL)showsAttributionBadge;
- (BOOL)showsBuildings;
- (BOOL)showsPOIIcons;
- (BOOL)showsPointsOfInterest;
- (BOOL)showsUserLocation;
- (void)snapToNorth:(id)arg1;
- (void)startEffects;
- (void)startUpdatingUserLocation;
- (void)stopEffects;
- (void)stopUpdatingUserLocation;
- (void)toggleLocationConsole:(id)arg1;
- (void)updateLayoutGuides;
- (void)updateTiling;
- (id)userLocation;
- (int)userLocationSource;
- (id)userLocationView;
- (struct CGPoint { float x1; float x2; })userPosition;
- (int)userTrackingMode;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (id)viewForAnnotation:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleCenteringRectInView:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })visibleMapRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectInView:(id)arg1;
- (id)vk_mapLayer;
- (void)willMoveToWindow:(id)arg1;

@end
