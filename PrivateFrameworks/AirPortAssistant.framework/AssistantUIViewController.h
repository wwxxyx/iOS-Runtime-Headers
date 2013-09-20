/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <AssistantViewControllerDelegate>, AssistantCallbackController, AssistantSubUIViewController, AssistantUIController, NSArray, NSDictionary, NSString, NetTopoMiniStaticLayout, UIActivityIndicatorView, UIAlertView, UIBarButtonItem, UILabel, UITableView, UITextField, UIView;

@interface AssistantUIViewController : AUUITableViewController <AssistantUIDelegate, AssistantCallbackUIDelegate, UINavigationControllerDelegate, AssistantSubcontrollerHelper, TableViewManagerDelegate> {
    id _assistantDelegate;
    AssistantUIController *_assistantUIController;
    AssistantCallbackController *_controllerContext;
    int _controllerContextSelector;
    AssistantSubUIViewController *_currentSubController;
    int _currentUIConfigStep;
    BOOL _goingBack;
    NSString *_macAddress;
    UITableView *_mainTableView;
    NSDictionary *_mfiAccessoryResponseDict;
    NSArray *_paramScanResults;
    NSDictionary *_recommendationParamDict;
    NSDictionary *_scanInfoRecord;
    unsigned int _selectedActionTag;
    NSString *_settingUpStatusText;
    UIAlertView *askUserQuestionAlertView;
    UIBarButtonItem *cancelButton;
    UIAlertView *connectionVerificationAlertView;
    UITextField *currentTextField;
    BOOL iPadIdiom;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    int letMeChooseButtonIndex;
    UIBarButtonItem *nextButton;
    UIAlertView *passwordAlertView;
    int recommendationButtonIndex;
    NSDictionary *recommendationParamDict;
    int restoreButtonIndex;
    BOOL showingPasswordsAtEnd;
    UILabel *spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UIView *spinnerWithStatusAdjacentView;
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    UIView *spinnerWithStatusBelowView;
    UIView *tableHeaderContainerView;
    UIView *topoContainerView;
    NetTopoMiniStaticLayout *topoLayout;
    UIView *topoView;
}

@property(retain) AssistantUIController * _assistantUIController;
@property(retain) AssistantCallbackController * _controllerContext;
@property(retain) UIAlertView * askUserQuestionAlertView;
@property <AssistantViewControllerDelegate> * assistantDelegate;
@property(retain) UIBarButtonItem * cancelButton;
@property(retain) AssistantSubUIViewController * currentSubController;
@property(retain) UITextField * currentTextField;
@property BOOL iPadIdiom;
@property(retain) UIView * justTextContainerView;
@property UILabel * justTextLabel;
@property int letMeChooseButtonIndex;
@property(copy) NSString * macAddress;
@property(retain) UITableView * mainTableView;
@property(retain) UIBarButtonItem * nextButton;
@property(copy) NSArray * paramScanResults;
@property(retain) UIAlertView * passwordAlertView;
@property int recommendationButtonIndex;
@property(copy) NSDictionary * recommendationParamDict;
@property int restoreButtonIndex;
@property(copy) NSDictionary * scanInfoRecord;
@property(retain) NSString * settingUpStatusText;
@property(retain) UIView * spinnerWithStatusAdjacentView;
@property(retain) UIView * spinnerWithStatusBelowView;
@property(retain) UIView * tableHeaderContainerView;
@property(retain) UIView * topoContainerView;
@property(retain) NetTopoMiniStaticLayout * topoLayout;

+ (void)readjustSubviewsInContainer:(id)arg1;

- (id)_assistantUIController;
- (id)_controllerContext;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)askUserQuestionAlertView;
- (id)assistantDelegate;
- (void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)baseStationConfigurationComplete:(id)arg1;
- (void)callbackAskCancel;
- (long)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (long)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
- (id)cancelButton;
- (void)confirmSkipWANPort;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)continueWithDiagsAndUsageStats;
- (void)continueWithGuestNetSettings;
- (void)continueWithPPPoESettings;
- (void)continueWithSwapCabling;
- (id)currentSubController;
- (id)currentTextField;
- (void)dealloc;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)displayViewListInView:(id)arg1 newSubviews:(id)arg2 withAnimation:(BOOL)arg3;
- (void)doneWithAssistantResult:(long)arg1;
- (void)handeImmediateCancel;
- (void)handleCancelButton:(id)arg1;
- (void)handleCancelRequest:(BOOL)arg1;
- (void)handleNextButton:(id)arg1;
- (BOOL)iPadIdiom;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initializeServiesDone;
- (id)justTextContainerView;
- (id)justTextLabel;
- (void)keyboardReturnKeySetEnabled:(BOOL)arg1;
- (int)letMeChooseButtonIndex;
- (id)macAddress;
- (id)mainTableView;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 newLayout:(id)arg3;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 targetProductID:(id)arg3 targetDeviceKind:(id)arg4 targetName:(id)arg5 targetWiFiName:(id)arg6 sourceProductID:(id)arg7 sourceDeviceKind:(id)arg8 sourceName:(id)arg9 sourceWiFiName:(id)arg10 connectionType:(id)arg11;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)newStepByStepControllerForStep:(int)arg1;
- (id)nextButton;
- (id)paramScanResults;
- (id)passwordAlertView;
- (void)playDoneSound;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)presentUIForRecommendationResult:(long)arg1 paramDict:(id)arg2;
- (void)presentUIForRecommendationStatus;
- (void)presentUIForRecommmendationTargetInfo:(id)arg1;
- (void)presentUIForSetupResult:(long)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
- (void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForStepByStepResult:(long)arg1;
- (void)presentUIForStepByStepStart;
- (void)presentWaitingForWANViewWithContinueText:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)radioNameFromBaseStation:(id)arg1;
- (void)readyToGuess;
- (int)recommendationButtonIndex;
- (id)recommendationParamDict;
- (void)replaceSubviewsInView:(id)arg1 newSubviews:(id)arg2 layoutOptions:(int)arg3 withAnimation:(BOOL)arg4;
- (int)restoreButtonIndex;
- (id)scanInfoRecord;
- (void)setAskUserQuestionAlertView:(id)arg1;
- (void)setAssistantDelegate:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCurrentSubController:(id)arg1;
- (void)setCurrentTextField:(id)arg1;
- (void)setIPadIdiom:(BOOL)arg1;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setLetMeChooseButtonIndex:(int)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setMainTableView:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setParamScanResults:(id)arg1;
- (void)setPasswordAlertView:(id)arg1;
- (void)setRecommendationButtonIndex:(int)arg1;
- (void)setRecommendationParamDict:(id)arg1;
- (void)setRestoreButtonIndex:(int)arg1;
- (void)setScanInfoRecord:(id)arg1;
- (void)setSettingUpStatusText:(id)arg1;
- (void)setSpinnerWithStatusAdjacentView:(id)arg1;
- (void)setSpinnerWithStatusBelowView:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setTopoContainerView:(id)arg1;
- (void)setTopoLayout:(id)arg1;
- (void)set_assistantUIController:(id)arg1;
- (void)set_controllerContext:(id)arg1;
- (id)settingUpStatusText;
- (void)setupCompleteShowPasswords:(BOOL)arg1;
- (void)showAskUserForPPPoECredentialsForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showAskUserPluginAudioCablingForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showAskUserSwapCablingForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showTellUserToFixTheirInternetConnection;
- (void)showTellUserToPlugInEthernetForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(long)arg1 paramDict:(id)arg2;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
- (void)showUIForSetupStatus;
- (void)skipPluginAudioCabling;
- (void)skipWANPort;
- (id)spinnerWithStatusAdjacentView;
- (id)spinnerWithStatusBelowView;
- (void)startSetup:(id)arg1;
- (id)tableHeaderContainerView;
- (id)topoContainerView;
- (id)topoLayout;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
