/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendarItem, NSString, NSURL;

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {
    EKCalendarItem *_owner;
}

@property(readonly) NSURL * URL;
@property(readonly) NSString * UUID;
@property(copy) NSURL * address;
@property(copy) NSString * comment;
@property(copy) NSString * emailAddress;
@property(copy) NSString * firstName;
@property(readonly) BOOL isCurrentUser;
@property(copy) NSString * lastName;
@property(readonly) NSString * name;
@property(readonly) EKCalendarItem * owner;
@property(readonly) int participantRole;
@property(readonly) int participantStatus;
@property(readonly) int participantType;

+ (void*)findABPersonByURL:(id)arg1 inAddressBook:(void*)arg2;

- (void*)ABRecordWithAddressBook:(void*)arg1;
- (id)URL;
- (id)UUID;
- (id)_persistentItem;
- (id)address;
- (id)comment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3;
- (id)emailAddress;
- (id)firstName;
- (BOOL)isCurrentUser;
- (BOOL)isEqualToParticipant:(id)arg1;
- (id)lastName;
- (id)name;
- (id)owner;
- (int)participantRole;
- (int)participantStatus;
- (int)participantType;
- (void)setAddress:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;

@end
