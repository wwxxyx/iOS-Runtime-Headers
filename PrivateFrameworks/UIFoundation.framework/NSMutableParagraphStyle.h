/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle {
}

@property int alignment;
@property int baseWritingDirection;
@property float defaultTabInterval;
@property float firstLineHeadIndent;
@property float headIndent;
@property float hyphenationFactor;
@property int lineBreakMode;
@property float lineHeightMultiple;
@property float lineSpacing;
@property float maximumLineHeight;
@property float minimumLineHeight;
@property float paragraphSpacing;
@property float paragraphSpacingBefore;
@property(copy) NSArray * tabStops;
@property float tailIndent;

- (void)_mutateTabStops;
- (void)addTabStop:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeTabStop:(id)arg1;
- (void)setAlignment:(int)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setDefaultTabInterval:(float)arg1;
- (void)setFirstLineHeadIndent:(float)arg1;
- (void)setHeadIndent:(float)arg1;
- (void)setHeaderLevel:(int)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setLineHeightMultiple:(float)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setMaximumLineHeight:(float)arg1;
- (void)setMinimumLineHeight:(float)arg1;
- (void)setParagraphSpacing:(float)arg1;
- (void)setParagraphSpacingBefore:(float)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setTabStops:(id)arg1;
- (void)setTailIndent:(float)arg1;
- (void)setTextBlocks:(id)arg1;
- (void)setTextLists:(id)arg1;
- (void)setTighteningFactorForTruncation:(float)arg1;

@end
