/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGetBoundsPipeline, TSCH3DLabelsRendererTransforms, TSUMutablePointerSet;

@interface TSCH3DChartBoundsLayoutSceneDelegate : NSObject <TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate> {
    struct map<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds, std::__1::less<TSCH3D::SceneObjectSharedPointer>, std::__1::allocator<std::__1::pair<const TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds> > > { 
        struct __tree<std::__1::pair<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>, std::__1::__map_value_compare<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds, std::__1::less<TSCH3D::SceneObjectSharedPointer>, true>, std::__1::allocator<std::__1::pair<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds> > > { 
            struct __tree_node<std::__1::pair<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<TSCH3D::SceneObjectSharedPointer, TSCH3D::ActiveLabelsTypeBounds, std::__1::less<TSCH3D::SceneObjectSharedPointer>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    struct ActiveLabelsTypeBounds { int x1; struct ObjcSharedPtr<NSMutableIndexSet> { id x_2_1_1; } x2; struct map<int, TSCH3D::CachedLabelBoundsArray, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSCH3D::CachedLabelBoundsArray> > > { struct __tree<std::__1::pair<int, TSCH3D::CachedLabelBoundsArray>, std::__1::__map_value_compare<int, TSCH3D::CachedLabelBoundsArray, std::__1::less<int>, true>, std::__1::allocator<std::__1::pair<int, TSCH3D::CachedLabelBoundsArray> > > { struct __tree_node<std::__1::pair<int, TSCH3D::CachedLabelBoundsArray>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<int, TSCH3D::CachedLabelBoundsArray>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, TSCH3D::CachedLabelBoundsArray, std::__1::less<int>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; } *mActiveBounds;
    TSUMutablePointerSet *mDebugCachedSceneObjects;
    BOOL mLabelsDidOverride;
    BOOL mLabelsHaveCache;
    TSCH3DGetBoundsPipeline *mPipeline;
    } mSceneObjectLabelsBounds;
    TSCH3DLabelsRendererTransforms *mTransforms;
}

+ (id)sceneDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didEndProcessingSceneObject:(id)arg1;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didRunForScene:(id)arg1 pipeline:(id)arg2;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (id)init;
- (id)interestedClasses;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(int)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (void)p_addAllActiveLabelsBounds;
- (void)p_extendProjectedBoundsForCachedLabelBounds:(const struct CachedLabelBounds { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_2_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct ObjcSharedPtr<NSString> { id x_4_1_1; } x4; }*)arg1 offset:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg2;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForSceneObject:(id)arg1;
- (void)setOffset:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 labelType:(int)arg2 boundsIndex:(int)arg3 forSceneObject:(id)arg4;
- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute { }*)arg1 sceneObject:(id)arg2 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { id x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_3_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_3_1_2; } x3; id x4; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_5_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_5_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_5_1_3; } x5; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_6_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_6_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_6_1_3; } x6; unsigned int x7; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_8_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_8_1_2; } x8; float x9; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_10_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_10_1_2; } x10; float x11; }*)arg3;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (BOOL)willProcessElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willRenderElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (void)willRunForScene:(id)arg1 pipeline:(id)arg2;
- (BOOL)willSubmitElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { id x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_3_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_3_1_2; } x3; id x4; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_5_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_5_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_5_1_3; } x5; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_6_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_6_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_6_1_3; } x6; unsigned int x7; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_8_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_8_1_2; } x8; float x9; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_10_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_10_1_2; } x10; float x11; }*)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(int)arg2 alignment:(unsigned int)arg3 elementIndex:(unsigned int)arg4 forSceneObject:(id)arg5;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;

@end
