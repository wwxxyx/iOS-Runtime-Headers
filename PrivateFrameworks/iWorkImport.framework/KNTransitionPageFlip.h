/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;

@interface KNTransitionPageFlip : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving> {
    NSArray *_colorBufferAttributes;
    TSDGLDataBuffer *_colorDataBuffer;
    unsigned int _colorNormalAttributeIndex;
    unsigned int _colorPositionAttributeIndex;
    TSDGLShader *_colorShader;
    unsigned int _colorTexCoordAttributeIndex;
    TSDGLMotionBlurEffect *_motionBlurEffect;
    int _numPoints;
    TSDGLDataBuffer *_quadDataBuffer;
    TSDGLShader *_quadShader;
    BOOL _shouldDrawMotionBlur;
    NSArray *_velocityBufferAttributes;
    TSDGLDataBuffer *_velocityDataBuffer;
    unsigned int _velocityPositionAttributeIndex;
    unsigned int _velocityPrevPositionAttributeIndex;
    TSDGLShader *_velocityShader;
}

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)createArrays:(id)arg1;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;
- (void)p_drawFlipWithVelocity:(BOOL)arg1 percent:(float)arg2 texture:(id)arg3;
- (void)p_teardown;
- (void)renderFrameWithContext:(id)arg1;
- (void)update:(id)arg1 withPercent:(float)arg2 direction:(unsigned int)arg3;

@end
