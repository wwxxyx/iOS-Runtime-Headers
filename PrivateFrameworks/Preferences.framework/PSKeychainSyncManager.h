/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class KeychainSyncAdvancedSecurityCodeController, KeychainSyncDevicePINController, KeychainSyncPhoneNumberController, KeychainSyncSMSVerificationController, KeychainSyncSecurityCodeController, NSString, NSTimer, PSRootController, PSSetupController, UIAlertView, UIViewController;

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate> {
    KeychainSyncAdvancedSecurityCodeController *_advancedSecurityCodeChoiceController;
    NSString *_appleIDPassword;
    NSString *_appleIDUsername;
    PSRootController *_buddyNavigationController;
    id _changeSecurityCodeCompletion;
    id _circleJoinCompletion;
    int _circleNotificationToken;
    BOOL _circleWasReset;
    id _completion;
    KeychainSyncSecurityCodeController *_complexSecurityCodeController;
    NSTimer *_credentialExpirationTimer;
    UIAlertView *_devicePINChoiceAlert;
    UIAlertView *_devicePasscodeChangeAlert;
    UIAlertView *_devicePasscodeTooWeakAlert;
    KeychainSyncDevicePINController *_devicePinController;
    UIAlertView *_enableWithExistingBackupAlert;
    int _flow;
    UIAlertView *_iCSCHardLimitAlert;
    UIAlertView *_iCSCHardLimitWithApprovalAlert;
    UIAlertView *_iCSCSoftLimitAlert;
    UIAlertView *_incorrectRecoveryCodesAlert;
    BOOL _joiningCircle;
    BOOL _joiningCircleAfterRecovery;
    id _passwordPromptCompletion;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    id _resetCompletion;
    UIAlertView *_resetConfirmationAlert;
    UIViewController *_resetPromptControllerHost;
    NSString *_securityCodeRecoveryAttempt;
    KeychainSyncSecurityCodeController *_securityCodeRecoveryController;
    PSSetupController *_settingsSetupController;
    KeychainSyncSecurityCodeController *_simpleSecurityCodeController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    unsigned int _spinnerCount;
    UIViewController *_spinningViewController;
    NSString *_stagedSecurityCode;
    int _stagedSecurityCodeType;
}

@property(retain) NSString * appleIDPassword;
@property(retain) NSString * appleIDUsername;
@property(retain) PSRootController * buddyNavigationController;
@property(copy) id changeSecurityCodeCompletion;
@property(copy) id circleJoinCompletion;
@property BOOL circleWasReset;
@property(copy) id completion;
@property(copy) id passwordPromptCompletion;
@property(copy) id resetCompletion;
@property(retain) UIViewController * resetPromptControllerHost;
@property(getter=isRunningInBuddy,readonly) BOOL runningInBuddy;
@property(retain) NSString * securityCodeRecoveryAttempt;
@property(retain) PSSetupController * settingsSetupController;
@property(readonly) NSString * stagedSecurityCode;
@property(readonly) int stagedSecurityCodeType;

+ (id)sharedManager;

- (void)_autoVetSMSValidationWithToken:(id)arg1;
- (void)_callCompletionWithStatus:(int)arg1 error:(id)arg2;
- (BOOL)_changeSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4 username:(id)arg5 password:(id)arg6 error:(id*)arg7;
- (void)_changeToNewSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4;
- (void)_cleanup;
- (void)_cleanupAppleIDCredentials;
- (void)_enableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (BOOL)_errorRequiresPasswordPrompt:(id)arg1;
- (void)_finishedWithStatus:(int)arg1 error:(id)arg2;
- (void)_peerApprovalFromRecoveryFlow;
- (void)_preSetupCancelledWithCurrentStatus;
- (void)_recoverWithSecurityCode:(id)arg1 verificationCode:(id)arg2;
- (void)_registerForCircleChangeNotificationsWithCompletion:(id)arg1;
- (BOOL)_resetCircleAndDisableBackupWithError:(id*)arg1;
- (void)_resetFromRecoveryFlow;
- (void)_showGenericFlowErrorAlert;
- (void)_showResetFlowOverController:(id)arg1 withEnableBackupText:(BOOL)arg2 withCompletion:(id)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)appleIDPassword;
- (id)appleIDUsername;
- (id)buddyNavigationController;
- (id)changeSecurityCodeCompletion;
- (id)circleJoinCompletion;
- (BOOL)circleWasReset;
- (id)completion;
- (void)dealloc;
- (void)disableKeychainSyncWithCompletion:(id)arg1;
- (void)dismissAppleSupportPane:(id)arg1;
- (void)handleCircleChangedNotification;
- (id)init;
- (BOOL)isRunningInBuddy;
- (void)joinCircleAfterRecovery:(BOOL)arg1 withCompletion:(id)arg2;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (void)joinCircleWithCompletion:(id)arg1;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)keychainSyncControllerCancel:(id)arg1;
- (void)keychainSyncPhoneNumberController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)makeSettingsSetupController;
- (id)navigationController;
- (id)passwordPromptCompletion;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(BOOL)arg1;
- (void)promptForDevicePasscodeChangeToPasscode:(id)arg1;
- (void)promptForPasswordIfCredentialsNotCachedOverController:(id)arg1 withCompletion:(id)arg2;
- (void)promptForPasswordIfNeededForWritingOverController:(id)arg1 withCompletion:(id)arg2;
- (void)promptForPasswordIfNeededOverController:(id)arg1 withCompletion:(id)arg2;
- (void)promptForPasswordIfNeededWithCompletion:(id)arg1;
- (void)promptForPasswordOverController:(id)arg1 withCompletion:(id)arg2;
- (BOOL)registerUserCredentialsName:(id)arg1 password:(id)arg2 error:(id*)arg3;
- (id)resetCompletion;
- (id)resetPromptControllerHost;
- (id)securityCodeRecoveryAttempt;
- (void)setAppleIDPassword:(id)arg1;
- (void)setAppleIDUsername:(id)arg1;
- (void)setBuddyNavigationController:(id)arg1;
- (void)setChangeSecurityCodeCompletion:(id)arg1;
- (void)setCircleJoinCompletion:(id)arg1;
- (void)setCircleWasReset:(BOOL)arg1;
- (void)setCompletion:(id)arg1;
- (void)setPasswordPromptCompletion:(id)arg1;
- (void)setResetCompletion:(id)arg1;
- (void)setResetPromptControllerHost:(id)arg1;
- (void)setSecurityCodeRecoveryAttempt:(id)arg1;
- (void)setSettingsSetupController:(id)arg1;
- (void)setStagedSecurityCode:(id)arg1 type:(int)arg2;
- (id)settingsSetupController;
- (void)showChangeSecurityCodeFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showContactAppleSupportPane;
- (void)showController:(id)arg1;
- (void)showEnableEscrowFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showEnableFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showEnableSyncFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showNetworkReachabilityError;
- (void)showPinChoiceAlert;
- (void)showRecoveryFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showRecoveryFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showResetAcknowledgementIfNeeded;
- (void)showResetAndJoinFlowOverController:(id)arg1 withCompletion:(id)arg2;
- (id)stagedSecurityCode;
- (int)stagedSecurityCodeType;
- (void)startNavigationSpinnerInViewController:(id)arg1;
- (void)stopNavigationSpinner;

@end
