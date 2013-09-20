/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPIndentParagraphLevelCommand : TSWPTextCommand {
    int _delta;
}

+ (BOOL)canIndentStorage:(id)arg1 selection:(id)arg2 delta:(int)arg3;

- (id)actionString;
- (void)dealloc;
- (void)doCommit;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 delta:(int)arg3;
- (void)invalidateSelection:(id)arg1 onStorage:(id)arg2;
- (id)paragraphLevelDeltas;
- (int)persistenceKind;
- (BOOL)process;

@end
