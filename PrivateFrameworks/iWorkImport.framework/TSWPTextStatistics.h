/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextStatistics : NSObject <NSCopying> {
    unsigned int _charactersNoWhiteSpace;
    BOOL _isAccurate;
    unsigned int _paragraphCount;
    unsigned int _wordCount;
}

@property unsigned int charactersNoWhiteSpace;
@property BOOL isAccurate;
@property unsigned int paragraphCount;
@property unsigned int wordCount;

- (void)addTextStatistics:(id)arg1;
- (unsigned int)charactersNoWhiteSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isAccurate;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)paragraphCount;
- (void)removeTextStatistics:(id)arg1;
- (void)resetStatistics;
- (void)setCharactersNoWhiteSpace:(unsigned int)arg1;
- (void)setIsAccurate:(BOOL)arg1;
- (void)setParagraphCount:(unsigned int)arg1;
- (void)setTextStatistics:(id)arg1;
- (void)setWordCount:(unsigned int)arg1;
- (unsigned int)wordCount;

@end
