/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSNumber, SAPersonAttribute;

@interface SAPhoneCallSearchResult : SADomainObject {
}

@property(copy) NSDate * callTime;
@property(retain) SAPersonAttribute * contact;
@property(copy) NSNumber * isNew;

+ (id)callSearchResult;
+ (id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)callTime;
- (id)contact;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isNew;
- (void)setCallTime:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setIsNew:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
