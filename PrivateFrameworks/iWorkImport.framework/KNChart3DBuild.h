/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGLLayer;

@interface KNChart3DBuild : KNAnimationEffect <KNCustomFrameBuildAnimator, KNAnimationPluginArchiving, TSCH3DChartAnimationPlugin> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mDrawingFrame;
    TSDGLLayer *mGLLayer;
}

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (BOOL)requiresSingleTexturePerStage;
+ (id)supportedTypes;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;

- (id).cxx_construct;
- (id)GLLayer;
- (void)animationDidEndWithContext:(id)arg1;
- (double)animationFPS;
- (id)animationInfoForAnimatedBuild:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (int)chartAnimationType;
- (void)dealloc;
- (id)layerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (void)p_applyAttributes:(id)arg1 forRep:(id)arg2 animationLayer:(id)arg3;
- (int)p_buildTypeForAnimatedBuild:(id)arg1;
- (unsigned int)p_deliveryStyleFromAnimatedBuild:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_transformByApplyingTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 centeredAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_transformForAttributes:(id)arg1 rep:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;

@end
