/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSWPChangeSession, TSWPSelection;

@interface TSWPTrackedInsertion : NSObject <TSWPReplaceAction> {
    TSWPChangeSession *_changeSession;
    TSWPSelection *_selection;
    NSString *_string;
}

- (void)dealloc;
- (int)delta;
- (id)initWithSelection:(id)arg1 string:(id)arg2 changeSession:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })insertedRange;
- (void)performWithStorage:(id)arg1 delta:(int)arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3 replaceBlock:(id)arg4;
- (unsigned int)targetCharIndex;

@end
