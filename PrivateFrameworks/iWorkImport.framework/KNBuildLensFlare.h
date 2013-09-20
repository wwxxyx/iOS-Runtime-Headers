/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray;

@interface KNBuildLensFlare : KNAnimationEffect <KNChunkableBuildAnimator> {
    float mGlobalDuration;
    float mGlobalScale;
    NSMutableArray *mLayerToOldParentArray;
}

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (void)addLayerWithImageRef:(struct CGImage { }*)arg1 toResultDictionary:(id)arg2 withLayer:(id)arg3 minScale:(float)arg4 maxScale:(float)arg5 opacity:(float)arg6 translation:(float)arg7 rotation:(float)arg8 direction:(unsigned int)arg9;
- (void)animationDidEndWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;
- (id)p_layerWithImage:(struct CGImage { }*)arg1 scale:(float)arg2 centeredAt:(struct CGPoint { float x1; float x2; })arg3;
- (float)stretchPercent:(float)arg1 toFill:(float)arg2;

@end
