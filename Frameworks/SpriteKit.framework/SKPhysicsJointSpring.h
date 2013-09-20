/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointSpring : SKPhysicsJoint {
    float _damping;
    float _frequency;
}

@property float damping;
@property float frequency;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint { float x1; float x2; })arg3 anchorB:(struct CGPoint { float x1; float x2; })arg4;

- (float)damping;
- (float)frequency;
- (void)setDamping:(float)arg1;
- (void)setFrequency:(float)arg1;

@end
