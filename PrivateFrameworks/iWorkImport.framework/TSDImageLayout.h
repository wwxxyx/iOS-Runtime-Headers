/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDBezierPath, TSDImageAdjustments, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout, TSDPathSource<TSDSmartPathSource>;

@interface TSDImageLayout : TSDMediaLayout <TSDShapeControlLayout> {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    TSDImageAdjustments *mDynamicImageAdjustments;
    TSDInfoGeometry *mDynamicInfoGeometry;
    int mHasAlpha;
    TSDLayoutGeometry *mImageGeometry;
    BOOL mInInstantAlphaMode;
    BOOL mIsUpdatingImageAdjustments;
    } mLayoutToImageTransform;
    } mLayoutToMaskTransform;
    int mMaskEditMode;
    BOOL mMaskIntersectsImage;
    TSDMaskLayout *mMaskLayout;
    struct CGPath { } *mPathToStroke;
    BOOL mScalingInMaskMode;
    TSDBezierPath *mTracedPath;
}

@property(getter=isInInstantAlphaMode,readonly) BOOL inInstantAlphaMode;
@property(getter=isInMaskEditMode,readonly) BOOL inMaskEditMode;
@property(getter=isInMaskScaleMode,readonly) BOOL inMaskScaleMode;
@property(readonly) BOOL isDraggingInMaskEditMode;
@property(readonly) BOOL isResizingInMaskEditMode;
@property(readonly) BOOL isRotatingInMaskEditMode;
@property(readonly) int maskEditMode;
@property(readonly) int maskEditModeForDragging;
@property(readonly) int maskEditModeForLayoutState;
@property(readonly) int maskEditModeForResizing;
@property(readonly) int maskEditModeForRotating;
@property(readonly) TSDPathSource<TSDSmartPathSource> * smartPathSource;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (void)beginDrag;
- (void)beginDynamicOperation;
- (void)beginEditingImageInMaskEditMode;
- (void)beginEditingMaskInMaskEditMode;
- (void)beginInstantAlphaMode;
- (void)beginResize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (struct CGPoint { float x1; float x2; })centerForConnecting;
- (struct CGPoint { float x1; float x2; })centerForRotation;
- (struct CGPoint { float x1; float x2; })centerForRotationInMaskMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeAlignmentFrameInRoot:(BOOL)arg1;
- (id)computeLayoutGeometry;
- (id)currentInfoGeometry;
- (void)dealloc;
- (void)dragBy:(struct CGPoint { float x1; float x2; })arg1;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)endDrag;
- (void)endDynamicOperation;
- (void)endInstantAlphaMode;
- (void)endMaskEditMode;
- (id)geometryForTransforming;
- (BOOL)hasAlpha;
- (BOOL)hasMaskingPath;
- (id)i_computeWrapPath;
- (BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
- (id)imageAdjustments;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })imageDataToVisualSizeTransform;
- (id)imageGeometry;
- (id)imageGeometryInRoot;
- (id)imageInfo;
- (id)initWithInfo:(id)arg1;
- (id)inspectorGeometry;
- (BOOL)isDraggingInMaskEditMode;
- (BOOL)isDynamicallyChangingImageAdjustments;
- (BOOL)isInInstantAlphaMode;
- (BOOL)isInMaskEditMode;
- (BOOL)isInMaskScaleMode;
- (BOOL)isInvisible;
- (BOOL)isResizingInMaskEditMode;
- (BOOL)isRotatingInMaskEditMode;
- (id)layoutGeometryFromInfo;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutToImageTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutToMaskTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutTransformInInfoSpace:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (int)maskEditMode;
- (int)maskEditModeForDragging;
- (int)maskEditModeForLayoutState;
- (int)maskEditModeForResizing;
- (int)maskEditModeForRotating;
- (BOOL)maskIntersectsImage;
- (id)maskLayout;
- (void)maskModeScaleDidBegin;
- (void)maskModeScaleDidEnd;
- (void)maskWasApplied;
- (void)maskWasReset;
- (void)offsetGeometryBy:(struct CGPoint { float x1; float x2; })arg1;
- (id)originalImageGeometry;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pathBoundsWithoutStroke;
- (struct CGPath { }*)pathToStroke;
- (void)processChangedProperty:(int)arg1;
- (BOOL)resizeMayChangeAspectRatio;
- (void)resizeWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 asChild:(BOOL)arg2;
- (BOOL)shouldDisplayGuides;
- (BOOL)shouldRenderFrameStroke;
- (struct CGSize { float x1; float x2; })sizeOfFrameRectIncludingCoverage;
- (id)smartPathSource;
- (BOOL)supportsRotation;
- (void)takeRotationFromTracker:(id)arg1;
- (void)takeScaledImageGeometry:(id)arg1 maskGeometry:(id)arg2;
- (void)takeSizeFromTracker:(id)arg1;
- (void)updateChildrenFromInfo;
- (id)visibleGeometries;

@end
