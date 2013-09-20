/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager> {
}

+ (id)inputManagerForInputMode:(id)arg1 isHardwareKeyboardMode:(BOOL)arg2;
+ (id)serverInterface;
+ (void)setClassesForSelectorsReplyingWithCandidatesInInterface:(id)arg1;
+ (void)setClassesForSelectorsReplyingWithOperationsInInterface:(id)arg1;

- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 continuation:(id)arg3;
- (void)candidateRejected:(id)arg1;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 continuation:(id)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(id)arg3;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 continuation:(id)arg3;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 continuation:(id)arg3;
- (void)lastAcceptedCandidateCorrected;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(id)arg3;
- (void)removeAllDynamicDictionaries;
- (void)setOriginalInput:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)syncToKeyboardState:(id)arg1 continuation:(id)arg2;
- (void)textAccepted:(id)arg1;

@end
