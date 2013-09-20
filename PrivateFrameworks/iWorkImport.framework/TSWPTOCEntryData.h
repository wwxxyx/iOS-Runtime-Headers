/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSWPParagraphStyle;

@interface TSWPTOCEntryData : NSObject {
    NSString *_heading;
    TSWPParagraphStyle *_indexedStyle;
    int _numberFormat;
    unsigned int _pageNumber;
    unsigned int _paragraphIndex;
}

@property(readonly) NSString * heading;
@property(readonly) TSWPParagraphStyle * indexedStyle;
@property(readonly) int numberFormat;
@property(readonly) unsigned int pageNumber;
@property(readonly) unsigned int paragraphIndex;

+ (id)tocEntryDataWithParagraphIndex:(unsigned int)arg1 pageNumber:(unsigned int)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5;

- (void)dealloc;
- (id)description;
- (id)heading;
- (id)indexedStyle;
- (id)initWithParagraphIndex:(unsigned int)arg1 pageNumber:(unsigned int)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (int)numberFormat;
- (unsigned int)pageNumber;
- (unsigned int)paragraphIndex;

@end
