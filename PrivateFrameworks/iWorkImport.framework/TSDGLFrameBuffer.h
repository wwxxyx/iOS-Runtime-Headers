/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSDGLFrameBuffer : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _currentTextureIndex;
    unsigned int _desiredTextureIndex;
    unsigned int _framebuffer;
    BOOL _isBound;
    NSArray *_namesArray;
    int _previousFramebuffer;
    BOOL _shouldDeleteTexturesOnTeardown;
    } _size;
    NSArray *_textureConfigs;
    unsigned int _textureCount;
    unsigned int *_textures;
}

@property(readonly) unsigned int currentGLTexture;
@property(readonly) BOOL isBound;
@property BOOL shouldDeleteTexturesOnTeardown;
@property(readonly) struct CGSize { float x1; float x2; } size;

- (unsigned int)GLTextureAtIndex:(unsigned int)arg1;
- (unsigned int)GLTextureNamed:(id)arg1;
- (void)bindFramebuffer;
- (unsigned int)currentGLTexture;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 textureConfigs:(id)arg2;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 textureCount:(unsigned int)arg2;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isBound;
- (void)setCurrentTextureIndex:(unsigned int)arg1;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureToNext;
- (void)setShouldDeleteTexturesOnTeardown:(BOOL)arg1;
- (void)setupFramebufferIfNecessary;
- (BOOL)shouldDeleteTexturesOnTeardown;
- (struct CGSize { float x1; float x2; })size;
- (void)teardown;
- (void)unbindFramebuffer;

@end
