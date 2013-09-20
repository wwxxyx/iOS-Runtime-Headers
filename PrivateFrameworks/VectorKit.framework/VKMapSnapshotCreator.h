/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKImageCanvas, VKMapCameraController, VKMapModel;

@interface VKMapSnapshotCreator : NSObject <VKMapModelDelegate> {
    VKMapCameraController *_cameraController;
    VKImageCanvas *_canvas;
    id _completion;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;
    VKMapModel *_mapModel;
    int _mapType;
}

@property int labelScaleFactor;
@property BOOL localizeLabels;
@property int mapType;
@property BOOL showsBuildings;
@property BOOL showsPointsOfInterest;
@property(readonly) struct CGSize { float x1; float x2; } size;

+ (BOOL)supportsHighResolutionSnapshots;
+ (BOOL)supportsSharingThumbnails;

- (void)_mapkit_configureFromDefaults;
- (void)cancel;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 homeQueue:(id)arg3;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (int)labelScaleFactor;
- (BOOL)localizeLabels;
- (void)lookAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapModel:(id)arg1 didAddAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
- (id)mapModel:(id)arg1 markerForAnnotation:(id)arg2;
- (void)mapModel:(id)arg1 needsPanByOffset:(struct CGPoint { float x1; float x2; })arg2 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelWillBecomFullyDrawn:(id)arg1;
- (double)mapModelZoomScale:(id)arg1;
- (int)mapType;
- (void)renderSnapshot:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setLabelScaleFactor:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(int)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (struct CGSize { float x1; float x2; })size;

@end
