/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAAnswerDefinitionVariation : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * examples;
@property(copy) NSString * variation;

+ (id)definitionVariation;
+ (id)definitionVariationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)examples;
- (id)groupIdentifier;
- (void)setExamples:(id)arg1;
- (void)setVariation:(id)arg1;
- (id)variation;

@end
