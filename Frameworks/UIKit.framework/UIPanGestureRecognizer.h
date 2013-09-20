/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _failsPastMaxTouches : 1;
    unsigned int _canPanHorizontally : 1;
    unsigned int _canPanVertically : 1;
    unsigned int _ignoresStationaryTouches : 1;
    } _firstScreenLocation;
    float _hysteresis;
    } _lastScreenLocation;
    unsigned int _lastTouchCount;
    double _lastTouchTime;
    } _lastUnadjustedScreenLocation;
    unsigned int _maximumNumberOfTouches;
    unsigned int _minimumNumberOfTouches;
    NSMutableArray *_movingTouches;
    id _previousVelocitySample;
    NSMutableArray *_touches;
    id _velocitySample;
}

@property(getter=_previousVelocitySample,readonly) UIPanGestureVelocitySample * _previousVelocitySample;
@property(getter=_velocitySample,readonly) UIPanGestureVelocitySample * _velocitySample;
@property unsigned int maximumNumberOfTouches;
@property unsigned int minimumNumberOfTouches;

- (struct CGPoint { float x1; float x2; })_adjustScreenLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_canPanHorizontally;
- (BOOL)_canPanVertically;
- (void)_centroidMovedTo:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2;
- (struct CADoublePoint { double x1; double x2; })_convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromScreenCoordinatesToView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })_convertPoint:(struct CGPoint { float x1; float x2; })arg1 toScreenCoordinatesFromView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(id)arg2;
- (float)_hysteresis;
- (BOOL)_ignoresStationaryTouches;
- (int)_lastTouchCount;
- (struct UIOffset { float x1; float x2; })_offsetInViewFromScreenLocation:(struct CGPoint { float x1; float x2; })arg1 toScreenLocation:(struct CGPoint { float x1; float x2; })arg2;
- (id)_previousVelocitySample;
- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_removeHysteresisFromTranslation;
- (void)_resetGestureRecognizer;
- (void)_resetVelocitySamples;
- (void)_setCanPanHorizontally:(BOOL)arg1;
- (void)_setCanPanVertically:(BOOL)arg1;
- (void)_setHysteresis:(float)arg1;
- (void)_setIgnoresStationaryTouches:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_shiftPanLocationToNewScreenLocation:(struct CGPoint { float x1; float x2; })arg1 lockingToAxis:(int)arg2;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (BOOL)_updateMovingTouchesArraySavingOldArray:(id*)arg1;
- (id)_velocitySample;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (BOOL)_willScrollX;
- (BOOL)_willScrollY;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)failsPastMaxTouches;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (unsigned int)maximumNumberOfTouches;
- (unsigned int)minimumNumberOfTouches;
- (unsigned int)numberOfTouches;
- (void)setFailsPastMaxTouches:(BOOL)arg1;
- (void)setMaximumNumberOfTouches:(unsigned int)arg1;
- (void)setMinimumNumberOfTouches:(unsigned int)arg1;
- (void)setTranslation:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })translationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })velocityInView:(id)arg1;

@end
