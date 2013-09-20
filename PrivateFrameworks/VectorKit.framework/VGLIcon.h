/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLUncompressedTexture, VKImage;

@interface VGLIcon : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    int _iconTag;
    VKImage *_image;
    } _textureRect;
}

@property(readonly) int iconTag;
@property(readonly) VGLUncompressedTexture * texture;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } textureRect;
@property(readonly) float verticalPadding;

- (id).cxx_construct;
- (void)dealloc;
- (int)iconTag;
- (id)initWithImage:(id)arg1;
- (id)initWithPackedIcon:(id)arg1 imageAtlas:(id)arg2 quadSize:(struct CGSize { float x1; float x2; })arg3;
- (BOOL)isCityDot;
- (struct { float x1; float x2; float x3; float x4; })quadAtPixel:(struct Vec2Imp<float> { float x1; float x2; })arg1;
- (struct { float x1; float x2; float x3; float x4; })rectAtPixel:(struct Vec2Imp<float> { float x1; float x2; })arg1;
- (void)setIconTagFromName:(id)arg1;
- (id)texture;
- (struct BRectImp<float> { struct Vec2Imp<float> { float x_1_1_1; float x_1_1_2; } x1; struct Vec2Imp<float> { float x_2_1_1; float x_2_1_2; } x2; })textureCoordinateRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textureRect;
- (float)verticalPadding;

@end
