/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartStylePreset, TSSTheme, TSUNoCopyDictionary;

@interface TSCHCommandReplaceThemePreset : TSKCommand <TSDPropagatableCommand> {
    unsigned int mIndex;
    TSCHChartStylePreset *mNewPreset;
    TSCHChartStylePreset *mOldPreset;
    TSUNoCopyDictionary *mStyleToIdentifierMap;
    TSSTheme *mTheme;
}

@property(readonly) unsigned int index;
@property(readonly) TSCHChartStylePreset * presetNew;
@property(readonly) TSCHChartStylePreset * presetOld;
@property(readonly) TSSTheme * theme;

- (void)commit;
- (void)dealloc;
- (unsigned int)index;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTheme:(id)arg1 oldPreset:(id)arg2 newPreset:(id)arg3 context:(id)arg4;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (void)p_doWorkForOld:(id)arg1 andNew:(id)arg2;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (id)presetNew;
- (id)presetOld;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (id)theme;
- (void)undo;

@end
