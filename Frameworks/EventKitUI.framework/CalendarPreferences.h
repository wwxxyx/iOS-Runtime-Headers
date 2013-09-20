/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, NSDate, NSNumber, NSString;

@interface CalendarPreferences : NSObject {
    BOOL _hideCalendarsInNCTodayView;
}

@property(retain) NSArray * calendarUUIDsExcludedFromNotifications;
@property BOOL drawDebugViewColors;
@property BOOL hideCalendarsInNCTodayView;
@property BOOL immediateAlarmCreation;
@property(retain) NSNumber * lastSuspendTime;
@property(retain) NSNumber * lastViewMode;
@property(retain) NSNumber * lastViewedDate;
@property BOOL requestSyncOnApplicationLaunch;
@property(retain) NSString * searchString;
@property BOOL showDebugGridOverlay;
@property BOOL showEventsInPhoneMonthView;
@property BOOL showWeekNumbers;
@property(retain) NSDate * simulatedCurrentDate;
@property BOOL usePickerStyleInlineEditorMenus;
@property BOOL viewedTimeZoneAutomatic;
@property(retain) NSNumber * weekStart;

+ (id)sharedPreferences;

- (id)_getNumberPreference:(id)arg1 withDefaultValue:(id)arg2;
- (id)_getNumberPreference:(id)arg1;
- (id)_getPreference:(id)arg1 defaultArrayValue:(id)arg2;
- (BOOL)_getPreference:(id)arg1 defaultBoolValue:(BOOL)arg2;
- (id)_getStringPreference:(id)arg1;
- (void)_preferenceChangedExternally:(id)arg1;
- (void)_preferenceChangedInternally:(id)arg1;
- (void)_setPreference:(id)arg1 arrayValue:(id)arg2 notificationName:(id)arg3 forceSync:(BOOL)arg4;
- (void)_setPreference:(id)arg1 boolValue:(BOOL)arg2 notificationName:(id)arg3;
- (void)_setPreference:(id)arg1 number:(id)arg2 notificationName:(id)arg3;
- (void)_setPreference:(id)arg1 stringValue:(id)arg2 notificationName:(id)arg3 forceSync:(BOOL)arg4;
- (void)_synchronizePreferences;
- (BOOL)areAllCalendarsNotificationEnabledInEventStore:(id)arg1;
- (id)calendarUUIDsExcludedFromNotifications;
- (id)deselectedCalendarIDsFromCalendars:(id)arg1;
- (BOOL)drawDebugViewColors;
- (BOOL)hideCalendarsInNCTodayView;
- (BOOL)immediateAlarmCreation;
- (id)init;
- (id)lastSuspendTime;
- (id)lastViewMode;
- (id)lastViewedDate;
- (id)notificationEnabledCalendarsFromEventStore:(id)arg1 entityType:(unsigned int)arg2;
- (BOOL)requestSyncOnApplicationLaunch;
- (id)searchString;
- (void)setCalendarUUIDsExcludedFromNotifications:(id)arg1;
- (void)setDeselectedCalendarIDs:(id)arg1;
- (void)setDrawDebugViewColors:(BOOL)arg1;
- (void)setHideCalendarsInNCTodayView:(BOOL)arg1;
- (void)setImmediateAlarmCreation:(BOOL)arg1;
- (void)setLastSuspendTime:(id)arg1;
- (void)setLastViewMode:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setNotificationEnabledCalendars:(id)arg1 usingEventStore:(id)arg2 entityType:(unsigned int)arg3;
- (void)setRequestSyncOnApplicationLaunch:(BOOL)arg1;
- (void)setSearchString:(id)arg1;
- (void)setShowDebugGridOverlay:(BOOL)arg1;
- (void)setShowEventsInPhoneMonthView:(BOOL)arg1;
- (void)setShowWeekNumbers:(BOOL)arg1;
- (void)setSimulatedCurrentDate:(id)arg1;
- (void)setUsePickerStyleInlineEditorMenus:(BOOL)arg1;
- (void)setViewedTimeZoneAutomatic:(BOOL)arg1;
- (void)setWeekStart:(id)arg1;
- (BOOL)showDebugGridOverlay;
- (BOOL)showEventsInPhoneMonthView;
- (BOOL)showWeekNumbers;
- (id)simulatedCurrentDate;
- (BOOL)usePickerStyleInlineEditorMenus;
- (BOOL)viewedTimeZoneAutomatic;
- (id)weekStart;

@end
