/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSDictionary, NSString;

@interface IMUserNotification : NSObject {
    id _reserved;
}

@property(readonly) unsigned int displayFlags;
@property(readonly) NSDictionary * displayInformation;
@property(readonly) id identifier;
@property(retain) NSString * representedApplicationBundle;
@property(readonly) unsigned int response;
@property(readonly) unsigned int responseFlags;
@property(readonly) NSDictionary * responseInformation;
@property BOOL showInLockScreen;
@property(readonly) double timeout;
@property(retain) NSDictionary * userInfo;
@property BOOL usesNotificationCenter;

+ (id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned int)arg3 displayFlags:(unsigned int)arg4 displayInformation:(id)arg5;
+ (id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6;

- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned int)arg3 displayInformation:(id)arg4;
- (void)_setResponseFlags:(unsigned int)arg1 responseInformation:(id)arg2;
- (void)dealloc;
- (unsigned int)displayFlags;
- (id)displayInformation;
- (id)identifier;
- (id)representedApplicationBundle;
- (unsigned int)response;
- (unsigned int)responseFlags;
- (id)responseInformation;
- (void)setRepresentedApplicationBundle:(id)arg1;
- (void)setShowInLockScreen:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUsesNotificationCenter:(BOOL)arg1;
- (BOOL)showInLockScreen;
- (double)timeout;
- (id)userInfo;
- (BOOL)usesNotificationCenter;

@end
