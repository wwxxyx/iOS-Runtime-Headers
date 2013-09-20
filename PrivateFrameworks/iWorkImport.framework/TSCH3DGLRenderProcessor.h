/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGLStatistics, TSCH3DResource, TSCH3DSession, TSCH3DShaderProgramHandle, TSCH3DShaderResource;

@interface TSCH3DGLRenderProcessor : TSCH3DRetargetRenderProcessor <TSCH3DSharegroupDelegate, TSCH3DShaderDataUploader, TSCH3DShaderStateUpdater> {
    struct StateStack<TSCH3D::RenderState, 10> { 
        unsigned int mIndex; 
        struct RenderState { 
            boolmBlend; 
            int blendMode; 
            booldepthTest; 
            booldepthMask; 
            boolculling; 
            boolcullBack; 
            boolpolygonOffset; 
            float polygonOffsetFactor; 
            float polygonOffsetUnits; 
            struct EnableClipDistances { 
                struct array<signed char, 8> { 
                    BOOL __elems_[8]; 
                } states; 
            } enableClipDistances; 
        } mCurrent; 
        struct RenderState { 
            boolmBlend; 
            int blendMode; 
            booldepthTest; 
            booldepthMask; 
            boolculling; 
            boolcullBack; 
            boolpolygonOffset; 
            float polygonOffsetFactor; 
            float polygonOffsetUnits; 
            struct EnableClipDistances { 
                struct array<signed char, 8> { 
                    BOOL __elems_[8]; 
                } states; 
            } enableClipDistances; 
        } mStack[10]; 
    struct RenderHints { 
        struct TextureSizeHint { 
            int loadOptimizedMipmaps; 
            struct tvec2<int> { 
                union { 
                    int x; 
                    int r; 
                    int s; 
                } ; 
                union { 
                    int y; 
                    int g; 
                    int t; 
                } ; 
            } sizeLODHint; 
        } textureSizeHint; 
    TSCH3DShaderProgramHandle *mCurrentShaderHandle;
    int mDiffuseIndex;
    TSCH3DResource *mGeometry;
    } mRenderHints;
    } mRenderStateStack;
    TSCH3DSession *mSession;
    TSCH3DShaderResource *mShader;
    TSCH3DGLStatistics *mStats;
}

+ (id)processorWithOriginal:(id)arg1;
+ (id)processorWithSession:(id)arg1;

- (id).cxx_construct;
- (int)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg3;
- (void)beginFrame;
- (BOOL)canRenderPrefilteredLines;
- (id)combinationProcessor;
- (void)dealloc;
- (void)didFlushCache;
- (void)endFrame;
- (id)initWithSession:(id)arg1;
- (void)injectDefaults:(id)arg1;
- (id)matrixProcessor;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)mv;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })mvp;
- (id)objectStateProcessor;
- (struct StateStack<TSCH3D::ObjectState, 6> { unsigned int x1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_2_1; } x_2_1_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_2_1; struct Lookup {} *x_2_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_3_1; } x_2_2_3; } x_2_1_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_3_1; } x_3_2_1[8]; } x_2_1_3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_3_1; int x_1_3_2; BOOL x_1_3_3; BOOL x_1_3_4; BOOL x_1_3_5; int x_1_3_6; struct TextureSizeHint { int x_7_4_1; struct tvec2<int> { union { int x_1_6_1; int x_1_6_2; int x_1_6_3; } x_2_5_1; union { int x_2_6_1; int x_2_6_2; int x_2_6_3; } x_2_5_2; } x_7_4_2; } x_1_3_7; BOOL x_1_3_8; } x_4_2_1[8]; } x_2_1_4; } x2; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_2_1; } x_3_1_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_2_1; struct Lookup {} *x_2_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_3_1; } x_2_2_3; } x_3_1_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_3_1; } x_3_2_1[8]; } x_3_1_3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_3_1; int x_1_3_2; BOOL x_1_3_3; BOOL x_1_3_4; BOOL x_1_3_5; int x_1_3_6; struct TextureSizeHint { int x_7_4_1; struct tvec2<int> { union { int x_1_6_1; int x_1_6_2; int x_1_6_3; } x_2_5_1; union { int x_2_6_1; int x_2_6_2; int x_2_6_3; } x_2_5_2; } x_7_4_2; } x_1_3_7; BOOL x_1_3_8; } x_4_2_1[8]; } x_3_1_4; } x3[6]; }*)objectStateStack;
- (void)p_drawArrays:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;
- (void)p_drawElements:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;
- (void)p_drawPrimitive:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;
- (unsigned int)p_modeFromPrimitiveInfo:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;
- (void)popRenderState;
- (void)popState;
- (void)postInject:(id)arg1;
- (id)program;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)projection;
- (void)pushRenderState;
- (struct RenderHints { struct TextureSizeHint { int x_1_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; })renderHints;
- (struct RenderState { boolx1; int x2; boolx3; boolx4; boolx5; boolx6; boolx7; float x8; float x9; struct EnableClipDistances { struct array<signed char, 8> { BOOL x_1_2_1[8]; } x_10_1_1; } x10; })renderState;
- (void)resetBuffers;
- (void)setRenderHints:(const struct RenderHints { struct TextureSizeHint { int x_1_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; }*)arg1;
- (void)setRenderState:(const struct RenderState { boolx1; int x2; boolx3; boolx4; boolx5; boolx6; boolx7; float x8; float x9; struct EnableClipDistances { struct array<signed char, 8> { BOOL x_1_2_1[8]; } x_10_1_1; } x10; }*)arg1;
- (void)submit:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;
- (BOOL)supportsClipDistances;
- (int)texture:(id)arg1 attributes:(const struct TextureAttributes { int x1; int x2; BOOL x3; BOOL x4; BOOL x5; int x6; struct TextureSizeHint { int x_7_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_7_1_2; } x7; BOOL x8; }*)arg2;
- (void)uniform:(id)arg1 ivec1:(const struct tvec1<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; }*)arg2;
- (void)uniform:(id)arg1 ivec1s:(const struct vector<glm::detail::tvec1<int>, std::__1::allocator<glm::detail::tvec1<int> > > { struct tvec1<int> {} *x1; struct tvec1<int> {} *x2; struct __compressed_pair<glm::detail::tvec1<int> *, std::__1::allocator<glm::detail::tvec1<int> > > { struct tvec1<int> {} *x_3_1_1; } x3; }*)arg2;
- (void)uniform:(id)arg1 ivec2:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)uniform:(id)arg1 ivec2s:(const struct vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > > { struct tvec2<int> {} *x1; struct tvec2<int> {} *x2; struct __compressed_pair<glm::detail::tvec2<int> *, std::__1::allocator<glm::detail::tvec2<int> > > { struct tvec2<int> {} *x_3_1_1; } x3; }*)arg2;
- (void)uniform:(id)arg1 ivec3:(const struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; }*)arg2;
- (void)uniform:(id)arg1 ivec3s:(const struct vector<glm::detail::tvec3<int>, std::__1::allocator<glm::detail::tvec3<int> > > { struct tvec3<int> {} *x1; struct tvec3<int> {} *x2; struct __compressed_pair<glm::detail::tvec3<int> *, std::__1::allocator<glm::detail::tvec3<int> > > { struct tvec3<int> {} *x_3_1_1; } x3; }*)arg2;
- (void)uniform:(id)arg1 ivec4:(const struct tvec4<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; union { int x_4_1_1; int x_4_1_2; int x_4_1_3; } x4; }*)arg2;
- (void)uniform:(id)arg1 ivec4s:(const struct vector<glm::detail::tvec4<int>, std::__1::allocator<glm::detail::tvec4<int> > > { struct tvec4<int> {} *x1; struct tvec4<int> {} *x2; struct __compressed_pair<glm::detail::tvec4<int> *, std::__1::allocator<glm::detail::tvec4<int> > > { struct tvec4<int> {} *x_3_1_1; } x3; }*)arg2;
- (void)uniform:(id)arg1 mat2:(const struct tmat2x2<float> { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1[2]; }*)arg2;
- (void)uniform:(id)arg1 mat3:(const struct tmat3x3<float> { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1[3]; }*)arg2;
- (void)uniform:(id)arg1 mat4:(const struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg2;
- (void)uniform:(id)arg1 vec1:(const struct tvec1<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; }*)arg2;
- (void)uniform:(id)arg1 vec1s:(const struct vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float> > > { struct tvec1<float> {} *x1; struct tvec1<float> {} *x2; struct __compressed_pair<glm::detail::tvec1<float> *, std::__1::allocator<glm::detail::tvec1<float> > > { struct tvec1<float> {} *x_3_1_1; } x3; }*)arg2;
- (void)uniform:(id)arg1 vec2:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2;
- (void)uniform:(id)arg1 vec2s:(const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)arg2;
- (void)uniform:(id)arg1 vec3:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg2;
- (void)uniform:(id)arg1 vec3s:(const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)arg2;
- (void)uniform:(id)arg1 vec4:(const struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg2;
- (void)uniform:(id)arg1 vec4s:(const struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > { struct tvec4<float> {} *x1; struct tvec4<float> {} *x2; struct __compressed_pair<glm::detail::tvec4<float> *, std::__1::allocator<glm::detail::tvec4<float> > > { struct tvec4<float> {} *x_3_1_1; } x3; }*)arg2;
- (int)uniformLocationOfVariable:(id)arg1;
- (void)updateRenderState;
- (BOOL)updateShader;
- (void)updateVertexShaderStates;
- (BOOL)uploadShaderAttributes:(id)arg1 primitiveInfo:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg2;
- (BOOL)uploadShaderData:(id)arg1 primitiveInfo:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg2;
- (BOOL)uploadShaderTextures;
- (void)uploadShaderUniforms;

@end
