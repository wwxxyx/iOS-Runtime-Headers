/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLPolygonProgram : VGLProgram {
    float _alpha;
    float _scale;
    int _textureSampler;
    int _uAlpha;
    int _uScale;
    int _uTextureSampler;
}

@property float alpha;
@property float scale;
@property int textureSampler;

+ (id)fragName;
+ (id)vertName;

- (float)alpha;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setTextureSampler:(int)arg1;
- (void)setup;
- (int)textureSampler;

@end
