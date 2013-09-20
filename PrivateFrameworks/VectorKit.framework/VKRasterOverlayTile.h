/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableData, VGLBytesTexture;

@interface VKRasterOverlayTile : VKTile {
    struct CGContext { } *_ctx;
    NSMutableData *_imageData;
    float _scale;
    int _size;
    VGLBytesTexture *_texture;
}

- (void)dealloc;
- (struct CGContext { }*)drawContext;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 size:(int)arg2 scale:(float)arg3;
- (BOOL)isEmpty;
- (id)texture;

@end
