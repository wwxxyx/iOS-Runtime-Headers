/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties {
    float mDepthGapFactor;
    float mDepthLimitFactor;
    unsigned int mMaxLimitingSeries;
}

@property(readonly) float depthLimitFactor;
@property(readonly) float interSetDepthGapProperty;
@property(readonly) int seriesCount;

- (BOOL)applyElementTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned int x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long x_3_2_1; } x_1_1_3; } x1; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_2_1_1; unsigned int x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long x_3_2_1; } x_2_1_3; } x2; }*)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor { id x1; id x2; }*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)depthForScene:(id)arg1;
- (float)depthLimitFactor;
- (float)interSetDepthGapProperty;
- (void)reset;
- (void)resetWithEnumerator:(id)arg1 layoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })arg2;
- (int)seriesCount;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })seriesSize;
- (void)updateLabels;

@end
