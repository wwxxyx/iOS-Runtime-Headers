/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper;

@interface KNTransitionCube : KNAnimationEffect <KNTransitionAnimator, KNFrameAnimator, KNAnimationPluginArchiving> {
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
    KNAnimParameterGroup *_parameterGroup;
}

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (int)rendererTypeForCapabilities:(id)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;
- (id)p_animationsForStartAngle:(float)arg1 endAngle:(float)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 duration:(double)arg4 direction:(unsigned int)arg5 hasBounce:(BOOL)arg6;
- (id)p_interpolatedAnimationsWithStartAngle:(float)arg1 endAngle:(float)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 duration:(double)arg4 direction:(unsigned int)arg5 beginTime:(double)arg6;
- (id)p_pullbackAnimationFromRotateAnimation:(id)arg1 startPullbackPercent:(float)arg2 endPullbackPercent:(float)arg3 cubeCenter:(float)arg4 pullbackAmount:(float)arg5 duration:(double)arg6;
- (float)p_pullbackPercentFromRotateAnimation:(id)arg1 atPercent:(float)arg2;
- (void)renderFrameWithContext:(id)arg1;

@end
