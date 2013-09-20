/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITextInput>, NSMutableArray;

@interface UIDictationTestOps : NSObject {
    <UITextInput> *_document;
    NSMutableArray *_operations;
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
}

@property(retain) NSMutableArray * operations;

- (void)_performReplaceSelectedText:(id)arg1;
- (void)clearOperations;
- (void)dealloc;
- (double)delayAfterSelector:(SEL)arg1;
- (void)dictationWillBeginInDocument:(id)arg1;
- (BOOL)hasOperations;
- (id)init;
- (BOOL)isEmpty;
- (BOOL)isNotEmpty;
- (id)operations;
- (void)performSelectRangeForSpeech:(id)arg1;
- (id)pop;
- (void)popAndInvoke;
- (void)pushInsertTextForSpeech:(id)arg1;
- (void)pushReplaceSelectionWithText:(id)arg1;
- (void)pushSelectRangeForSpeech:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)pushSpeechOperation:(id)arg1;
- (void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (unsigned int)selectionChangeDelta;
- (void)setDocument:(id)arg1;
- (void)setOperations:(id)arg1;
- (void)willEndEditingInInputDelegate:(id)arg1;

@end
