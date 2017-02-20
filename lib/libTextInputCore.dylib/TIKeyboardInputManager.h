/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIKeyboardInputManager : TIKeyboardInputManagerBase {
    id /* block */  _candidateGenerationCompletionHandler;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _candidateRange;
    TIKeyboardInputManagerState * _currentState;
    TIKeyboardLayout * _keyLayout;
    TIKeyboardFeatureSpecialization * _keyboardFeatureSpecialization;
    TIKeyboardState * _keyboardState;
    TIKeyboardLayoutState * _layoutState;
    unsigned int  _maxCandidateCount;
}

@property (nonatomic, copy) id /* block */ candidateGenerationCompletionHandler;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } candidateRange;
@property (nonatomic, readonly) TIKeyboardInputManagerState *currentState;
@property (nonatomic, retain) TIKeyboardLayout *keyLayout;
@property (nonatomic, readonly) TIKeyboardFeatureSpecialization *keyboardFeatureSpecialization;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic) unsigned int maxCandidateCount;

+ (void)clearRecentsFileForIdentifier:(id)arg1;
+ (id)dynamicDictionaryFilePathForInputMode:(id)arg1;
+ (id)keyboardUserDirectory;
+ (id)recentsFilePathForIdentifier:(id)arg1;
+ (void)removeAllDynamicDictionaries;
+ (void)removeDynamicDictionaryForInputMode:(id)arg1;
+ (void)resetResponseKit;
+ (id)userDictionaryWordKeyPairsFilePath;

- (void)acceptCurrentCandidateIfSelectedWithContext:(id)arg1;
- (void)acceptCurrentCandidateWithContext:(id)arg1;
- (void)acceptInput;
- (BOOL)acceptInputString:(id)arg1;
- (BOOL)acceptsCharacter:(unsigned long)arg1;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(struct CGPoint { float x1; float x2; })arg3 firstDelete:(unsigned int*)arg4 fromVariantKey:(BOOL)arg5;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;
- (void)appendToInputContext:(id)arg1;
- (id)autocorrection;
- (id)autocorrectionList;
- (BOOL)canHandleKeyHitTest;
- (id /* block */)candidateGenerationCompletionHandler;
- (struct _NSRange { unsigned int x1; unsigned int x2; })candidateRange;
- (void)candidateRejected:(id)arg1;
- (id)candidateResultSet;
- (id)candidateResultSetFromCandidates:(id)arg1;
- (id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2;
- (id)candidates;
- (id)candidatesForString:(id)arg1;
- (void)clearDynamicDictionary;
- (void)clearInput;
- (void)clearInputContext;
- (void)clearKeyAreas;
- (void)closeCandidateGenerationContextWithResults:(id)arg1;
- (BOOL)commitsAcceptedCandidate;
- (id)contextBeforeWithDesiredLength:(unsigned int)arg1;
- (id)currentInputModeIdentifier;
- (id)currentState;
- (void)dealloc;
- (id)defaultCandidate;
- (id)deleteFromInput:(unsigned int*)arg1;
- (void)deleteFromInputWithContext:(id)arg1;
- (id)deletedSuffixOfInputContext:(id)arg1 whenDeletingFromInputString:(id)arg2 withInputIndex:(unsigned int)arg3 deletionCount:(unsigned int)arg4;
- (id)didAcceptCandidate:(id)arg1;
- (void)displayedCandidateRejected;
- (void)dropInput;
- (void)dynamicDictionariesRemoved:(id)arg1;
- (id)emojiReplacementCandidates:(id)arg1;
- (BOOL)enablesProactiveQuickType;
- (id)externalStringToInternal:(id)arg1;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withInput:(id)arg2;
- (id)generateAutocorrectionsWithKeyboardState:(id)arg1;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 completionHandler:(id /* block */)arg3;
- (id)generateProactiveAutocompletionsWithDocumentState:(id)arg1;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(id /* block */)arg3;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (BOOL)hasLegacyInputStem;
- (BOOL)hasLegacyInputString;
- (BOOL)ignoresDeadKeys;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg1 autocorrectionTypes:(unsigned int)arg2;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2;
- (id)initWithInputMode:(id)arg1;
- (unsigned int)initialCandidateBatchCount;
- (unsigned int)initialSelectedIndex;
- (id)inputContext;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)inputLocationChanged;
- (id)inputString;
- (id)inputStringFromDocumentState:(id)arg1;
- (id)inputsToReject;
- (id)internalInputContext;
- (id)internalStringToExternal:(id)arg1;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyEventMap;
- (int)keyHitTest:(id)arg1;
- (id)keyLayout;
- (id)keyboardBehaviors;
- (id)keyboardConfiguration;
- (id)keyboardConfigurationAccentKeyString;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (id)keyboardFeatureSpecialization;
- (id)keyboardState;
- (void)lastAcceptedCandidateCorrected;
- (void)logEmojiUsageFromCandidateBar:(id)arg1;
- (id)markedText;
- (unsigned int)maxCandidateCount;
- (unsigned int)maximumShortcutLengthAllowed;
- (id)newInputManagerState;
- (BOOL)nextInputWouldStartSentence;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)arg1;
- (int)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (unsigned int)phraseBoundary;
- (id)rawInputString;
- (void)refreshInputManagerState;
- (void)registerKeyArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyCode:(short)arg2 keyString:(const char *)arg3;
- (void)releaseDynamicLanguageModel;
- (id)remainingInput;
- (BOOL)removeSuffixOfInputContext:(id)arg1;
- (id)replacementForDoubleSpace;
- (void)resume;
- (id)revisionHistory;
- (id)searchStringForMarkedText;
- (void)setAutoCorrects:(BOOL)arg1;
- (void)setAutocapitalizationEnabled:(BOOL)arg1;
- (void)setAutocapitalizationType:(unsigned int)arg1;
- (void)setCandidateGenerationCompletionHandler:(id /* block */)arg1;
- (void)setCandidateRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (void)setInSplitKeyboardMode:(BOOL)arg1;
- (void)setInputStringFromDocumentState:(id)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setKeyboardEventsLagging:(BOOL)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setLayoutUsesTwoHands:(BOOL)arg1;
- (void)setLearnsCorrection:(BOOL)arg1;
- (void)setMarkedText;
- (void)setMaxCandidateCount:(unsigned int)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)setPhraseBoundary:(unsigned int)arg1;
- (void)setPhraseBoundaryIfNecessary;
- (id)shadowTyping;
- (id)shortcutCompletionsForDocumentState:(id)arg1;
- (id)shortcutConversionForDocumentState:(id)arg1;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)shouldCommitInputString;
- (BOOL)shouldExtendPriorWord;
- (BOOL)shouldSkipCandidateSelection;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (id)sortMethodIndexes;
- (id)sortMethodTitles;
- (id)sortMethodsGroupsForCandidates:(id)arg1;
- (id)sortMethodsShowExtensionCandidates;
- (id)sortingMethods;
- (BOOL)stringEndsWord:(id)arg1;
- (id)suffixOfDesiredString:(id)arg1 toAppendToInputString:(id)arg2 withInputIndex:(unsigned int)arg3 afterDeletionCount:(unsigned int*)arg4;
- (BOOL)suppliesCompletions;
- (BOOL)supportsLearning;
- (BOOL)supportsNumberKeySelection;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)suppressCompletionsForFieldEditor;
- (BOOL)suppressPlaceholderCandidate;
- (void)suspend;
- (void)syncInputStringToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2;
- (void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2;
- (void)syncToKeyboardState:(id)arg1;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3;
- (void)syncToLayoutState:(id)arg1;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPrecedingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2;
- (id)titleForSortingMethod:(id)arg1;
- (void)trackProactiveMetrics:(id)arg1 keyboardState:(id)arg2;
- (void)trimInput;
- (id)usageTrackingKeyForStatistic:(id)arg1;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesCandidateSelection;
- (void)willChangeToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2;
- (id)wordCharacters;
- (id)wordSeparator;

@end