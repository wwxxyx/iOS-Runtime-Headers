/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@class NSString;

@interface AOSLostModeInfo : NSObject <NSSecureCoding> {
    BOOL _lostModeEnabled;
    NSString *_message;
    NSString *_phoneNumber;
}

@property BOOL lostModeEnabled;
@property(retain) NSString * message;
@property(retain) NSString * phoneNumber;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)lostModeEnabled;
- (id)message;
- (id)phoneNumber;
- (void)setLostModeEnabled:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
