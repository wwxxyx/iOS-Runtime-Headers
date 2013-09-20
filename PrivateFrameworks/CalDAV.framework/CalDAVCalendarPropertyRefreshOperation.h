/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVCalendarPropertyRefreshDelegate>, NSError, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSString;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
    NSString *_calendarHomeSyncToken;
    NSMutableDictionary *_ctags;
    BOOL _didFinish;
    BOOL _didMakeCalendars;
    BOOL _forceClearCalendarHomeSyncToken;
    BOOL _isSecondRefresh;
    NSMutableSet *_localCalendarsWithNoPath;
    int _nextCalendarOrder;
    NSObject<OS_dispatch_group> *_outstandingTasksGroup;
    NSMutableDictionary *_pathToLocalCalendar;
    NSError *_savedError;
    NSMutableDictionary *_syncTokens;
    NSMutableSet *_updatedCalendars;
    BOOL _useCalendarHomeSyncReport;
}

@property(retain) NSString * calendarHomeSyncToken;
@property <CalDAVCalendarPropertyRefreshDelegate> * delegate;
@property BOOL useCalendarHomeSyncReport;

- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)_finishRefresh;
- (id)_generateTimeZoneString:(id)arg1;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg1 isEventCalendar:(BOOL)arg2;
- (id)_getMkcalendarTaskGroupForCalendar:(id)arg1;
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;
- (void)_handleCalendarPublish;
- (BOOL)_handleUpdateForCalendar:(id)arg1;
- (void)_initializePrincipalCalendarCache;
- (void)_prepareCalendarsBeforeRefresh;
- (void)_reallyRefreshCalendarProperties;
- (void)_sendAddsForCalendars;
- (void)_sendDeletesForCalendars;
- (void)_sendShareActionTasks;
- (int)_sharingStatusForContainer:(id)arg1;
- (id)calendarHomeSyncToken;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)initWithPrincipal:(id)arg1;
- (void)refreshCalendarProperties;
- (void)setCalendarHomeSyncToken:(id)arg1;
- (void)setUseCalendarHomeSyncReport:(BOOL)arg1;
- (BOOL)useCalendarHomeSyncReport;

@end
