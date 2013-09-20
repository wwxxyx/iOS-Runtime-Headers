/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAnimationCurveSettings : _UISettings {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } _controlPoint1;
    } _controlPoint2;
    unsigned int _curve;
}

@property struct CGPoint { float x1; float x2; } controlPoint1;
@property struct CGPoint { float x1; float x2; } controlPoint2;
@property unsigned int curve;

+ (id)_rowsRelativeToKeyPath:(id)arg1;
+ (id)settingsControllerModule;

- (struct CGPoint { float x1; float x2; })controlPoint1;
- (struct CGPoint { float x1; float x2; })controlPoint2;
- (unsigned int)curve;
- (void)setControlPoint1:(struct CGPoint { float x1; float x2; })arg1;
- (void)setControlPoint2:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCurve:(unsigned int)arg1;
- (void)setDefaultValues;

@end
