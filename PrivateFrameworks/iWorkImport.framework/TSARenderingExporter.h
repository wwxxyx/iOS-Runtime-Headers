/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<TSARenderingExporterDelegate>, TSADocumentRoot, TSDBitmapRenderingQualityInfo, TSDImager, TSUProgressContext;

@interface TSARenderingExporter : NSObject <TSKRenderingExporter> {
    TSDBitmapRenderingQualityInfo *mBitmapRenderingQualityInfo;
    TSADocumentRoot *mDocumentRoot;
    BOOL mDoesDrawAllPages;
    TSDImager *mImager;
    BOOL mIsCancelled;
    BOOL mIsQuit;
    BOOL mPaginate;
    TSUProgressContext *mProgressContext;
    NSObject<TSARenderingExporterDelegate> *mRenderingExporterDelegate;
}

@property(retain) TSUProgressContext * progressContext;

- (id)bitmapRenderingQualityInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRect;
- (void)cancel;
- (id)currentInfos;
- (void)dealloc;
- (id)documentRoot;
- (void)drawAllPagesWithContext:(struct CGContext { }*)arg1 returnSuccess:(BOOL*)arg2;
- (BOOL)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(float)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 createPage:(BOOL)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext { }*)arg1 returnSuccess:(BOOL*)arg2;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (BOOL)exportToURL:(id)arg1 pageNumber:(unsigned int)arg2 delegate:(id)arg3 error:(id*)arg4;
- (BOOL)hasMoreThanOnePageToPrint;
- (id)imager;
- (BOOL)incrementPage;
- (id)initWithDocumentRoot:(id)arg1 imager:(id)arg2;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isCancelled;
- (BOOL)isQuit;
- (void)p_drawCurrentPageWithContext:(struct CGContext { }*)arg1 returnSuccess:(BOOL*)arg2 createPage:(BOOL)arg3;
- (BOOL)p_exportToURL:(id)arg1 pageNumber:(unsigned int)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)p_renderingExporterDelegate;
- (unsigned int)pageCount;
- (BOOL)paginate;
- (BOOL)preparePage:(unsigned int)arg1;
- (id)progressContext;
- (double)progressForCurrentPage;
- (void)quit;
- (BOOL)setInfosToCurrentPage;
- (void)setPaginate:(BOOL)arg1;
- (void)setProgressContext:(id)arg1;
- (void)setup;
- (void)teardown;
- (double)totalProgess;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unscaledClipRect;
- (void)waitForRecalcToFinish;

@end
