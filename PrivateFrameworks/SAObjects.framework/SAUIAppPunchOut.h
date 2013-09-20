/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString, NSURL, SAUIAddViews, SAUIImageResource;

@interface SAUIAppPunchOut : SABaseClientBoundCommand {
}

@property(retain) SAUIAddViews * alternativePunchOut;
@property BOOL appAvailableInStorefront;
@property(copy) NSString * appDisplayName;
@property(retain) SAUIImageResource * appIcon;
@property(copy) NSDictionary * appIconMap;
@property BOOL appInstalled;
@property(copy) NSURL * appStoreUri;
@property(copy) NSString * bundleId;
@property(copy) NSString * providerId;
@property(copy) NSString * punchOutName;
@property(copy) NSURL * punchOutUri;

+ (id)appPunchOut;
+ (id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2;

- (void)afui_getInstallAppPunchoutWithCompletion:(id)arg1;
- (id)afui_punchOutAppNotAvailableViews;
- (id)afui_punchOutFailureViews;
- (id)alternativePunchOut;
- (BOOL)appAvailableInStorefront;
- (id)appDisplayName;
- (id)appIcon;
- (id)appIconMap;
- (BOOL)appInstalled;
- (id)appStoreUri;
- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)providerId;
- (id)punchOutName;
- (id)punchOutUri;
- (BOOL)requiresResponse;
- (void)setAlternativePunchOut:(id)arg1;
- (void)setAppAvailableInStorefront:(BOOL)arg1;
- (void)setAppDisplayName:(id)arg1;
- (void)setAppIcon:(id)arg1;
- (void)setAppIconMap:(id)arg1;
- (void)setAppInstalled:(BOOL)arg1;
- (void)setAppStoreUri:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setPunchOutName:(id)arg1;
- (void)setPunchOutUri:(id)arg1;

@end
