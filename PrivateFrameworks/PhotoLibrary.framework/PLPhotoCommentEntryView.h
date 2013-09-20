/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPhotoCommentEntryViewDelegate>, UIButton, UILabel, UITextView;

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate> {
    <PLPhotoCommentEntryViewDelegate> *_delegate;
    UILabel *_placeholderLabel;
    UIButton *_postButton;
    UITextView *_textView;
    UILabel *placeholderLabel;
}

@property <PLPhotoCommentEntryViewDelegate> * delegate;
@property(readonly) UILabel * placeholderLabel;
@property(readonly) UIButton * postButton;
@property(readonly) UITextView * textView;

- (void)clearText;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (id)postButton;
- (float)preferredHeight;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (id)trimmedText;

@end
