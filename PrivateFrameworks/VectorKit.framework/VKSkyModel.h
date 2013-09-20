/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLRenderState, VKMapModel, VKStylesheet;

@interface VKSkyModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _fillColor;
    } _horizonColor;
    VKMapModel *_mapModel;
    VGLRenderState *_renderState;
    float _skyStartOffset;
}

@property(readonly) struct _VGLColor { float x1; float x2; float x3; float x4; } fillColor;
@property(readonly) struct _VGLColor { float x1; float x2; float x3; float x4; } horizonColor;
@property VKMapModel * mapModel;
@property(readonly) VKStylesheet * stylesheet;

+ (BOOL)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void)dealloc;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })fillColor;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })horizonColor;
- (id)init;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (id)mapModel;
- (void)setMapModel:(id)arg1;
- (id)stylesheet;
- (void)stylesheetDidChange;
- (unsigned int)supportedRenderPasses;

@end
