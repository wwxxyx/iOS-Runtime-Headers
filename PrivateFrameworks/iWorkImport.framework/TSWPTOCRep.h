/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCRep : TSWPShapeRep {
}

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (BOOL)canMakePathEditable;
- (unsigned int)charIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)i_indexOfHitTOCEntryAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)i_paragraphStyleAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)invalidateSubselection;
- (BOOL)isDraggable;
- (BOOL)isSelectable;
- (id)p_selectedParagraphStyles;
- (id)p_subSelectionLayers;
- (id)paragraphStylesBetweenCharIndex:(unsigned int)arg1 andCharIndex:(unsigned int)arg2;
- (BOOL)shouldCreateKnobs;
- (BOOL)shouldShowKnobs;
- (id)tocInfo;

@end
