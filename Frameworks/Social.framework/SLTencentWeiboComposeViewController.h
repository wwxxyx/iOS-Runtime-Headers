/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class SLTencentWeiboSession;

@interface SLTencentWeiboComposeViewController : SLMicroBlogComposeViewController {
    SLTencentWeiboSession *_remoteSession;
}

+ (id)serviceBundle;

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)presentNoAccountsAlert;
- (id)session;
- (void)tearDownSession;
- (void)viewDidDisappear:(BOOL)arg1;

@end
