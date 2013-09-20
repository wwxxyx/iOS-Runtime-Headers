/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSNumber, NSString;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification {
    BOOL _allDay;
    NSString *_calendarName;
    unsigned int _changeType;
    NSNumber *_createCount;
    BOOL _dateChanged;
    NSNumber *_deleteCount;
    NSDate *_endDate;
    NSString *_eventID;
    NSString *_location;
    BOOL _locationChanged;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    BOOL _timeChanged;
    BOOL _titleChanged;
    NSNumber *_updateCount;
}

@property BOOL allDay;
@property(retain) NSString * calendarName;
@property unsigned int changeType;
@property(retain) NSNumber * createCount;
@property BOOL dateChanged;
@property(retain) NSNumber * deleteCount;
@property(retain) NSDate * endDate;
@property(retain) NSString * eventID;
@property(retain) NSString * location;
@property BOOL locationChanged;
@property(retain) NSDate * startDate;
@property(retain) NSDate * startDateForNextOccurrence;
@property BOOL timeChanged;
@property BOOL titleChanged;
@property(retain) NSNumber * updateCount;

- (BOOL)allDay;
- (id)calendarName;
- (unsigned int)changeType;
- (id)createCount;
- (BOOL)dateChanged;
- (void)dealloc;
- (id)deleteCount;
- (id)endDate;
- (id)eventID;
- (id)initWithType:(int)arg1;
- (id)location;
- (BOOL)locationChanged;
- (BOOL)needsAlert;
- (id)resourceChangeFromEventStore:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (void)setCalendarName:(id)arg1;
- (void)setChangeType:(unsigned int)arg1;
- (void)setCreateCount:(id)arg1;
- (void)setDateChanged:(BOOL)arg1;
- (void)setDeleteCount:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventID:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationChanged:(BOOL)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setTimeChanged:(BOOL)arg1;
- (void)setTitleChanged:(BOOL)arg1;
- (void)setUpdateCount:(id)arg1;
- (id)startDate;
- (id)startDateForNextOccurrence;
- (BOOL)timeChanged;
- (BOOL)titleChanged;
- (id)updateCount;

@end
