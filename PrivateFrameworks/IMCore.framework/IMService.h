/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMService : NSObject <CKTranscriptDataRowObject> {
}

+ (id)aimService;
+ (id)allServices;
+ (id)allServicesNonBlocking;
+ (id)callService;
+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;
+ (id)facetimeService;
+ (void)forgetStatusImageAppearance;
+ (id)iMessageService;
+ (id)imageNameForStatus:(unsigned int)arg1;
+ (id)imageURLForStatus:(unsigned int)arg1;
+ (BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (id)jabberService;
+ (id)myIdleTime;
+ (unsigned int)myStatus;
+ (id)notificationCenter;
+ (id)serviceWithName:(id)arg1;
+ (id)smsService;
+ (unsigned int)statusForABPerson:(id)arg1;
+ (unsigned int)statusForIMPerson:(id)arg1;
+ (id)subnetService;

- (Class)__ck_displayCellClass;
- (id)__ck_displayCellIdentifier;
- (BOOL)__ck_displayColor;
- (id)__ck_displayContactImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })__ck_displayContentAlignmentInsets;
- (BOOL)__ck_displayDuringSend;
- (id)__ck_displayGUIDWithMessage:(id)arg1;
- (id)__ck_displayName;
- (struct CGSize { float x1; float x2; })__ck_displaySize:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg1;
- (BOOL)__ck_displayTranscriptOrientation;
- (BOOL)__ck_isSMS;
- (BOOL)__ck_isiMessage;
- (int)__ck_maxRecipientCount;
- (void)__ck_prewarmForDisplay;
- (BOOL)__ck_transcriptUsesTextAlignmentInsets;
- (BOOL)__ck_wantsDrawerLayout;
- (id)attributedTranscriptText;
- (id)canonicalFormOfID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)infoForAllPeople;
- (id)infoForAllScreenNames;
- (id)infoForDisplayedPeople;
- (id)infoForPerson:(id)arg1;
- (id)infoForPreferredScreenNames;
- (id)infoForScreenName:(id)arg1;
- (BOOL)initialSyncPerformed;
- (BOOL)isEnabled;
- (id)localizedName;
- (id)localizedShortName;
- (void)login;
- (void)logout;
- (id)myScreenNames;
- (id)name;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (unsigned int)status;

@end
