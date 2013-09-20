/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNShimmerObjectSystem, TSDGLDataBufferAttribute;

@interface KNShimmerParticleSystem : KNShimmerSystem {
    TSDGLDataBufferAttribute *mObjectDataBufferAttributeColor;
    TSDGLDataBufferAttribute *mObjectDataBufferAttributePosition;
    TSDGLDataBufferAttribute *mObjectDataBufferAttributeSpeed;
    KNShimmerObjectSystem *mObjectSystem;
}

@property TSDGLDataBufferAttribute * objectDataBufferAttributeColor;
@property TSDGLDataBufferAttribute * objectDataBufferAttributePosition;
@property TSDGLDataBufferAttribute * objectDataBufferAttributeSpeed;
@property KNShimmerObjectSystem * objectSystem;
@property unsigned int particleCount;
@property unsigned int visibleParticleCount;

+ (id)newDataBufferAttributeWithName:(id)arg1;
+ (BOOL)willOverrideColors;
+ (BOOL)willOverrideStartingPoints;

- (struct { float x1; float x2; float x3; float x4; })colorAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawGLSLWithPercent:(float)arg1 opacity:(float)arg2 rotation:(float)arg3 clockwise:(BOOL)arg4;
- (struct { float x1; float x2; })lifeSpanAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)objectDataBufferAttributeColor;
- (id)objectDataBufferAttributePosition;
- (id)objectDataBufferAttributeSpeed;
- (id)objectSystem;
- (struct { float x1; float x2; })p_hullPoint:(struct { float x1; float x2; })arg1 inVertexRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)p_setupVertexData;
- (float)scaleAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setObjectDataBufferAttributeColor:(id)arg1;
- (void)setObjectDataBufferAttributePosition:(id)arg1;
- (void)setObjectDataBufferAttributeSpeed:(id)arg1;
- (void)setObjectSystem:(id)arg1;
- (struct { float x1; float x2; float x3; })speedAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })startingPointAtIndexPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
