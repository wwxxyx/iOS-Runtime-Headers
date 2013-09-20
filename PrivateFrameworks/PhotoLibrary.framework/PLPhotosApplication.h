/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <NSCoding>, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, PLDebugViewController, PLLibraryImageDataProvider, PLUIController, UIViewController, UIWindow;

@interface PLPhotosApplication : UIApplication <PLDebugViewControllerDelegate, UIApplicationDelegate, PLPublishingAgentDelegate, MFMailComposeViewControllerDelegate> {
    unsigned int _backgroundTaskIdentifier;
    BOOL _cameraCancelledRemaking;
    UIViewController *_composeParentViewController;
    BOOL _composeSheetIsReady;
    NSString *_currentTestName;
    NSDictionary *_currentTestOptions;
    PLDebugViewController *_debugViewController;
    int _delaySuspendCount;
    int _enableNetworkingFlagsCount;
    PLLibraryImageDataProvider *_imageDataProvider;
    BOOL _inactiveUnderTaskSwitcher;
    BOOL _isOnWifi;
    BOOL _isReachable;
    BOOL _isRemaking;
    int _observeForRechabilityChanges;
    int _observeForiMessageAvailability;
    int _photoStreamActivityToken;
    BOOL _photoStreamIsBusy;
    NSMutableSet *_publishingAgents;
    NSMutableDictionary *_publishingAgentsByMediaItem;
    BOOL _receivingRemoteControlEvents;
    int _sendingEmailCount;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
    BOOL _sharedPhotoStreamIsBusy;
    BOOL _shouldCancelPublishAfterRemaking;
    NSString *_trimmedFilePath;
    PLUIController *_uiController;
    BOOL _urlNeedsHandling;
    BOOL _wantsToSuspend;
    UIWindow *_window;
}

@property <NSCoding> * autosaveIdentifier;
@property(retain) NSString * currentTestName;
@property(retain) NSDictionary * currentTestOptions;
@property(readonly) BOOL isOnWifi;
@property(readonly) BOOL isReachable;
@property BOOL sendingEmail;
@property(retain) UIWindow * window;

+ (void)initialize;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_autosaveMailComposition;
- (void)_cancelPublish;
- (void)_cancelRemaking;
- (void)_cleanUpPendingRemakingAndPublishIfNeeded;
- (void)_clearPublishingSheetResponders;
- (void)_discardMediaFilesForPublishingAgentsIfNeeded;
- (void)_discardTrimmedFile;
- (void)_dismissMailComposeController;
- (id)_extendLaunchTest;
- (void)_finishExtendedTest;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)_setComposeParentViewController:(id)arg1;
- (void)_setImageOptions;
- (void)_showAlertForInterruptionDuringRemaking;
- (void)_showMailComposeSheetForAutosavedMessageWithIdentifier:(id)arg1;
- (void)_startObservingForiMessageAvailability;
- (void)_startObservingReachabilityChanges;
- (void)_statusBarDoubleTap:(id)arg1;
- (void)_stopObservingForiMessageAvailability;
- (void)_stopObservingReachabilityChanges;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)_updatePhotoStreamProgressDisplay;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updateSuspensionSettings;
- (void)addPublishingAgent:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)applicationSuspend:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)autosaveIdentifier;
- (void)cleanStateAfterPublishForAgent:(id)arg1;
- (id)composeMailForPhotoData:(id)arg1 attachmentName:(id)arg2 withMimeType:(id)arg3 extension:(id)arg4 parentViewController:(id)arg5;
- (void)composeMailForPhotos:(id)arg1 parentViewController:(id)arg2;
- (void)composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2 parentViewController:(id)arg3;
- (id)currentTestName;
- (id)currentTestOptions;
- (id)currentUIConfiguration;
- (void)dealloc;
- (void)debugViewControllerDidDismiss:(id)arg1;
- (void)disableNetworkObservation;
- (void)disableObservingForiMessageAvailability;
- (void)dismissPublishingViewControllers;
- (void)enableNetworkObservation;
- (void)enableObservingForiMessageAvailability;
- (void*)getSharedAddressBook;
- (id)imageDataProvider;
- (BOOL)isCameraApp;
- (BOOL)isComposeSheetReady;
- (BOOL)isComposingEmail;
- (BOOL)isOnWifi;
- (BOOL)isReachable;
- (BOOL)isiMessageEnabed;
- (void)mailComposeController:(id)arg1 bodyFinishedLoadingWithResult:(BOOL)arg2 error:(id)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)mainWindow;
- (id)newMailComposeViewControllerWithPhotoData:(id)arg1 attachmentName:(id)arg2 withMimeType:(id)arg3 extension:(id)arg4 identifier:(id*)arg5;
- (void)photosPreferencesChanged;
- (void)presentMailComposeController:(id)arg1 parentViewController:(id)arg2;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (id)publishingAgentForMediaItem:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;
- (id)rootViewController;
- (BOOL)sendingEmail;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setCurrentTestName:(id)arg1;
- (void)setCurrentTestOptions:(id)arg1;
- (void)setDelaySuspend:(BOOL)arg1;
- (void)setEnableNetworkingFlags:(BOOL)arg1;
- (void)setIsRemaking:(BOOL)arg1;
- (void)setReceivingRemoteControlEvents:(BOOL)arg1;
- (void)setSendingEmail:(BOOL)arg1;
- (void)setStatusBarStyleIfNecessary:(int)arg1;
- (void)sharedFinishedLaunching:(BOOL)arg1;
- (BOOL)shouldAllowSBAlertSupression;
- (BOOL)useCompatibleSuspensionAnimation;
- (BOOL)visitViewControllersWithBlock:(id)arg1;

@end
