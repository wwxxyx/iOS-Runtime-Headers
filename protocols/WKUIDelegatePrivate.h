/* Generated by RuntimeBrowser.
 */

@protocol WKUIDelegatePrivate <WKUIDelegate>

@optional

- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1;
- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1 sourceIsManaged:(BOOL*)arg2;
- (NSDictionary *)_dataDetectionContextForWebView:(WKWebView *)arg1;
- (UIViewController *)_presentingViewControllerForWebView:(WKWebView *)arg1;
- (NSArray *)_webView:(WKWebView *)arg1 actionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (void)_webView:(WKWebView *)arg1 alternateActionForURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 commitPreviewedImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (void)_webView:(void *)arg1 decideDatabaseQuotaForSecurityOrigin:(void *)arg2 currentQuota:(void *)arg3 currentOriginUsage:(void *)arg4 currentDatabaseUsage:(void *)arg5 expectedUsage:(void *)arg6 decisionHandler:(void *)arg7; // needs 7 arg types, found 12: WKWebView *, WKSecurityOrigin *, unsigned long long, unsigned long long, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)_webView:(void *)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(void *)arg2 currentQuota:(void *)arg3 totalBytesNeeded:(void *)arg4 decisionHandler:(void *)arg5; // needs 5 arg types, found 10: WKWebView *, WKSecurityOrigin *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(BOOL)arg3;
- (void)_webView:(WKWebView *)arg1 didNotHandleTapAsClickAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_webView:(WKWebView *)arg1 finalObscuredInsetsForScrollView:(UIScrollView *)arg2 withVelocity:(struct CGPoint { float x1; float x2; })arg3 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg4;
- (void)_webView:(WKWebView *)arg1 imageOrMediaDocumentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (unsigned int)_webView:(WKWebView *)arg1 indexIntoAttachmentListForElement:(_WKActivatedElementInfo *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForAnimatedImageAtURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4 imageSize:(struct CGSize { float x1; float x2; })arg5;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (void)_webView:(WKWebView *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (BOOL)_webView:(WKWebView *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (BOOL)_webView:(WKWebView *)arg1 shouldRequestGeolocationAuthorizationForURL:(NSURL *)arg2 isMainFrame:(BOOL)arg3 mainFrameURL:(NSURL *)arg4;
- (BOOL)_webView:(WKWebView *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 willPreviewImageWithURL:(NSURL *)arg2;
- (void)_webViewClose:(WKWebView *)arg1;
- (void)_webViewDidEnterFullscreen:(WKWebView *)arg1;
- (void)_webViewDidExitFullscreen:(WKWebView *)arg1;
- (void)_webViewFullscreenMayReturnToInline:(WKWebView *)arg1;

@end