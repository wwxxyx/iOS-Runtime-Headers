/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray, VGLRenderState;

@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer> {
    unsigned int _level;
    VGLRenderState *_renderState;
    NSMutableArray *_sortedTiles;
}

- (void)dealloc;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (id)initWithLevel:(unsigned int)arg1;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (void)reset;
- (unsigned int)supportedRenderPasses;

@end
