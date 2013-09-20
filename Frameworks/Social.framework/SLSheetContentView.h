/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSMutableArray, NSMutableDictionary, SLSheetTextComposeView, UILabel, UITextView, UIView, UIView<SLSheetPreviewView>;

@interface SLSheetContentView : UIView {
    UIView *_accessoryView;
    BOOL _autoCompletionMode;
    UIView *_autoCompletionModeSeparator;
    float _autoCompletionTextViewHeight;
    UIView *_bottomSeparator;
    NSMutableArray *_constraints;
    int _currentBarMetrics;
    NSMutableDictionary *_intrinsicSizes;
    float _previewTopMargin;
    UIView<SLSheetPreviewView> *_previewView;
    SLSheetTextComposeView *_textComposeView;
    float _textViewTopMargin;
}

@property(retain) UIView * accessoryView;
@property(readonly) UILabel * placeholderLabel;
@property(retain) UIView<SLSheetPreviewView> * previewView;
@property(readonly) UITextView * textView;

- (void).cxx_destruct;
- (float)_previewMarginForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_resetAccessoryView;
- (void)_setConstraints;
- (void)_setupConstraints;
- (void)_setupView;
- (float)_textTopMarginForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)accessoryView;
- (void)adjustComposeViewForPreview;
- (void)beginAutoCompletionMode;
- (void)endAutoCompletionMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (void)preflightAutoCompletionModeWithApparentHeight:(float)arg1;
- (id)previewView;
- (void)resetPreview;
- (void)setAccessoryView:(id)arg1;
- (void)setCurrentBarMetrics:(int)arg1;
- (void)setIntrinsicSize:(struct CGSize { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)setPreviewView:(id)arg1;
- (id)textView;
- (void)updateConstraints;
- (void)updatePreviewMargin;
- (void)updateTextViewMargin;

@end
