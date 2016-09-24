/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface Alarm : NSObject <MTAlarmSoundInfoProvider> {
    NSString * _alarmID;
    NSURL * _alarmIDURL;
    BOOL  _allowsSnooze;
    unsigned int  _daySetting;
    <AlarmDelegate> * _delegate;
    Alarm * _editingProxy;
    unsigned int  _hour;
    BOOL  _isSleepAlarm;
    NSDate * _lastModified;
    unsigned int  _minute;
    UILocalNotification * _notification;
    BOOL  _pretendActiveIfProxy;
    NSArray * _repeatDays;
    unsigned int  _revision;
    NSMutableDictionary * _settings;
    UILocalNotification * _snoozedNotification;
    NSString * _sound;
    int  _soundType;
    NSString * _title;
    NSString * _vibrationID;
    UILocalNotification * _weeklyNotifications;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic, retain) NSString *alarmID;
@property (nonatomic, retain) NSURL *alarmIDURL;
@property (nonatomic, readonly) NSString *alarmSoundIdentifier;
@property (nonatomic, readonly) int alarmSoundType;
@property (nonatomic, copy) NSNumber *alarmSoundVolume;
@property (nonatomic) BOOL allowsSnooze;
@property (nonatomic) int bedtimeHour;
@property (nonatomic) int bedtimeMinute;
@property (nonatomic, copy) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int daySetting;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AlarmDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Alarm *editingProxy;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int hour;
@property (nonatomic) BOOL isSleepAlarm;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic) unsigned int minute;
@property (nonatomic, readonly) UILocalNotification *notification;
@property (nonatomic, readonly) NSArray *repeatDays;
@property (nonatomic, readonly) BOOL repeats;
@property (nonatomic, readonly) unsigned int revision;
@property (nonatomic, readonly) NSDictionary *settings;
@property (getter=isSnoozed, nonatomic, readonly) BOOL snoozed;
@property (nonatomic, readonly) NSString *sound;
@property (nonatomic, readonly) int soundType;
@property (nonatomic, copy) NSNumber *soundVolume;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *uiTitle;
@property (nonatomic, copy) NSString *vibrationID;

+ (id)_newSettingsFromNotification:(id)arg1;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (BOOL)isSnoozeNotification:(id)arg1;
+ (id /* block */)timeComparator;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifySettings:(id)arg1;

- (void).cxx_destruct;
- (id)_newBaseDateComponentsForDay:(int)arg1;
- (id)_newNotification:(int)arg1;
- (unsigned int)_notificationsCount;
- (id)alarmID;
- (id)alarmIDURL;
- (id)alarmSoundIdentifier;
- (int)alarmSoundType;
- (id)alarmSoundVolume;
- (BOOL)allowsSnooze;
- (void)applyChangesFromEditingProxy;
- (void)applySettings:(id)arg1;
- (int)bedtimeHour;
- (int)bedtimeMinute;
- (id)bedtimeReminderMinutes;
- (void)cancelNotifications;
- (int)compareTime:(id)arg1;
- (unsigned int)daySetting;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)dropEditingProxy;
- (void)dropNotifications;
- (id)editingProxy;
- (void)handleAlarmFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(BOOL)arg2;
- (unsigned int)hash;
- (unsigned int)hour;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSleepAlarm;
- (BOOL)isSnoozed;
- (id)lastModified;
- (void)markModified;
- (unsigned int)minute;
- (id)nextFireDate;
- (id)nextFireDateAfterDate:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(int)arg3;
- (id)notification;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)prepareNotifications;
- (void)refreshActiveState;
- (id)repeatDays;
- (BOOL)repeats;
- (unsigned int)revision;
- (void)scheduleNotifications;
- (void)setAlarmID:(id)arg1;
- (void)setAlarmIDURL:(id)arg1;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(int)arg2;
- (void)setAlarmSoundVolume:(id)arg1;
- (void)setAllowsSnooze:(BOOL)arg1;
- (void)setBedtimeHour:(int)arg1;
- (void)setBedtimeMinute:(int)arg1;
- (void)setBedtimeReminderMinutes:(id)arg1;
- (void)setDaySetting:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setIsSleepAlarm:(BOOL)arg1;
- (void)setMinute:(unsigned int)arg1;
- (void)setSound:(id)arg1 ofType:(int)arg2;
- (void)setSoundVolume:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVibrationID:(id)arg1;
- (id)settings;
- (id)sound;
- (int)soundType;
- (id)soundVolume;
- (id)timeZoneForOffsetCalculation;
- (id)title;
- (BOOL)tryAddNotification:(id)arg1;
- (id)uiTitle;
- (id)vibrationID;

@end
