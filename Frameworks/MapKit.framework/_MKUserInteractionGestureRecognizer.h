/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <_MKUserInteractionGestureRecognizerTouchObserver>, NSMutableSet;

@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_activeTouches;
    <_MKUserInteractionGestureRecognizerTouchObserver> *_touchObserver;
}

@property <_MKUserInteractionGestureRecognizerTouchObserver> * touchObserver;

- (void)dealloc;
- (void)setTouchObserver:(id)arg1;
- (id)touchObserver;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
