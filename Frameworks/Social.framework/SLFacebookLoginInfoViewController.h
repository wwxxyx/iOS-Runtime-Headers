/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class <SLFacebookLoginInfoViewControllerDelegate>;

@interface SLFacebookLoginInfoViewController : PSListController  {
    <SLFacebookLoginInfoViewControllerDelegate> *_delegate;
}

@property <SLFacebookLoginInfoViewControllerDelegate> * delegate;


- (id)specifiers;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_signInTapped:(id)arg1;
- (void)_cancelTapped:(id)arg1;

@end