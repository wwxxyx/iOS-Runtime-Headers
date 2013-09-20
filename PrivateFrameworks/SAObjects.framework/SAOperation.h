/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString;

@interface SAOperation : AceObject <SAAceSerializable> {
}

@property(copy) NSDictionary * constraints;
@property(copy) NSString * domainId;
@property(copy) NSString * operationId;

+ (id)operation;
+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;

- (id)constraints;
- (id)domainId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)operationId;
- (void)setConstraints:(id)arg1;
- (void)setDomainId:(id)arg1;
- (void)setOperationId:(id)arg1;

@end
