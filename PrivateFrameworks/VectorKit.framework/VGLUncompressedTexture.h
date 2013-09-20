/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLUncompressedTexture : VGLTexture {
    struct CGImageBlockSet { } *_blockSetRef;
    unsigned int _colorFormat;
    BOOL _fastPath;
    struct CGImage { } *_image;
    char *_imageData;
    unsigned int _pixelFormat;
}

- (void)dealloc;
- (BOOL)decodeTexture;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithData:(id)arg1;
- (BOOL)isFlipped;
- (BOOL)loadTexture;
- (struct BRectImp<float> { struct Vec2Imp<float> { float x_1_1_1; float x_1_1_2; } x1; struct Vec2Imp<float> { float x_2_1_1; float x_2_1_2; } x2; })textureCoordinateRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
