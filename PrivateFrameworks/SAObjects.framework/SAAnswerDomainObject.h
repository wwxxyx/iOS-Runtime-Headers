/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SAAnswerDirectAnswer, SAUIAppPunchOut;

@interface SAAnswerDomainObject : SADomainObject {
}

@property(retain) SAUIAppPunchOut * appPunchOut;
@property(copy) NSString * category;
@property(retain) SAAnswerDirectAnswer * directAnswer;
@property(copy) NSArray * linkedAnswerGroups;
@property(copy) NSArray * structuredAnswers;

+ (id)domainObject;
+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)appPunchOut;
- (id)category;
- (id)directAnswer;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)linkedAnswerGroups;
- (void)setAppPunchOut:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDirectAnswer:(id)arg1;
- (void)setLinkedAnswerGroups:(id)arg1;
- (void)setStructuredAnswers:(id)arg1;
- (id)structuredAnswers;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
