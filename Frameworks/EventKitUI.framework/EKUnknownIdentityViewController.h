/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKIdentityProtocol>, ABUnknownPersonViewController;

@interface EKUnknownIdentityViewController : UIViewController <ABUnknownPersonViewControllerDelegate> {
    <EKIdentityProtocol> *_identity;
    ABUnknownPersonViewController *_unknownPersonViewController;
}

- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1;
- (void)loadView;
- (void)setIdentity:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;

@end
