/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSObject<TSDContainerInfo>, NSObject<TSKSearchReference>, TSKHighlightArrayController, TSWPShapeRep;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep, TSWPTextEditingHostRep, TSKHighlightArrayControllerProtocol> {
    NSObject<TSKSearchReference> *_activeSearchReference;
    TSWPShapeRep *_editingRep;
    TSKHighlightArrayController *_highlightArrayController;
    TSKHighlightArrayController *_pulseArrayController;
    NSArray *_searchReferences;
}

@property(retain) NSObject<TSKSearchReference> * activeSearchReference;
@property(readonly) NSObject<TSDContainerInfo> * containerInfo;
@property(retain) TSKHighlightArrayController * highlightArrayController;
@property(retain) TSKHighlightArrayController * pulseArrayController;
@property(retain) NSArray * searchReferences;
@property(readonly) BOOL useFindOverlayers;

- (id)activeSearchReference;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (BOOL)canSelectChildRep:(id)arg1;
- (id)childReps;
- (id)containerInfo;
- (void)dealloc;
- (BOOL)doesRepContainSearchReference:(id)arg1;
- (void)drawTextBackground:(struct CGContext { }*)arg1 insetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 pulsating:(BOOL)arg3;
- (id)highlightArrayController;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath { }*)arg2 shouldPulsate:(BOOL)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)lineSearchReferencesForSearchReference:(id)arg1;
- (struct CGPath { }*)newPathForSearchReference:(id)arg1;
- (id)overlayLayers;
- (void)p_activeFindHighlightChangedNotification:(id)arg1;
- (void)p_findUIStateChangedNotification:(id)arg1;
- (void)p_setActiveSearchReference:(id)arg1;
- (void)p_setSearchReferencesToHighlight:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1;
- (id)pulseArrayController;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (id)searchReferences;
- (void)selectChildRep:(id)arg1;
- (void)setActiveSearchReference:(id)arg1;
- (void)setHighlightArrayController:(id)arg1;
- (void)setPulseArrayController:(id)arg1;
- (void)setPulseControllerActive:(BOOL)arg1 autohide:(BOOL)arg2;
- (void)setSearchReferences:(id)arg1;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (void)updateChildrenFromLayout;
- (void)updateFindAnimationWithAnimatingPulse:(BOOL)arg1;
- (void)updateHighlights;
- (BOOL)useFindOverlayers;
- (void)willBeRemoved;

@end
