/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLDepthDependentBuildingProgram : VGLBuildingProgram {
    float _maxDepth;
    float _minDepth;
    int _uMaxDepth;
    int _uMinDepth;
}

@property float maxDepth;
@property float minDepth;

+ (id)fragName;
+ (id)vertName;

- (float)maxDepth;
- (float)minDepth;
- (void)setMaxDepth:(float)arg1;
- (void)setMinDepth:(float)arg1;
- (void)setup;

@end
