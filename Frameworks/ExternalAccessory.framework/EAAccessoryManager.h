/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EABluetoothAccessoryPicker, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate, EADiscoveredWirelessAccessoryDelegate> {
    NSMutableArray *_connectedAccessories;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableArray *_discoveredWirelessAccessories;
    EABluetoothAccessoryPicker *_picker;
    id _pickerCompletion;
    NSTimer *_pickerTimer;
    NSString *_selectedBluetoothAddress;
    BOOL _sequesterNewAccessories;
    NSMutableArray *_sequesteredAccessories;
}

@property(readonly) NSArray * connectedAccessories;

+ (void)accessibilityStartListening;
+ (void)accessibilityStopListening;
+ (BOOL)isLoggingEnabled;
+ (void)registerCapabilities:(unsigned int)arg1;
+ (id)sharedAccessoryManager;

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cleanUpForTaskSuspend;
- (id)_connectedAccessories;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_externalAccessoryIPodOutOptionsChanged:(id)arg1;
- (void)_externalAccessoryPortPropertyChanged:(id)arg1;
- (void)_externalAccessoryReconnected:(id)arg1;
- (void)_externalAccessoryUpdated:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (void)_handleAccessoryNotificationTimeout:(id)arg1;
- (void)_iapServerDied:(id)arg1;
- (id)_initFromSingletonCreationMethod;
- (void)_integrateSequesteredAccessories;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1;
- (void)_removeAllAccessoriesFromArray:(id)arg1 notifyClients:(BOOL)arg2;
- (void)_timeSyncInfoUpdated:(id)arg1;
- (void)_vehicleDataUpdated:(id)arg1;
- (void)_wirelessAccessoryAvailable:(id)arg1;
- (void)_wirelessAccessoryDidConnect:(id)arg1;
- (void)_wirelessAccessoryDisconnected:(id)arg1;
- (void)_wirelessAccessoryNotAvailable:(id)arg1;
- (void)accessibilityAction:(id)arg1;
- (void)accessibilityContextChange:(id)arg1;
- (void)accessibilityItemPropertyRequest:(id)arg1;
- (void)accessibilitySystemPropertyChange:(id)arg1;
- (void)accessibilitySystemPropertyRequest:(id)arg1;
- (BOOL)appDeclaresProtocol:(id)arg1;
- (BOOL)areLocationAccessoriesEnabled;
- (id)connectedAccessories;
- (void)dealloc;
- (void)devicePicker:(id)arg1 didSelectAddress:(id)arg2 errorCode:(int)arg3;
- (void)disconnectWirelessAccessory:(id)arg1;
- (void)endSession:(unsigned int)arg1 forConnectionID:(unsigned int)arg2;
- (id)init;
- (void)initiateConnectionToWirelessAccessory:(id)arg1;
- (void)openCompleteForSession:(unsigned int)arg1 connectionID:(unsigned int)arg2;
- (void)pointOfInterestSelection:(id)arg1;
- (void)registerForLocalNotifications;
- (void)setAreLocationAccessoriesEnabled:(BOOL)arg1;
- (void)setShouldAllowCppRuntime:(BOOL)arg1;
- (void)setShouldAllowInternalProtocols:(BOOL)arg1;
- (BOOL)shouldAllowCppRuntime;
- (BOOL)shouldAllowInternalProtocols;
- (void)showBluetoothAccessoryPickerWithNameFilter:(id)arg1 completion:(id)arg2;
- (void)startWirelessAccessoryDiscovery;
- (void)stopWirelessAccessoryDiscovery;
- (void)unregisterForLocalNotifications;
- (void)wakeAccessoryWithToken:(id)arg1;

@end
