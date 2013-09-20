/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLContext, VGLScreenCanvas, VGLTexture;

@interface VGLFramebuffer : NSObject {
    VGLScreenCanvas *_canvas;
    VGLContext *_context;
    BOOL _createdWithDepth;
    BOOL _createdWithStencil;
    unsigned int _depthbuffer;
    unsigned int _framebuffer;
    int _height;
    BOOL _isPresentable;
    int _magicFramebufferToken;
    unsigned int _multisampleDepthbuffer;
    unsigned int _multisampleFramebuffer;
    BOOL _multisampleModeCurrent;
    BOOL _multisampleModeNext;
    unsigned int _multisampleRenderbuffer;
    unsigned int _renderbuffer;
    VGLTexture *_texture;
    BOOL _usingMagicFramebuffer;
    int _width;
}

@property VGLScreenCanvas * canvas;
@property VGLContext * context;
@property(readonly) unsigned int framebuffer;
@property(readonly) int height;
@property(readonly) BOOL isPresentable;
@property BOOL useMultisampling;
@property(readonly) int width;

- (void)_bindFramebuffers;
- (BOOL)_createMultisampleFramebufferWithDepth:(BOOL)arg1 stencil:(BOOL)arg2;
- (BOOL)_createResolveFramebuffer;
- (BOOL)_createSecondaryFramebufferWithDepth:(BOOL)arg1 stencil:(BOOL)arg2;
- (void)_deallocMultisampleFramebuffer;
- (void)_deallocResolveFramebuffer;
- (void)_deallocSecondaryFramebuffer;
- (id)canvas;
- (id)context;
- (void)dealloc;
- (void)deleteFramebuffers;
- (void)deleteResolveFramebuffers;
- (void)deleteUnusedFramebuffers;
- (void)finalize;
- (unsigned int)framebuffer;
- (int)height;
- (id)initWithContext:(id)arg1 canvas:(id)arg2 depth:(BOOL)arg3 stencil:(BOOL)arg4 multisampling:(BOOL)arg5;
- (id)initWithContext:(id)arg1 canvas:(id)arg2;
- (id)initWithContext:(id)arg1 texture:(id)arg2 depth:(BOOL)arg3 stencil:(BOOL)arg4;
- (BOOL)isPresentable;
- (void)makeTarget;
- (void)preloadMultisampleFramebuffer;
- (void)setCanvas:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setUseMultisampling:(BOOL)arg1;
- (BOOL)useMultisampling;
- (int)width;

@end
