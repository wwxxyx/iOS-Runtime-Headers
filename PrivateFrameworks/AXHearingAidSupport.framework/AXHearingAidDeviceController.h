/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class AXTimer, CBCentralManager, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AXHearingAidDeviceController : NSObject <CBCentralManagerDelegate> {
    AXTimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    NSMutableArray *_availablePeripherals;
    NSMutableArray *_availableSearchBlocks;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    NSMutableArray *_connectedDevices;
    NSMutableArray *_connectedSearchBlocks;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXTimer *_deviceUpdatesTimer;
    BOOL _isScanning;
    NSMutableArray *_loadedDevices;
    NSMutableArray *_persistentDevices;
    NSMutableArray *_updateDeviceBlocks;
    NSMutableArray *centralRequestBlocks;
}

@property(retain) NSMutableArray * availablePeripherals;
@property(retain) NSMutableArray * availableSearchBlocks;
@property(retain) NSMutableArray * centralRequestBlocks;
@property(retain) NSMutableArray * connectedDevices;
@property(retain) NSMutableArray * connectedSearchBlocks;
@property(retain) NSMutableArray * loadedDevices;
@property(retain) NSMutableArray * persistentDevices;
@property(retain) NSMutableArray * updateDeviceBlocks;

+ (id)sharedController;

- (void)addAvailableDevice:(id)arg1;
- (void)addConnectedDevice:(id)arg1;
- (void)addLoadedDevice:(id)arg1;
- (id)availablePeripherals;
- (id)availableSearchBlocks;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)centralRequestBlocks;
- (void)clearAvailableDevices;
- (void)clearConnectedDevices;
- (void)clearLoadedDevices;
- (void)clearMissingHearingAids;
- (void)connectToPeripheral:(id)arg1;
- (id)connectedDevices;
- (id)connectedSearchBlocks;
- (void)dealloc;
- (void)device:(id)arg1 didSubsumeSlave:(id)arg2;
- (void)device:(id)arg1 didUpdateProperty:(int)arg2;
- (void)deviceDidFinishLoading:(id)arg1;
- (void)disconnectFromPeripheral:(id)arg1;
- (id)hearingAidForPeripheral:(id)arg1;
- (id)hearingAidsForUUID:(id)arg1;
- (id)init;
- (BOOL)isBluetoothAvailable;
- (BOOL)isScanning;
- (id)loadedDevices;
- (void)loadedDevicesDidChange;
- (void)pairedHearingAidsDidChange;
- (id)persistentDevices;
- (void)registerForPropertyUpdates:(id)arg1;
- (void)removeAvailableDevice:(id)arg1;
- (void)removeConnectedDevice:(id)arg1;
- (void)removeLoadedDevice:(id)arg1;
- (void)resetConnectionToPeripheral:(id)arg1;
- (void)searchForAvailableDevices;
- (void)searchForAvailableDevicesWithCompletion:(id)arg1;
- (void)searchForConnectedDevices;
- (void)sendRequestToCentralManager:(id)arg1;
- (void)setAvailablePeripherals:(id)arg1;
- (void)setAvailableSearchBlocks:(id)arg1;
- (void)setCentralRequestBlocks:(id)arg1;
- (void)setConnectedDevices:(id)arg1;
- (void)setConnectedSearchBlocks:(id)arg1;
- (void)setLoadedDevices:(id)arg1;
- (void)setPersistentDevices:(id)arg1;
- (void)setUpdateDeviceBlocks:(id)arg1;
- (void)stopPropertyUpdates;
- (void)stopSearching;
- (id)updateDeviceBlocks;

@end
