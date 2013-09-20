/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, NSObject<TSDInfo>, NSSet, TPInteractiveCanvasController, TSDLayoutGeometry;

@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int position : 1; 
        unsigned int size : 1; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } mBaseAlignmentFrameOriginForFixingInterimPosition;
    } mBaseCapturedAlignmentFrameOriginForInline;
    TSDLayoutGeometry *mBaseGeometry;
    } mCapturedAlignmentFrameOriginForInline;
    } mCapturedInfoGeometryPositionForInline;
    NSMutableSet *mConnectedLayouts;
    } mDirtyRect;
    NSObject<TSDInfo> *mInfo;
    } mInitialBoundsForStandardKnobs;
    } mInvalidFlags;
    int mLayoutState;
}

@property(readonly) BOOL canAspectRatioLockBeChangedByUser;
@property(readonly) NSSet * connectedLayouts;
@property(copy) TSDLayoutGeometry * dynamicGeometry;
@property(readonly) NSObject<TSDInfo> * info;
@property(readonly) TPInteractiveCanvasController * interactiveCanvasController;
@property(readonly) BOOL invalidGeometry;
@property(readonly) BOOL isStrokeBeingManipulated;
@property(readonly) int layoutState;
@property(readonly) TSDLayoutGeometry * originalGeometry;
@property(readonly) BOOL resizeMayChangeAspectRatio;

- (void)addConnectedLayout:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)additionalGuides;
- (id)additionalLayoutsForRepCreation;
- (struct CGPoint { float x1; float x2; })alignmentFrameOriginForFixingInterimPosition;
- (BOOL)allowsConnections;
- (void)beginDrag;
- (void)beginDynamicOperation;
- (void)beginResize;
- (void)beginRotate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;
- (struct CGPoint { float x1; float x2; })calculatePointFromSearchReference:(id)arg1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canFlip;
- (struct CGPoint { float x1; float x2; })capturedInfoPositionForAttachment;
- (struct CGPoint { float x1; float x2; })centerForConnecting;
- (struct CGPoint { float x1; float x2; })centerForRotation;
- (id)childSearchTargets;
- (id)computeInfoGeometryDuringResize;
- (id)computeInfoGeometryFromLayoutGeometry:(id)arg1;
- (id)computeLayoutGeometry;
- (id)connectedLayouts;
- (void)dealloc;
- (id)dependentLayouts;
- (void)dragBy:(struct CGPoint { float x1; float x2; })arg1;
- (void)dragByUnscaled:(struct CGPoint { float x1; float x2; })arg1;
- (id)dynamicGeometry;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(float)arg1;
- (void)endDrag;
- (void)endDynamicOperation;
- (void)endResize;
- (void)endRotate;
- (void)i_accumulateLayoutsIntoSet:(id)arg1;
- (id)i_externalWrapPath;
- (void)i_setBaseCapturedAlignmentFrameOriginForInline;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })i_takeDirtyRect;
- (BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
- (id)i_wrapPath;
- (id)info;
- (struct CGPoint { float x1; float x2; })infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (id)initWithInfo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialBoundsForStandardKnobs;
- (id)initialInfoGeometry;
- (id)inspectorGeometry;
- (id)interactiveCanvasController;
- (BOOL)invalidGeometry;
- (void)invalidate;
- (void)invalidateChildren;
- (void)invalidateExteriorWrap;
- (void)invalidateFrame;
- (void)invalidatePosition;
- (void)invalidateSize;
- (BOOL)isBeingManipulated;
- (BOOL)isBeingTransformed;
- (BOOL)isInGroup;
- (BOOL)isInTopLevelContainerForEditing;
- (BOOL)isStrokeBeingManipulated;
- (id)layoutController;
- (id)layoutGeometryFromInfo;
- (void)layoutSearchForAnnotationWithHitBlock:(id)arg1;
- (int)layoutState;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutTransformInInfoSpace:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGSize { float x1; float x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { float x1; float x2; })maximumSizeForChildLayout:(id)arg1;
- (struct CGSize { float x1; float x2; })minimumSize;
- (BOOL)orderedBefore:(id)arg1;
- (id)originalGeometry;
- (id)originalPureGeometry;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalPureTransformInRoot;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalTransformForProvidingGuides;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalTransformInRoot;
- (void)p_invalidateConnectedLayouts;
- (void)p_recursiveInvalidate;
- (void)p_registerWithLayoutController:(id)arg1;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (void)pauseDynamicTransformation;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)pureGeometry;
- (id)pureGeometryInRoot;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })pureTransformInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (id)reliedOnLayouts;
- (void)removeConnectedLayout:(id)arg1;
- (Class)repClassOverride;
- (BOOL)resizeMayChangeAspectRatio;
- (void)resizeWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 asChild:(BOOL)arg2;
- (id)rootLayout;
- (id)searchTarget;
- (void)setAdjustedInterimPositionX:(float)arg1;
- (void)setAdjustedInterimPositionY:(float)arg1;
- (void)setDynamicGeometry:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setParent:(id)arg1;
- (BOOL)shouldBeDisplayedInShowMode;
- (BOOL)shouldDisplayGuides;
- (BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)shouldValidate;
- (id)stroke;
- (void)takeRotationFromTracker:(id)arg1;
- (void)takeSizeFromTracker:(id)arg1;
- (void)unregisterFromLayoutController;
- (void)updateChildrenFromInfo;
- (void)validate;
- (void)validateFromLastInterimPosition;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end
