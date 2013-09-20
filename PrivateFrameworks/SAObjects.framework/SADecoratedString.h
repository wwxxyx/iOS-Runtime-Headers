/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SADecoratedString : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * regions;
@property(copy) NSString * text;

+ (id)decoratedString;
+ (id)decoratedStringWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)regions;
- (void)setRegions:(id)arg1;
- (void)setText:(id)arg1;
- (id)siriui_attributedStringValueWithAttribute:(id)arg1 value:(id)arg2 forRegionsWithProperty:(id)arg3;
- (void)siriui_enumeratePropertyRangesUsingBlock:(id)arg1;
- (void)siriui_enumerateRangesOfRegionsWithProperty:(id)arg1 usingBlock:(id)arg2;
- (id)text;

@end
