/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <SAAceSerializable> {
}

@property(copy) NSDictionary * operations;
@property(copy) NSString * providerId;
@property BOOL supportsAuthentication;

+ (id)endpoint;
+ (id)endpointWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)operations;
- (id)providerId;
- (void)setOperations:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setSupportsAuthentication:(BOOL)arg1;
- (BOOL)supportsAuthentication;

@end
