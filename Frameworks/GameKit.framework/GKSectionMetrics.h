/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKSectionMetrics : GKGridLayoutMetrics {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    unsigned int _alignment;
    float _desiredItemHeight;
    float _desiredItemWidth;
    BOOL _incrementalRevealConsumesPadding;
    unsigned int _incrementalRevealItemCount;
    float _incrementalRevealTextOffset;
    float _interitemSpacing;
    unsigned int _lastLineItemAlignment;
    float _lineSpacing;
    unsigned int _maximumVisibleItemCount;
    } _padding;
}

@property unsigned int alignment;
@property float desiredItemHeight;
@property float desiredItemWidth;
@property BOOL incrementalRevealConsumesPadding;
@property unsigned int incrementalRevealItemCount;
@property float incrementalRevealTextOffset;
@property float interitemSpacing;
@property unsigned int lastLineItemAlignment;
@property float lineSpacing;
@property unsigned int maximumVisibleItemCount;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } padding;
@property float sectionHeaderHeight;
@property BOOL sectionHeadersShouldPin;
@property float showMoreHeight;

+ (id)metricsForIdiom:(int)arg1;

- (unsigned int)alignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)desiredItemHeight;
- (float)desiredItemWidth;
- (BOOL)incrementalRevealConsumesPadding;
- (unsigned int)incrementalRevealItemCount;
- (float)incrementalRevealTextOffset;
- (id)init;
- (id)initWithIdiom:(int)arg1;
- (float)interitemSpacing;
- (struct CGSize { float x1; float x2; })itemSizeForCollectionView:(id)arg1;
- (unsigned int)lastLineItemAlignment;
- (float)lineSpacing;
- (id)localDescription;
- (unsigned int)maximumVisibleItemCount;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })padding;
- (float)sectionHeaderHeight;
- (BOOL)sectionHeadersShouldPin;
- (void)setAlignment:(unsigned int)arg1;
- (void)setDesiredItemHeight:(float)arg1;
- (void)setDesiredItemWidth:(float)arg1;
- (void)setIncrementalRevealConsumesPadding:(BOOL)arg1;
- (void)setIncrementalRevealItemCount:(unsigned int)arg1;
- (void)setIncrementalRevealTextOffset:(float)arg1;
- (void)setInteritemSpacing:(float)arg1;
- (void)setLastLineItemAlignment:(unsigned int)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setMaximumVisibleItemCount:(unsigned int)arg1;
- (void)setPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSectionHeaderHeight:(float)arg1;
- (void)setSectionHeadersShouldPin:(BOOL)arg1;
- (void)setShowMoreHeight:(float)arg1;
- (float)showMoreHeight;

@end
