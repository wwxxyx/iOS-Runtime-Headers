/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLRenderState, VKImage;

@interface VKImageAnnotationMarkerLayer : VKAnnotationMarkerLayer {
    union { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    struct { 
        double v[4][4]; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    float _brightness;
    } _color;
    BOOL _drawsOnGround;
    BOOL _hasCustomModelMatrix;
    BOOL _hasCustomShaderMatrix;
    VKImage *_image;
    VGLRenderState *_imageRenderState;
    BOOL _isMask;
    } _modelMatrix;
    float _opacity;
    double _rotationRadians;
    float _scale;
    } _shaderMatrix;
    BOOL _shouldDraw;
}

@property float brightness;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } color;
@property BOOL drawsOnGround;
@property BOOL isMask;
@property float opacity;
@property double rotationRadians;
@property float scale;

- (id).cxx_construct;
- (id)_configuredProgramWithContext:(id)arg1;
- (float)brightness;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })color;
- (void)dealloc;
- (void)drawWithContext:(id)arg1;
- (BOOL)drawsOnGround;
- (id)init;
- (BOOL)isMask;
- (void)layoutWithContext:(id)arg1;
- (float)opacity;
- (double)rotationRadians;
- (float)scale;
- (void)setBrightness:(float)arg1;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setDrawsOnGround:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setIsMask:(BOOL)arg1;
- (void)setOpacity:(float)arg1;
- (void)setRotationRadians:(double)arg1;
- (void)setScale:(float)arg1;
- (BOOL)shouldSnapToPixelsWithContext:(id)arg1;
- (void)updateWithStyle:(id)arg1;

@end
