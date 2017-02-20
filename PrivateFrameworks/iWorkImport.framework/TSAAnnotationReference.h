/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAAnnotationReference : NSObject {
    <TSKAnnotation> * _annotation;
    unsigned int  _pageIndex;
}

@property (nonatomic, retain) <TSKAnnotation> *annotation;
@property (nonatomic) unsigned int pageIndex;

- (id)annotation;
- (void)dealloc;
- (unsigned int)pageIndex;
- (BOOL)referencesAnnotation:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setPageIndex:(unsigned int)arg1;

@end