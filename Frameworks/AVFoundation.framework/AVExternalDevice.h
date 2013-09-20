/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVExternalDeviceInternal, NSArray, NSData, NSDictionary, NSString;

@interface AVExternalDevice : NSObject {
    AVExternalDeviceInternal *_externalDevice;
}

@property(readonly) NSArray * HIDMappings;
@property(readonly) NSData * dockIcon;
@property(readonly) NSString * modelName;
@property(readonly) NSArray * screenIDs;
@property(readonly) NSDictionary * screenInputCapabilities;
@property(readonly) NSData * settingsIcon;

+ (id)currentExternalDevice;

- (id)HIDMappings;
- (struct OpaqueFigEndpoint { }*)_figEndpoint;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { }*)arg1;
- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)dockIcon;
- (void)finalize;
- (id)init;
- (id)initWithCurrentExternalDevice;
- (id)modelName;
- (void)requestCarUI;
- (id)screenIDs;
- (id)screenInputCapabilities;
- (id)settingsIcon;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;

@end
