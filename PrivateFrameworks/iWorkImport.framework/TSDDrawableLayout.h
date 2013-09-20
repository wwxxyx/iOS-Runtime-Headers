/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDBezierPath, TSDWrapPolygon;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {
    TSDBezierPath *mCachedExternalWrapPath;
    TSDBezierPath *mCachedWrapPath;
    TSDWrapPolygon *mCachedWrapPolygon;
}

@property(readonly) BOOL hasAlpha;

- (BOOL)allowsConnections;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (void)dealloc;
- (void)dragBy:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)hasAlpha;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(BOOL)arg1;
- (id)i_externalWrapPath;
- (void)i_invalidateWrap;
- (id)i_wrapPath;
- (void)invalidate;
- (void)invalidateExteriorWrap;
- (void)invalidateParentForWrap;
- (BOOL)isHTMLWrap;
- (void)parentDidChange;
- (void)processChangedProperty:(int)arg1;
- (void)setGeometry:(id)arg1;
- (BOOL)supportsInspectorPositioning;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)wrapPolygon;
- (int)wrapType;

@end
