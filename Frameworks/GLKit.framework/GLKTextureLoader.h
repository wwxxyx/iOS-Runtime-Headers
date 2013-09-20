/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject {
    EAGLContext *_glContext;
    NSLock *_nsLock;
}

@property(retain) EAGLContext * glContext;
@property(retain) NSLock * nsLock;

+ (id)_textureWithTexture:(id)arg1 error:(id*)arg2;
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;

- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 completionHandler:(id)arg4;
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 completionHandler:(id)arg4;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 completionHandler:(id)arg4;
- (void)dealloc;
- (id)glContext;
- (id)initWithSharegroup:(id)arg1;
- (id)nsLock;
- (void)setGlContext:(id)arg1;
- (void)setNsLock:(id)arg1;
- (void)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 completionHandler:(id)arg4;

@end
