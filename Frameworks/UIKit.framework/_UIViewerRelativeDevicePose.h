/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
    float _planarRotationAngle;
    } _viewerOffset;
}

@property float planarRotationAngle;
@property struct UIOffset { float x1; float x2; } viewerOffset;

- (struct UIOffset { float x1; float x2; })_acceleratedOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg1 accelerationBoostFactor:(struct CGPoint { float x1; float x2; })arg2;
- (id)_acceleratedOutputRange;
- (void)_setAcceleration:(struct CGPoint { float x1; float x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)planarRotationAngle;
- (void)setPlanarRotationAngle:(float)arg1;
- (void)setViewerOffset:(struct UIOffset { float x1; float x2; })arg1;
- (struct UIOffset { float x1; float x2; })viewerOffset;

@end
