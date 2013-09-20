/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload {
    NSNumber *_isAlphanumericPasscodeRequired;
    NSNumber *_isManualFetchingWhenRoaming;
    NSNumber *_isPasscodeRequired;
    NSNumber *_isSimplePasscodeAllowed;
    NSNumber *_maxFailedAttempts;
    NSNumber *_maxGracePeriodMinutes;
    NSNumber *_maxInactivityMinutes;
    NSNumber *_maxPasscodeAgeDays;
    NSNumber *_minComplexCharacters;
    NSNumber *_minLength;
    NSNumber *_passcodeHistoryCount;
}

@property(readonly) NSNumber * isAlphanumericPasscodeRequired;
@property(readonly) NSNumber * isManualFetchingWhenRoaming;
@property(readonly) NSNumber * isPasscodeRequired;
@property(readonly) NSNumber * isSimplePasscodeAllowed;
@property(readonly) NSNumber * maxFailedAttempts;
@property(readonly) NSNumber * maxGracePeriodMinutes;
@property(readonly) NSNumber * maxInactivityMinutes;
@property(readonly) NSNumber * maxPasscodeAgeDays;
@property(readonly) NSNumber * minComplexCharacters;
@property(readonly) NSNumber * minLength;
@property(readonly) NSNumber * passcodeHistoryCount;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)isAlphanumericPasscodeRequired;
- (id)isManualFetchingWhenRoaming;
- (id)isPasscodeRequired;
- (id)isSimplePasscodeAllowed;
- (id)maxFailedAttempts;
- (id)maxGracePeriodMinutes;
- (id)maxInactivityMinutes;
- (id)maxPasscodeAgeDays;
- (id)minComplexCharacters;
- (id)minLength;
- (id)passcodeHistoryCount;
- (id)restrictions;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)title;

@end
