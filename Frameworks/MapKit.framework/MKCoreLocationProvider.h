/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKLocationProviderDelegate>, CLLocationManager, NSBundle, NSString;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, MKLocationProvider> {
    int _authorizationStatus;
    CLLocationManager *_clLocationManager;
    <MKLocationProviderDelegate> *_delegate;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    BOOL _locationServicesPreferencesDialogEnabled;
}

@property(readonly) CLLocationManager * _clLocationManager;
@property int activityType;
@property(readonly) BOOL airplaneModeBlocksLocation;
@property(readonly) int authorizationStatus;
@property <MKLocationProviderDelegate> * delegate;
@property double desiredAccuracy;
@property double distanceFilter;
@property(retain) NSBundle * effectiveBundle;
@property(copy) NSString * effectiveBundleIdentifier;
@property(readonly) double expectedGpsUpdateInterval;
@property int headingOrientation;
@property(getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(getter=isMonitoringRegionsAvailable,readonly) BOOL monitoringRegionsAvailable;
@property(readonly) BOOL usesCLMapCorrection;

- (id)_clLocationManager;
- (void)_createCLLocationManager;
- (void)_resetForNewEffectiveBundle;
- (void)_updateAuthorizationStatus;
- (int)activityType;
- (BOOL)airplaneModeBlocksLocation;
- (int)authorizationStatus;
- (void)dealloc;
- (id)delegate;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (id)init;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (BOOL)isMonitoringRegionsAvailable;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)setActivityType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (void)startMonitoringRegion:(id)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)stopMonitoringRegion:(id)arg1;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (BOOL)usesCLMapCorrection;

@end
