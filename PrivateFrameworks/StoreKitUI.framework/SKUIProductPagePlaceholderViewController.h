/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIProductPageChildViewControllerDelegate>, SKUIClientContext, SKUIColorScheme, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderScrollView, UIActivityIndicatorView, UIScrollView;

@interface SKUIProductPagePlaceholderViewController : UIViewController <UIScrollViewDelegate, SKUIProductPageChildViewController> {
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    SKUIProductPageHeaderViewController *_headerViewController;
    UIActivityIndicatorView *_indicator;
    SKUIProductPagePlaceholderScrollView *_scrollView;
    int _style;
}

@property(retain) SKUIClientContext * clientContext;
@property(retain) SKUIColorScheme * colorScheme;
@property <SKUIProductPageChildViewControllerDelegate> * delegate;
@property(retain) SKUIProductPageHeaderViewController * headerViewController;
@property(readonly) UIScrollView * scrollView;

- (void).cxx_destruct;
- (void)_addHeaderView;
- (id)clientContext;
- (id)colorScheme;
- (id)delegate;
- (id)headerViewController;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end
