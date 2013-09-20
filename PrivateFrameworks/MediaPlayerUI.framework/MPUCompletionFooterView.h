/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUCompletionFooterViewDelegate>, MPStoreCompletionOffering, MPUItemOfferButton, NSString, UILabel, UISegmentedControl, UITapGestureRecognizer, UIView;

@interface MPUCompletionFooterView : UITableViewHeaderFooterView <SKUIItemOfferButtonDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    float _backgroundTransitionProgress;
    UIView *_bottomSeparatorView;
    NSString *_completeMyCollectionTitle;
    NSString *_completeSubtitleFormat;
    NSString *_completeTitleFormat;
    MPStoreCompletionOffering *_completionOffering;
    NSString *_completionTotalFormat;
    } _contentInsets;
    <MPUCompletionFooterViewDelegate> *_delegate;
    MPUItemOfferButton *_itemOfferButton;
    BOOL _purchasing;
    BOOL _showsVariants;
    int _style;
    UILabel *_subtitleLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_topSeparatorView;
    UISegmentedControl *_variantSegmentedControl;
}

@property float backgroundTransitionProgress;
@property(retain) UIView * bottomSeparatorView;
@property(copy) NSString * completeMyCollectionTitle;
@property(copy) NSString * completeSubtitleFormat;
@property(copy) NSString * completeTitleFormat;
@property(retain) MPStoreCompletionOffering * completionOffering;
@property(copy) NSString * completionTotalFormat;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property <MPUCompletionFooterViewDelegate> * delegate;
@property(retain) MPUItemOfferButton * itemOfferButton;
@property(getter=isPurchasing) BOOL purchasing;
@property BOOL showsVariants;
@property int style;
@property(retain) UILabel * subtitleLabel;
@property(copy) NSString * title;
@property(retain) UILabel * titleLabel;
@property(retain) UIView * topSeparatorView;
@property(retain) UISegmentedControl * variantSegmentedControl;

+ (float)defaultHeight;

- (void).cxx_destruct;
- (void)_buttonCancelConfirmationAction:(id)arg1;
- (void)_buttonPurchaseAction:(id)arg1;
- (void)_buttonShowConfirmationAction:(id)arg1;
- (void)_changedVariants:(id)arg1;
- (void)_configureViewsForCompletionOffering;
- (id)_createItemOfferButton;
- (void)_handleTapGesture:(id)arg1;
- (float)backgroundTransitionProgress;
- (id)bottomSeparatorView;
- (id)completeMyCollectionTitle;
- (id)completeSubtitleFormat;
- (id)completeTitleFormat;
- (id)completionOffering;
- (id)completionTotalFormat;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)dealloc;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (BOOL)isPurchasing;
- (id)itemOfferButton;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSeparatorsWithInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundTransitionProgress:(float)arg1;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setCompleteMyCollectionTitle:(id)arg1;
- (void)setCompleteSubtitleFormat:(id)arg1;
- (void)setCompleteTitleFormat:(id)arg1;
- (void)setCompletionOffering:(id)arg1;
- (void)setCompletionTotalFormat:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemOfferButton:(id)arg1;
- (void)setPurchasing:(BOOL)arg1;
- (void)setShowsVariants:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTableViewStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (void)setVariantSegmentedControl:(id)arg1;
- (BOOL)showsVariants;
- (int)style;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (id)topSeparatorView;
- (id)variantSegmentedControl;

@end
