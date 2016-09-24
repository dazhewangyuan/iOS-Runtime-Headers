/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventStore : NSObject <EKDaemonConnection> {
    NSMutableDictionary * _cachedValidatedEmails;
    NSObject<OS_dispatch_queue> * _calendarQueue;
    NSMutableDictionary * _calendars;
    EKDataProtectionObserver * _dataProtectionObserver;
    EKDaemonConnection * _database;
    NSObject<OS_dispatch_queue> * _dbChangedQueue;
    NSNumber * _defaultAllDayAlarmOffset;
    EKCalendar * _defaultCalendarForNewEvents;
    EKCalendar * _defaultCalendarForNewReminders;
    NSNumber * _defaultTimedAlarmOffset;
    NSArray * _delegateSources;
    NSMutableSet * _deletedObjects;
    unsigned long  _flags;
    NSMutableSet * _insertedObjects;
    double  _lastDatabaseNotificationTimestamp;
    NSMutableSet * _objectsPendingCommit;
    NSMutableDictionary * _publicRegisteredObjects;
    NSMutableDictionary * _registeredObjects;
    NSObject<OS_dispatch_queue> * _registeredQueue;
    NSMutableDictionary * _sources;
    EKCalendar * _suggestedEventCalendar;
    NSTimeZone * _timeZone;
    NSObject<OS_dispatch_queue> * _unsavedChangesQueue;
    NSMutableSet * _updatedObjects;
}

@property (nonatomic, retain) NSMutableDictionary *_cachedValidatedEmails;
@property (nonatomic, retain) NSMutableDictionary *_calendars;
@property (nonatomic, retain) EKCalendar *_defaultCalendarForNewEvents;
@property (nonatomic, retain) EKCalendar *_defaultCalendarForNewReminders;
@property (nonatomic, retain) NSMutableDictionary *_sources;
@property (nonatomic, retain) EKCalendar *_suggestedEventCalendar;
@property (nonatomic, readonly) BOOL automaticLocationGeocodingAllowed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calendarQueue;
@property (nonatomic, readonly) NSArray *calendars;
@property (readonly) EKDaemonConnection *connection;
@property (nonatomic, retain) EKDataProtectionObserver *dataProtectionObserver;
@property (nonatomic, retain) EKDaemonConnection *database;
@property (nonatomic, readonly, copy) NSString *databasePath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dbChangedQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) EKAlarm *defaultAllDayAlarm;
@property (nonatomic, retain) NSNumber *defaultAllDayAlarmOffset;
@property (nonatomic, retain) EKCalendar *defaultCalendarForNewEvents;
@property (nonatomic, readonly) EKAlarm *defaultTimedAlarm;
@property (nonatomic, retain) NSNumber *defaultTimedAlarmOffset;
@property (nonatomic, readonly) NSArray *delegateSources;
@property (nonatomic, retain) NSMutableSet *deletedObjects;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *eventNotifications;
@property (nonatomic, readonly) NSString *eventStoreIdentifier;
@property (nonatomic) unsigned long flags;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *inboxRepliedSectionItems;
@property (nonatomic, retain) NSMutableSet *insertedObjects;
@property (nonatomic, readonly) BOOL isDataProtected;
@property (nonatomic) double lastDatabaseNotificationTimestamp;
@property (nonatomic, readonly) int notifiableEventCount;
@property (nonatomic, retain) NSMutableSet *objectsPendingCommit;
@property (nonatomic, retain) NSMutableDictionary *publicRegisteredObjects;
@property (nonatomic, retain) NSMutableDictionary *registeredObjects;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *registeredQueue;
@property (nonatomic, readonly) NSArray *reminderNotifications;
@property (nonatomic) BOOL showDeclinedEvents;
@property (nonatomic, readonly) NSArray *sources;
@property (nonatomic, readonly) EKCalendar *suggestedEventCalendar;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, readonly) int unacknowledgedEventCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *unsavedChangesQueue;
@property (nonatomic, retain) NSMutableSet *updatedObjects;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (int)authorizationStatusForEntityType:(unsigned int)arg1;
+ (Class)classForEntityName:(id)arg1;
+ (id)eventStoreChangedDistributedNotificationName;
+ (Class)publicClassForEntityName:(id)arg1;

- (void).cxx_destruct;
- (Class)_SGSuggestionsServiceClass;
- (void)_accessStatusChanged;
- (id)_addFetchedObjectWithID:(id)arg1;
- (void)_addObjectToPendingCommits:(id)arg1;
- (id)_allCalendars;
- (id)_cachedValidatedEmails;
- (BOOL)_calendar:(id)arg1 supportsEntityType:(unsigned int)arg2;
- (id)_calendarItemsMatchingPredicate:(id)arg1;
- (id)_calendarWithID:(id)arg1;
- (id)_calendars;
- (void)_databaseChangedExternally;
- (id)_defaultCalendarForNewEvents;
- (id)_defaultCalendarForNewReminders;
- (void)_deleteObject:(id)arg1;
- (id)_eventOccurrenceWithURI:(id)arg1;
- (id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2;
- (void)_forgetRegisteredObjects;
- (void)_insertObject:(id)arg1;
- (BOOL)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id*)arg3 options:(id*)arg4;
- (id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7 preloadProperties:(id)arg8;
- (void)_refreshDASource:(id)arg1 isUserRequested:(BOOL)arg2;
- (void)_registerObject:(id)arg1;
- (void)_registerObjectImmediate:(id)arg1;
- (void)_requestAccessForEntityType:(unsigned int)arg1;
- (void)_reregisterObject:(id)arg1 oldID:(id)arg2;
- (void)_saveWithoutNotify;
- (id)_sources;
- (id)_suggestedEventCalendar;
- (void)_trackModifiedObject:(id)arg1;
- (void)_unregisterObject:(id)arg1;
- (void)_validateObjectIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)_waitOnSemaphore:(id)arg1;
- (void)acceptSuggestedEvent:(id)arg1;
- (void)addContactIdentifier:(id)arg1 forCalendarItem:(id)arg2;
- (void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 inCalendars:(id)arg3 completion:(id /* block */)arg4;
- (id)alarmWithUUID:(id)arg1;
- (BOOL)automaticLocationGeocodingAllowed;
- (id)birthdayContactIdentifierForEvent:(id)arg1;
- (void)cacheValidationStatusForEmail:(id)arg1 status:(unsigned int)arg2;
- (id)calendarItemWithIdentifier:(id)arg1;
- (id)calendarItemsWithExternalIdentifier:(id)arg1;
- (id)calendarQueue;
- (id)calendarWithExternalURI:(id)arg1;
- (id)calendarWithID:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
- (id)calendars;
- (id)calendarsForEntityType:(unsigned int)arg1;
- (BOOL)canModifyCalendarDatabase;
- (BOOL)canModifySuggestedEventCalendar;
- (void)cancelFetchRequest:(id)arg1;
- (id)changesSinceSequenceNumber:(int)arg1;
- (id)closestCachedOccurrenceToDate:(double)arg1 forEventUID:(int)arg2;
- (BOOL)commit:(id*)arg1;
- (id)connection;
- (id)contactIdentifierForCalendarItem:(id)arg1;
- (struct CGColor { }*)copyCGColorForNewCalendar;
- (int)countOfRemindersMatchingPredicate:(id)arg1;
- (int)countOfRemindersWithContactIdentifier:(id)arg1;
- (void)daemonRestarted;
- (id)dataProtectionObserver;
- (id)database;
- (id)databasePath;
- (id)dbChangedQueue;
- (void)dealloc;
- (id)defaultAllDayAlarm;
- (id)defaultAllDayAlarmOffset;
- (id)defaultCalendarForNewEvents;
- (id)defaultCalendarForNewReminders;
- (id)defaultTimedAlarm;
- (id)defaultTimedAlarmOffset;
- (id)delegateSources;
- (BOOL)deleteCalendar:(id)arg1 forEntityType:(int)arg2 error:(id*)arg3;
- (void)deleteSuggestedEvent:(id)arg1;
- (id)deletedObjects;
- (id)doEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2;
- (id)earliestExpiringNotifiableEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2;
- (unsigned int)emailAddressValidationStatus:(id)arg1;
- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 checkValid:(BOOL)arg3;
- (id)eventNotifications;
- (id)eventStoreIdentifier;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventWithUUID:(id)arg1;
- (id)eventWithUniqueId:(id)arg1;
- (id)eventWithUniqueId:(id)arg1 occurrenceDate:(id)arg2;
- (id)eventsMatchingPredicate:(id)arg1;
- (void)fetchChangedObjectIDsSinceToken:(int)arg1 resultHandler:(id /* block */)arg2;
- (id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(id /* block */)arg2;
- (BOOL)fetchProperties:(id)arg1 forReminders:(id)arg2;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long)flags;
- (BOOL)hasImmediatelyEligibleTravelEvents;
- (BOOL)hideCalendarsFromNotificationCenter:(id)arg1 error:(id*)arg2;
- (id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3;
- (id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3;
- (void)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3 completion:(id /* block */)arg4;
- (id)inboxRepliedSectionItems;
- (id)init;
- (id)initWithOptions:(int)arg1 path:(id)arg2;
- (id)insertNewEvent;
- (id)insertNewExceptionDateWithDate:(id)arg1;
- (id)insertNewReminder;
- (void)insertSuggestedEventCalendar;
- (id)insertedObjects;
- (id)inviteReplyNotifications;
- (BOOL)isDataProtected;
- (double)lastDatabaseNotificationTimestamp;
- (id)localSource;
- (void)locationBasedAlarmOccurrencesWithCompletion:(id /* block */)arg1;
- (BOOL)markCalendarAlerted:(id)arg1;
- (void)markChangedObjectIDsConsumedUpToToken:(int)arg1;
- (BOOL)markEventAlerted:(id)arg1;
- (BOOL)markInviteReplyNotificationAlerted:(id)arg1;
- (id)markNotificationsAlertedAndSave:(id)arg1;
- (BOOL)markResourceChangeAlerted:(id)arg1 error:(id*)arg2;
- (int)notifiableEventCount;
- (BOOL)objectWithIDExists:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (id)objectsPendingCommit;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 onDay:(double)arg2;
- (BOOL)occurrenceCacheOccurrencesAreBeingGenerated;
- (id)ownedSources;
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForAssistantEventSearchWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 limit:(int)arg8;
- (id)predicateForCompletedRemindersWithCalendars:(id)arg1;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)arg1;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(BOOL)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 matchingContacts:(id)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 title:(id)arg2 source:(id)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnExactDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForMasterEventsInCalendars:(id)arg1;
- (id)predicateForNotifiableEvents;
- (id)predicateForNotificationCenterVisibleEvents;
- (id)predicateForPotentialTravelEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)predicateForPreloadedCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 preloadProperties:(id)arg4;
- (id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 preloadProperties:(id)arg4;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (id)predicateForRemindersWithSearchTerm:(id)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned int)arg9;
- (id)predicateForUnacknowledgedEvents;
- (id)predicateForUnalertedEvents;
- (id)predicateForUpNextEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startDateRestrictionThreshold:(double)arg4;
- (id)predicateForUpcomingEventsWithLimit:(int)arg1;
- (id)publicObjectWithObjectID:(id)arg1;
- (id)publicObjectWithPersistentObject:(id)arg1;
- (id)publicRegisteredObjects;
- (void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)arg1;
- (int)readWriteCalendarCountForEntityType:(unsigned int)arg1;
- (id)readWriteCalendarsForEntityType:(unsigned int)arg1;
- (void)rebuildOccurrenceCache;
- (void)refreshSourcesIfNecessary;
- (void)refreshSourcesIfNecessary:(BOOL)arg1;
- (id)registerFetchedObjectWithID:(id)arg1;
- (id)registerFetchedObjectWithID:(id)arg1 withDefaultLoadedProperties:(id)arg2 inSet:(id)arg3;
- (BOOL)registerForDetailedChangeTracking:(id*)arg1;
- (id)registeredObjects;
- (id)registeredQueue;
- (id)reminderNotifications;
- (id)reminderWithExternalURI:(id)arg1;
- (id)remindersMatchingPredicate:(id)arg1;
- (id)remindersWithContactIdentifier:(id)arg1;
- (BOOL)removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)removeCalendar:(id)arg1 error:(id*)arg2;
- (void)removeContactIdentifier:(id)arg1 forCalendarItem:(id)arg2;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 commit:(BOOL)arg3 error:(id*)arg4;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 error:(id*)arg3;
- (BOOL)removeInviteReplyNotification:(id)arg1 error:(id*)arg2;
- (BOOL)removeInviteReplyNotifications:(id)arg1 error:(id*)arg2;
- (BOOL)removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)removeReminder:(id)arg1 error:(id*)arg2;
- (BOOL)removeResourceChange:(id)arg1 error:(id*)arg2;
- (BOOL)removeResourceChanges:(id)arg1 error:(id*)arg2;
- (BOOL)removeResourceChangesForCalendarItem:(id)arg1 error:(id*)arg2;
- (BOOL)removeSource:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (void)removeSuggestedEventCalendar;
- (void)requestAccessToEntityType:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (id)resourceChangesForEntityTypes:(unsigned int)arg1;
- (void)rollback;
- (BOOL)saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)saveCalendar:(id)arg1 error:(id*)arg2;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 commit:(BOOL)arg3 error:(id*)arg4;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 error:(id*)arg3;
- (BOOL)saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)saveReminder:(id)arg1 error:(id*)arg2;
- (BOOL)saveSource:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (id)scheduledTaskCacheFetchDaysAndTaskCounts;
- (id)scheduledTaskCacheFetchTasksOnDay:(id)arg1;
- (int)sequenceNumber;
- (void)setAutomaticLocationGeocodingAllowed:(BOOL)arg1;
- (void)setCalendarQueue:(id)arg1;
- (void)setDataProtectionObserver:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDbChangedQueue:(id)arg1;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;
- (void)setDefaultCalendarForNewEvents:(id)arg1;
- (void)setDefaultCalendarForNewReminders:(id)arg1;
- (void)setDefaultTimedAlarmOffset:(id)arg1;
- (void)setDeletedObjects:(id)arg1;
- (void)setFlags:(unsigned long)arg1;
- (void)setInsertedObjects:(id)arg1;
- (BOOL)setInvitationStatus:(unsigned int)arg1 forEvent:(id)arg2 error:(id*)arg3;
- (BOOL)setInvitationStatus:(unsigned int)arg1 forEvents:(id)arg2 error:(id*)arg3;
- (void)setLastDatabaseNotificationTimestamp:(double)arg1;
- (void)setObjectsPendingCommit:(id)arg1;
- (void)setPublicRegisteredObjects:(id)arg1;
- (void)setRegisteredObjects:(id)arg1;
- (void)setRegisteredQueue:(id)arg1;
- (void)setShowDeclinedEvents:(BOOL)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUnsavedChangesQueue:(id)arg1;
- (void)setUpdatedObjects:(id)arg1;
- (void)set_cachedValidatedEmails:(id)arg1;
- (void)set_calendars:(id)arg1;
- (void)set_defaultCalendarForNewEvents:(id)arg1;
- (void)set_defaultCalendarForNewReminders:(id)arg1;
- (void)set_sources:(id)arg1;
- (void)set_suggestedEventCalendar:(id)arg1;
- (id)sharedCalendarInvitationsForEntityTypes:(unsigned int)arg1;
- (BOOL)showDeclinedEvents;
- (id)sourceWithIdentifier:(id)arg1;
- (id)sources;
- (id)suggestedEventCalendar;
- (id)timeZone;
- (id)travelEligibleEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (int)unacknowledgedEventCount;
- (id)unsavedChangesQueue;
- (id)updatedObjects;
- (void)vehicleTriggerAlarmOccurrencesWithCompletion:(id /* block */)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)_uicolorFromString:(id)arg1;
- (id)colorForCalendar:(id)arg1;
- (id)colorNamesInRainbowOrder;
- (id)defaultCalendarColorsInRainbowOrder;
- (id)localizedStringForSymbolicColorName:(id)arg1;
- (id)stringForColor:(id)arg1;
- (id)symbolicNameToUIColors;

@end
