/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, NSObject<TNPageControllerDelegate>, NSString, TNDocumentRoot, TNPageCoordinateDictionary, TNPrintProperties, TNSheet, TSUPointerKeyDictionary;

@interface TNPageController : NSObject <TSKChangeSourceObserver> {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    TNPrintProperties *_printProperties;
    NSMutableDictionary *mCachedAutoFitContentScaleDictionary;
    NSObject<TNPageControllerDelegate> *mDelegate;
    TNDocumentRoot *mDocumentRoot;
    TSUPointerKeyDictionary *mHintCacheDictionary;
    float mLastContentScaleForPageNumberFont;
    } mMaxPageCoordinate;
    BOOL mMaxPageCoordinateValid;
    TNPageCoordinateDictionary *mPageLayoutCache;
    struct __CTFont { } *mPageNumberFont;
    struct __CTFont { } *mPageNumberFontForDevice;
    NSString *mPageNumberFontName;
    TNSheet *mSheet;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentFrame;
@property(readonly) float contentScale;
@property NSObject<TNPageControllerDelegate> * delegate;
@property TNDocumentRoot * documentRoot;
@property(readonly) unsigned int numPages;
@property(readonly) NSString * pageNumberFontName;
@property(readonly) struct CGSize { float x1; float x2; } pageSize;
@property(readonly) struct CGSize { float x1; float x2; } pageSizeWithGutter;
@property(getter=isPortrait,readonly) BOOL portrait;
@property(readonly) TNPrintProperties * printProperties;
@property TNSheet * sheet;

+ (float)autoFitContentScaleForSheet:(id)arg1;
+ (id)p_cachedAutoFitContentScaleDictionary;
+ (float)p_contentScaleAutoFitForSheet:(id)arg1;

- (id).cxx_construct;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (float)contentScale;
- (struct CGSize { float x1; float x2; })contentSizeForCanvasLayer;
- (void)dealloc;
- (id)delegate;
- (id)documentRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg2;
- (id)initWithDocumentRoot:(id)arg1;
- (void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1;
- (void)invalidateDrawableLayouts;
- (void)invalidatePageLayout;
- (BOOL)isPagePlaceholderAtPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isPortrait;
- (void)layoutAtPageIndex:(unsigned int)arg1 forLayoutController:(id)arg2;
- (void)layoutInPageRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 forLayoutController:(id)arg2;
- (unsigned int)numPages;
- (void)p_clearHintCache;
- (void)p_enumerateOverPageRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 usingBlock:(id)arg2;
- (id)p_hintCacheForInfo:(id)arg1;
- (void)p_invalidateHintCache;
- (void)p_invalidatePageLayoutCache;
- (id)p_layoutForInfo:(id)arg1 atCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 parentLayout:(id)arg3;
- (void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (void)p_layoutInfo:(id)arg1 intoPageRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })p_pageCoordinateForPageLayoutAtDevicePoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)p_pageInfoForPageAtIndex:(unsigned int)arg1;
- (id)p_pageLayoutAtCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)p_updateVisiblePageRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 forLayoutController:(id)arg2;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pageCoordinateForDrawableAtUnscaledPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pageCoordinateForMaxVisiblePage;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pageCoordinateForPageIndex:(unsigned int)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pageCoordinateForPageLayoutAtUnscaledPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)pageCount;
- (id)pageInfoForPageIndex:(unsigned int)arg1;
- (id)pageLayoutGeometryForPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)pageLayoutGeometryForPrintingAtPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct __CTFont { }*)pageNumberFontForDeviceSpace:(BOOL)arg1;
- (id)pageNumberFontName;
- (unsigned int)pageNumberForPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeForContent;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeForContentWithUpperBound:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeForInfo:(id)arg1 upperBound:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeForPageIndex:(unsigned int)arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeWithPlaceholdersWithUpperBound:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct CGSize { float x1; float x2; })pageSize;
- (struct CGSize { float x1; float x2; })pageSizeWithGutter;
- (id)printProperties;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })printingLayoutRectForPageIndex:(unsigned int)arg1;
- (void)registerPageLayout:(id)arg1 atPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)removeLayoutsFromPages;
- (void)setDelegate:(id)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)setSheet:(id)arg1;
- (id)sheet;
- (void)syncPositionOfLayout:(id)arg1 atCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)updateContentScale;
- (void)updateViewScale;

@end
