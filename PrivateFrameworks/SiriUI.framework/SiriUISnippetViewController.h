/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUISnippetViewControllerDelegate>, AceObject, NSArray, NSAttributedString, NSString, SAUIAppPunchOut, SAUIConfirmationOptions, SAUISnippet, UICollectionReusableView<SiriUIReusableView>;

@interface SiriUISnippetViewController : UIViewController <SiriUIViewController> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    NSAttributedString *_attributedSubtitle;
    BOOL _cancelled;
    BOOL _confirmed;
    int _defaultKeylineType;
    } _defaultViewInsets;
    <SiriUISnippetViewControllerDelegate> *_delegate;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    SAUIAppPunchOut *_headerPunchOut;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    BOOL _isFullPadWidth;
    BOOL _loading;
    NSString *_navigationTitle;
    SAUIConfirmationOptions *_previousConfirmationOptions;
    BOOL _provisional;
    NSArray *_requestContext;
    BOOL _showHeaderChevron;
    SAUISnippet *_snippet;
    SAUIAppPunchOut *_snippetPunchOut;
    BOOL _topKeylineHidden;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    BOOL _virgin;
    BOOL _wantsConfirmationInsets;
    BOOL _willAnimateCancellation;
    BOOL _willAnimateConfirmation;
    AceObject *aceObject;
}

@property(retain) AceObject * aceObject;
@property(copy) NSAttributedString * attributedSubtitle;
@property(getter=isCancelled) BOOL cancelled;
@property(getter=isConfirmed) BOOL confirmed;
@property int defaultKeylineType;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } defaultViewInsets;
@property <SiriUISnippetViewControllerDelegate> * delegate;
@property(retain) SAUIAppPunchOut * headerPunchOut;
@property BOOL isFullPadWidth;
@property(getter=isLoading) BOOL loading;
@property(copy) NSString * navigationTitle;
@property(getter=_previousConfirmationOptions,setter=_setPreviousConfirmationOptions:,retain) SAUIConfirmationOptions * previousConfirmationOptions;
@property(getter=_isProvisional,setter=_setProvisional:) BOOL provisional;
@property(copy) NSArray * requestContext;
@property BOOL showHeaderChevron;
@property(retain) SAUISnippet * snippet;
@property(retain) SAUIAppPunchOut * snippetPunchOut;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;
@property BOOL topKeylineHidden;
@property(getter=isVirgin,readonly) BOOL virgin;
@property BOOL wantsConfirmationInsets;
@property(getter=_willAnimateCancellation,setter=_setWillAnimateCancellation:) BOOL willAnimateCancellation;
@property(getter=_willAnimateConfirmation,setter=_setWillAnimateConfirmation:) BOOL willAnimateConfirmation;

- (void).cxx_destruct;
- (void)_cellDidLayoutSubviews;
- (id)_createReusableViewIfNeededWithClass:(Class)arg1;
- (id)_footerView;
- (BOOL)_hasConfirmationButtons;
- (BOOL)_hasConfirmationOrCancelledInsets;
- (id)_headerView;
- (int)_insertionAnimation;
- (BOOL)_isProvisional;
- (int)_pinAnimationType;
- (id)_previousConfirmationOptions;
- (id)_privateDelegate;
- (int)_replacementAnimation;
- (void)_setPreviousConfirmationOptions:(id)arg1;
- (void)_setProvisional:(BOOL)arg1;
- (void)_setVirgin:(BOOL)arg1;
- (void)_setWillAnimateCancellation:(BOOL)arg1;
- (void)_setWillAnimateConfirmation:(BOOL)arg1;
- (void)_snippetPunchOutButtonTapped;
- (id)_transparentFooterView;
- (id)_transparentHeaderView;
- (BOOL)_willAnimateCancellation;
- (BOOL)_willAnimateConfirmation;
- (id)aceObject;
- (id)attributedSubtitle;
- (void)cancelButtonTapped:(id)arg1;
- (void)configureReusableFooterView:(id)arg1;
- (void)configureReusableHeaderView:(id)arg1;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (void)confirmButtonTapped:(id)arg1;
- (int)defaultKeylineType;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })defaultViewInsets;
- (id)delegate;
- (float)desiredHeight;
- (float)desiredHeightForFooterView;
- (float)desiredHeightForHeaderView;
- (float)desiredHeightForTransparentFooterView;
- (float)desiredHeightForTransparentHeaderView;
- (Class)footerViewClass;
- (id)headerPunchOut;
- (void)headerTapped:(id)arg1;
- (Class)headerViewClass;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isCancelled;
- (BOOL)isConfirmed;
- (BOOL)isFullPadWidth;
- (BOOL)isLoading;
- (BOOL)isVirgin;
- (id)navigationTitle;
- (BOOL)removedAfterDialogProgresses;
- (id)requestContext;
- (void)setAceObject:(id)arg1;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setConfirmed:(BOOL)arg1;
- (void)setDefaultKeylineType:(int)arg1;
- (void)setDefaultViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderPunchOut:(id)arg1;
- (void)setIsFullPadWidth:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setShowHeaderChevron:(BOOL)arg1;
- (void)setSnippet:(id)arg1;
- (void)setSnippetPunchOut:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTopKeylineHidden:(BOOL)arg1;
- (void)setWantsConfirmationInsets:(BOOL)arg1;
- (BOOL)showHeaderChevron;
- (void)siriDidLayoutSnippetView;
- (void)siriWillActivateFromSource:(int)arg1;
- (void)siriWillLayoutSnippetView;
- (id)snippet;
- (id)snippetPunchOut;
- (id)subtitle;
- (BOOL)topKeylineHidden;
- (Class)transparentFooterViewClass;
- (Class)transparentHeaderViewClass;
- (void)viewDidPresent;
- (BOOL)wantsConfirmationInsets;
- (void)wasAddedToTranscript;
- (void)willCancel;
- (void)willConfirm;

@end
