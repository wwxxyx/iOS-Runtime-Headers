/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary;

@interface PLEffectsGridView : PLGLView {
    struct CGSize { 
        float width; 
        float height; 
    BOOL __atomicBlackAndWhite;
    BOOL __fetchingGridFilters;
    NSDictionary *__gridFilters;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    } _pixelBufferPoolSize;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    BOOL _square;
}

@property(getter=_isAtomicBlackAndWhite,setter=_setAtomicBlackAndWhite:) BOOL _atomicBlackAndWhite;
@property(setter=_setFetchingGridFilters:) BOOL _fetchingGridFilters;
@property(setter=_setGridFilters:,retain) NSDictionary * _gridFilters;
@property(getter=isBlackAndWhite) BOOL blackAndWhite;
@property(getter=isSquare) BOOL square;

- (unsigned int)_cellCount;
- (unsigned int)_cellsPerRow;
- (struct __CVBuffer { }*)_createPixelBufferForSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_fetchingGridFilters;
- (unsigned int)_filterIndexForGridIndex:(unsigned int)arg1;
- (id)_gridFilters;
- (unsigned int)_gridIndexForFilterIndex:(unsigned int)arg1;
- (BOOL)_isAtomicBlackAndWhite;
- (void)_renderGridFilters:(id)arg1 withInputImage:(id)arg2 ciContext:(id)arg3 mirrorRendering:(BOOL)arg4;
- (void)_scalePixelBuffer:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;
- (void)_setAtomicBlackAndWhite:(BOOL)arg1;
- (void)_setFetchingGridFilters:(BOOL)arg1;
- (void)_setGridFilters:(id)arg1;
- (void)_setupGridFiltersIfNecessary;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_squareCropFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updatePixelBufferPoolForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (unsigned int)filterIndexForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)filterIndices;
- (BOOL)isBlackAndWhite;
- (BOOL)isSquare;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForFilterIndex:(unsigned int)arg1;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3;
- (void)setBlackAndWhite:(BOOL)arg1;
- (void)setSquare:(BOOL)arg1;

@end
