/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface LSApplicationWorkspace : NSObject {
}

+ (void)_gkBeginObservingApplicationInstallationFor:(id)arg1 withCallback:(int (*)())arg2;
+ (void)_gkStopObservingApplicationInstallationFor:(id)arg1;
+ (id)defaultWorkspace;

- (id)URLOverrideForURL:(id)arg1;
- (BOOL)_LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3;
- (BOOL)_LSPrivateRebuildLaunchServicesDatabase;
- (void)_clearCachedAdvertisingIdentifier;
- (void)addObserver:(id)arg1;
- (id)allApplications;
- (id)allInstalledApplications;
- (id)applicationForOpeningResource:(id)arg1;
- (BOOL)applicationIsInstalled:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (void)clearAdvertisingIdentifier;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (id)delegateProxy;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (id)directionsApplications;
- (BOOL)establishConnection;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id)arg4;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2;
- (BOOL)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned int)arg2;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)installedApplications;
- (BOOL)invalidateIconCache:(id)arg1;
- (BOOL)openApplicationWithBundleID:(id)arg1;
- (BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)openURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)openURL:(id)arg1;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)placeholderApplications;
- (id)privateURLSchemes;
- (id)publicURLSchemes;
- (BOOL)registerApplication:(id)arg1;
- (BOOL)registerApplicationDictionary:(id)arg1 withObserverNotification:(unsigned int)arg2;
- (BOOL)registerApplicationDictionary:(id)arg1;
- (id)remoteObserver;
- (void)removeInstallProgressForBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id)arg3;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (BOOL)unregisterApplication:(id)arg1;
- (id)unrestrictedApplications;

@end
