/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAAceSerializable>, NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable> {
}

@property(copy) NSString * data;
@property(copy) NSString * displayText;
@property(retain) SAPerson * object;
@property(retain) <SAAceSerializable> * typedData;

+ (id)personAttribute;
+ (id)personAttributeWithDictionary:(id)arg1 context:(id)arg2;

- (id)data;
- (id)displayText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (void)setData:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setTypedData:(id)arg1;
- (id)typedData;

@end
