/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKReminderInlineEditItemCell;

@interface EKReminderInlineEditItem : EKReminderEditItem <EKExpandingTextViewDelegate> {
    EKReminderInlineEditItemCell *_cell;
    BOOL _isListeningToHeightChanges;
}

- (void).cxx_destruct;
- (void)_applyStylesFromStyleProviderToTextView:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (int)cellStyle;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2 forWidth:(float)arg3;
- (id)init;
- (BOOL)isInline;
- (id)newCell;
- (BOOL)shouldPinKeyboard;
- (id)textFromReminder;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeContentHeight:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

@end
