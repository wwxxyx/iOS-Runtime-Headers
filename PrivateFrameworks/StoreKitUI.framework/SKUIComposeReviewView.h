/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIComposeReviewViewDelegate>, SKUIComposeReviewHeaderView, SKUIReviewMetadata, SULoadingView, SUTextContentView, UIControl, UILabel, UIScrollView;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate> {
    unsigned int _loading : 1;
    int _currentBodyLength;
    <SKUIComposeReviewViewDelegate> *_delegate;
    SKUIComposeReviewHeaderView *_headerView;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIControl *_reviewCountControl;
    UILabel *_reviewCountLabel;
    UIScrollView *_scrollView;
    int _style;
    SUTextContentView *_textContentView;
}

@property(readonly) int composeReviewStyle;
@property <SKUIComposeReviewViewDelegate> * delegate;
@property(getter=isLoading) BOOL loading;
@property float rating;
@property(getter=isValid,readonly) BOOL valid;

- (void).cxx_destruct;
- (id)_body;
- (void)_delayedUpdateReviewLength;
- (BOOL)_isReviewTextOptional;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)_layoutComposeView;
- (void)_layoutLoadingView;
- (void)_reviewCountAction:(id)arg1;
- (id)_reviewCountString;
- (id)_reviewPlaceholder;
- (void)_showComposeView;
- (void)_showLoadingView;
- (void)_updateContentSize;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (int)composeReviewStyle;
- (id)copyReview;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (BOOL)isLoading;
- (BOOL)isValid;
- (void)layoutSubviews;
- (float)rating;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setRating:(float)arg1;
- (void)setReview:(id)arg1;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)textContentViewDidChange:(id)arg1;

@end
