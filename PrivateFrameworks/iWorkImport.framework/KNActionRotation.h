/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNActionRotation : KNAnimationEffect <KNActionEffectBuildAnimator, KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames> {
}

+ (id)actionEffectStyle;
+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (id)obsoleteAnimationNames;
+ (float)p_angleFromAttributes:(id)arg1;
+ (BOOL)requiresHighQualityTextures;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;

- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;
- (void)p_addAnimationForLayer:(id)arg1 duration:(double)arg2 fromAngle:(float)arg3 toAngle:(float)arg4 acceleration:(id)arg5 toAnimationDictionary:(id)arg6;

@end
