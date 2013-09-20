/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDialog, ISDialogButton, NSNumber, NSURL, SSAuthenticationContext;

@interface ISServerAuthenticationOperation : ISOperation {
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    ISDialogButton *_performedButton;
    BOOL _performsButtonAction;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
}

@property(retain) NSNumber * authenticatedAccountDSID;
@property(retain) SSAuthenticationContext * authenticationContext;
@property(retain) ISDialog * dialog;
@property(retain) ISDialogButton * performedButton;
@property BOOL performsButtonAction;
@property(retain) NSURL * redirectURL;
@property(retain) ISDialogButton * selectedButton;

- (BOOL)_copyAccountIdentifier:(id*)arg1 returningError:(id*)arg2;
- (id)_copyAuthenticationContext;
- (id)_copyButtonForDialogSkip;
- (BOOL)_copySelectedButton:(id*)arg1 returningError:(id*)arg2;
- (BOOL)_handleSelectedButton:(id)arg1;
- (BOOL)_shouldAuthenticateForButton:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (void)dealloc;
- (id)dialog;
- (id)init;
- (id)performedButton;
- (BOOL)performsButtonAction;
- (id)redirectURL;
- (void)run;
- (id)selectedButton;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setPerformedButton:(id)arg1;
- (void)setPerformsButtonAction:(BOOL)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setSelectedButton:(id)arg1;

@end
