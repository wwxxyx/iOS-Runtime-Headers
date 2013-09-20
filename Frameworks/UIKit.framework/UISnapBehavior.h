/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior : UIDynamicBehavior {
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        unsigned int attachedToView : 1; 
        unsigned int dampingSet : 1; 
        unsigned int frequencySet : 1; 
        unsigned int lengthSet : 1; 
    PKPhysicsBody *_anchorBody;
    } _anchorPoint;
    float _damping;
    float _distance;
    float _frequency;
    NSMutableArray *_joints;
    } _stateFlags;
}

@property float damping;

- (void)_associate;
- (void)_dissociate;
- (float)_distance;
- (float)_frequency;
- (void)_setDistance:(float)arg1;
- (void)_setFrequency:(float)arg1;
- (float)damping;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithItem:(id)arg1 snapToPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setDamping:(float)arg1;

@end
