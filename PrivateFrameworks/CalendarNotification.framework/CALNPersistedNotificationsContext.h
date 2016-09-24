/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNPersistedNotificationsContext : NSManagedObjectContext

+ (id)pathForSentinelFile;
+ (BOOL)shouldBehaveAsRestart;

- (id)createPersistentStoreCoordinator;
- (void)deleteDBIfNeeded;
- (id)fetchAlarmBulletinsForSectionID:(id)arg1;
- (id)fetchAlertInfo:(id)arg1;
- (id)fetchAlertInfosAndRecordIDs;
- (id)fetchBulletin:(id)arg1;
- (id)fetchBulletinsInSection:(id)arg1 includeAlarms:(BOOL)arg2 includeNotifications:(BOOL)arg3;
- (id)fetchNotificationBulletinsForSectionID:(id)arg1;
- (id)fetchRefreshTime:(id)arg1;
- (id)fetchRefreshTimesAndRecordIDs;
- (id)init;
- (id)managedObjectModel;
- (void)removeAlertInfoWithRecordID:(id)arg1;
- (void)removeBulletinWithRecordID:(id)arg1;
- (void)removeRefreshTimeForRecordID:(id)arg1;
- (BOOL)removeSqliteFiles;
- (id)rootDirectory;
- (void)saveAlertInfo:(id)arg1 withRecordID:(id)arg2;
- (void)saveBulletin:(id)arg1 withRecordID:(id)arg2 forAlarm:(BOOL)arg3;
- (void)saveRefreshTime:(id)arg1 forRecordID:(id)arg2;
- (id)urlForPersistentStore;

@end
