/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIToolbar, UIWebView;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {
    id _delegate;
    BOOL _scalesPageToFit;
    UIToolbar *_toolbar;
    UIWebView *_webView;
}

@property BOOL scalesPageToFit;
@property(readonly) UIToolbar * toolbar;
@property(readonly) UIWebView * webView;

- (void)dealloc;
- (void)donePressed:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (BOOL)scalesPageToFit;
- (void)setDelegate:(id)arg1;
- (void)setScalesPageToFit:(BOOL)arg1;
- (id)toolbar;
- (void)viewDidLayoutSubviews;
- (id)webView;

@end
