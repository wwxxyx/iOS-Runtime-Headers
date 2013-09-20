/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDShapeLayout;

@interface TSDShapeLineSegmentKnobTracker : TSDKnobTracker <TSDLineTrackerModifiers> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    BOOL mBeganAlignmentOperation;
    } mNewKnobCenter;
    float mOriginalDistance;
    } mOriginalFixedPoint;
    } mOriginalMiddlePoint;
    } mOriginalPathBoundsOrigin;
    } mOriginalTransformInRoot;
    BOOL mResizeFromCenter;
    TSDShapeLayout *mResizingLayout;
    BOOL mSnapAngles;
    BOOL mSnapEnabled;
    BOOL mSnappedToAspectRatio;
}

@property BOOL resizeFromCenter;
@property BOOL snapAngles;
@property BOOL snapEnabled;

- (void)beginMovingKnob;
- (id)currentGeometry;
- (void)dealloc;
- (BOOL)didChangeGeometry;
- (void)endMovingKnob;
- (id)initWithRep:(id)arg1 knob:(id)arg2;
- (void)moveKnobToCanvasPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)moveKnobToRepPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)p_HUDLabelText;
- (void)p_cancelDelayedHUDAndGuides;
- (id)p_currentGeometry;
- (void)p_enforceMinimumLength;
- (void)p_hideHUD;
- (void)p_showHUDAndGuidesAfterDelay:(id)arg1;
- (void)p_updateHUD;
- (void)p_validateLayout;
- (BOOL)resizeFromCenter;
- (void)setResizeFromCenter:(BOOL)arg1;
- (void)setSnapAngles:(BOOL)arg1;
- (void)setSnapEnabled:(BOOL)arg1;
- (id)shapeRep;
- (BOOL)shouldDisplayGuides;
- (BOOL)shouldHideOtherKnobs;
- (BOOL)shouldScaleGeometry;
- (BOOL)snapAngles;
- (BOOL)snapEnabled;

@end
