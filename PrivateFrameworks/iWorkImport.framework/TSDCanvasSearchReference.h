/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDCanvasSelection>, <TSKAnnotation>, NSArray, TSDDrawableInfo, TSKDocumentRoot;

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference> {
    struct CGPoint { 
        float x; 
        float y; 
    <TSKAnnotation> *mAnnotation;
    BOOL mAutohideHighlight;
    <TSDCanvasSelection> *mCanvasSelection;
    TSKDocumentRoot *mDocumentRoot;
    TSDDrawableInfo *mDrawableInfo;
    NSArray *mFindHighlights;
    BOOL mPulseHighlight;
    } mSearchReferencePoint;
}

@property(retain) <TSKAnnotation> * annotation;
@property BOOL autohideHighlight;
@property(retain) NSArray * findHighlights;
@property BOOL pulseHighlight;
@property struct CGPoint { float x1; float x2; } searchReferencePoint;

+ (id)searchReferenceWithDrawableInfo:(id)arg1;

- (id)annotation;
- (BOOL)autohideHighlight;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)drawableInfo;
- (id)findHighlights;
- (id)initWithDrawableInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReplaceable;
- (id)model;
- (BOOL)pulseHighlight;
- (id)searchReferenceEnd;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned int)arg2 authorCreatedWithCommand:(id*)arg3;
- (struct CGPoint { float x1; float x2; })searchReferencePoint;
- (id)searchReferenceStart;
- (id)selection;
- (void)setAnnotation:(id)arg1;
- (void)setAutohideHighlight:(BOOL)arg1;
- (void)setFindHighlights:(id)arg1;
- (void)setPulseHighlight:(BOOL)arg1;
- (void)setSearchReferencePoint:(struct CGPoint { float x1; float x2; })arg1;

@end
