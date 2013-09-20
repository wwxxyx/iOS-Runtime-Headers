/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLSolidColorGroundCoverProgram : VGLProgram {
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _groundColor;
    int _uGroundColor;
    int _uVegetationAlpha;
    int _uVegetationBrightness;
    int _uVegetationSampler;
    float _vegetationAlpha;
    float _vegetationBrightness;
    int _vegetationSampler;
}

@property struct _VGLColor { float x1; float x2; float x3; float x4; } groundColor;
@property float vegetationAlpha;
@property float vegetationBrightness;
@property int vegetationSampler;

+ (id)fragName;
+ (id)vertName;

- (id).cxx_construct;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })groundColor;
- (void)setGroundColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setVegetationAlpha:(float)arg1;
- (void)setVegetationBrightness:(float)arg1;
- (void)setVegetationSampler:(int)arg1;
- (void)setup;
- (float)vegetationAlpha;
- (float)vegetationBrightness;
- (int)vegetationSampler;

@end
