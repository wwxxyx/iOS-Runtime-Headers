/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSKSelection, TSKSelection<TSDCanvasSelection>;

@interface TSDArchivedCanvasSelection : TSPObject <TSKArchivedSelection> {
    TSKSelection<TSDCanvasSelection> *mSelection;
}

@property(retain) TSKSelection * selection;

- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end
