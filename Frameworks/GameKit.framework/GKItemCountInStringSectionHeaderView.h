/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface GKItemCountInStringSectionHeaderView : GKSectionHeaderView {
    int (*_itemCountFormatter)();
    BOOL _allSectionItemsVisible;
    int _itemCount;
    int _maxItemCount;
    unsigned int _sectionIndex;
}

@property BOOL allSectionItemsVisible;
@property int itemCount;
@property int (* itemCountFormatter;
@property int maxItemCount;
@property unsigned int sectionIndex;

- (int (*)())itemCountFormatter;
- (BOOL)allSectionItemsVisible;
- (void)applyLayoutAttributes:(id)arg1;
- (int)itemCount;
- (int)maxItemCount;
- (void)prepareForReuse;
- (unsigned int)sectionIndex;
- (void)setAllSectionItemsVisible:(BOOL)arg1;
- (void)setItemCount:(int)arg1;
- (void)setItemCountFormatter:(int (*)())arg1;
- (void)setMaxItemCount:(int)arg1;
- (void)setSectionIndex:(unsigned int)arg1;
- (void)updateLabel;

@end
