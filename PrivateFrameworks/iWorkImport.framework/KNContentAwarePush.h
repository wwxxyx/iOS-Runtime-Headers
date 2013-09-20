/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNMotionBlurAnimationPluginWrapper;

@interface KNContentAwarePush : KNAnimationEffect <KNContentAwareTransitionAnimator, KNContentAwareFrameAnimator> {
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (BOOL)isCharacterAwareEffect;
+ (id)localizedMenuString:(int)arg1;
+ (int)rendererTypeForCapabilities:(id)arg1;
+ (BOOL)requiresBullets;
+ (BOOL)requiresMagicMoveTextures;
+ (BOOL)requiresPerspectiveTransform;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;
- (void)renderFrameWithContext:(id)arg1;

@end
