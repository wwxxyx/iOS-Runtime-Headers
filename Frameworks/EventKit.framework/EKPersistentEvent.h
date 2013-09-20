/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, NSDate, NSString, NSURL;

@interface EKPersistentEvent : EKPersistentCalendarItem {
    struct { 
        int years; 
        int months; 
        int days; 
        int hours; 
        int minutes; 
        double seconds; 
    } _cachedDurationUnits;
}

@property(copy) NSURL * URL;
@property(copy) NSArray * actions;
@property(readonly) BOOL allowsParticipationStatusModifications;
@property int availability;
@property(readonly) int birthdayID;
@property(readonly) double duration;
@property(readonly) struct { int x1; int x2; int x3; int x4; int x5; double x6; } durationUnits;
@property(getter=isEditable,readonly) BOOL editable;
@property(copy) NSDate * endDate;
@property(readonly) NSString * eventIdentifier;
@property(getter=isFloating,readonly) BOOL floating;
@property(getter=isInvitation,readonly) BOOL invitation;
@property(readonly) unsigned int invitationChangedProperties;
@property unsigned int invitationStatus;
@property(getter=isMeeting,readonly) BOOL meeting;
@property unsigned int modifiedProperties;
@property BOOL needsOccurrenceCacheUpdate;
@property(copy) NSDate * originalStartDate;
@property int participationStatus;
@property(readonly) int pendingParticipationStatus;
@property unsigned int privacyLevel;
@property(copy) NSString * responseComment;
@property int status;

+ (id)defaultPropertiesToLoad;
+ (id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3;
+ (id)relations;

- (id)URL;
- (void)_adjustForNewCalendar;
- (BOOL)_areDurationUnitsCached;
- (BOOL)_hasExternalIDOrDeliverySource;
- (void)_invalidateCachedDurationUnits;
- (id)actions;
- (void)addAction:(id)arg1;
- (BOOL)allowsParticipationStatusModifications;
- (int)availability;
- (int)birthdayID;
- (int)birthdayId;
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;
- (id)committedStartDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deleteFromOccurrenceDateOnward:(id)arg1;
- (id)description;
- (id)detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3;
- (double)duration;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })durationUnits;
- (id)endDate;
- (int)entityType;
- (id)eventIdentifier;
- (id)exportToICS;
- (void)filterExceptionDates;
- (BOOL)hasValidEventAction;
- (id)initCommon;
- (unsigned int)invitationChangedProperties;
- (unsigned int)invitationStatus;
- (BOOL)isEditable;
- (BOOL)isFloating;
- (BOOL)isInvitation;
- (BOOL)isMeeting;
- (unsigned int)modifiedProperties;
- (BOOL)needsOccurrenceCacheUpdate;
- (id)organizer;
- (id)originalStartDate;
- (int)participationStatus;
- (int)pendingParticipationStatus;
- (void)primitiveValueChangedForKey:(id)arg1;
- (unsigned int)privacyLevel;
- (BOOL)refresh;
- (void)removeAction:(id)arg1;
- (id)responseComment;
- (BOOL)responseMustApplyToAll;
- (void)setActions:(id)arg1;
- (void)setAvailability:(int)arg1;
- (void)setEndDate:(id)arg1;
- (void)setInvitationStatus:(unsigned int)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1;
- (void)setOriginalStartDate:(id)arg1;
- (void)setParticipationStatus:(int)arg1;
- (void)setPrivacyLevel:(unsigned int)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setURL:(id)arg1;
- (int)status;
- (BOOL)validate:(id*)arg1;

@end
