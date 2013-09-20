/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIComposeReviewFormDelegate>, SKUIComposeReviewView, SKUIReviewMetadata;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {
    SKUIComposeReviewView *_composeView;
    <SKUIComposeReviewFormDelegate> *_delegate;
    SKUIReviewMetadata *_review;
}

@property <SKUIComposeReviewFormDelegate> * delegate;
@property(readonly) SKUIReviewMetadata * editedReviewMetadata;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_submit;
- (void)composeReviewViewValidityChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)editedReviewMetadata;
- (id)initWithReviewMetadata:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setRating:(float)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
