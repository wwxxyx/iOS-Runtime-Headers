/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPParagraphStyle;

@interface TSWPParagraphStyleCommand : TSWPTextCommand {
    TSWPParagraphStyle *_paragraphStyle;
    BOOL _stripCharacterStyles;
}

- (id)actionString;
- (void)dealloc;
- (void)doCommit;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 paragraphStyle:(id)arg3 stripCharacterStyles:(BOOL)arg4;
- (int)persistenceKind;

@end
