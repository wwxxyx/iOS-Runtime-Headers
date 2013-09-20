/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

@class NSDictionary, NSString;

@interface IDSProfileGetDefaultInvitationContext : IDSProfileMessage <NSCopying> {
    NSString *_responseBasePhoneNumber;
    NSDictionary *_responseExtraInfo;
    NSString *_responseRegionID;
    BOOL _responseValidated;
}

@property(copy) NSString * responseBasePhoneNumber;
@property(copy) NSDictionary * responseExtraInfo;
@property(copy) NSString * responseRegionID;
@property BOOL responseValidated;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (id)responseBasePhoneNumber;
- (id)responseExtraInfo;
- (id)responseRegionID;
- (BOOL)responseValidated;
- (void)setResponseBasePhoneNumber:(id)arg1;
- (void)setResponseExtraInfo:(id)arg1;
- (void)setResponseRegionID:(id)arg1;
- (void)setResponseValidated:(BOOL)arg1;

@end
