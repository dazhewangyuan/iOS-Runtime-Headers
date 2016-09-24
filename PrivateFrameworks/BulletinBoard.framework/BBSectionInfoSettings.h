/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _alertType;
    BOOL  _allowsNotifications;
    int  _carPlaySetting;
    unsigned int  _pushSettings;
    BOOL  _showsInLockScreen;
    BOOL  _showsInNotificationCenter;
    BOOL  _showsMessagePreview;
    BOOL  _showsOnExternalDevices;
}

@property (nonatomic) unsigned int alertType;
@property (nonatomic) BOOL allowsNotifications;
@property (nonatomic) int carPlaySetting;
@property (nonatomic) unsigned int pushSettings;
@property (nonatomic) BOOL showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic) BOOL showsOnExternalDevices;

+ (id)sectionInfoSettingsForManagedBundleID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_alertTypeDescription;
- (unsigned int)alertType;
- (BOOL)allowsNotifications;
- (int)carPlaySetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultsForSectionType:(int)arg1;
- (id)initWithManagedBundleSettingsDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)pushSettings;
- (void)setAlertType:(unsigned int)arg1;
- (void)setAllowsNotifications:(BOOL)arg1;
- (void)setCarPlaySetting:(int)arg1;
- (void)setPushSettings:(unsigned int)arg1;
- (void)setShowsInLockScreen:(BOOL)arg1;
- (void)setShowsInNotificationCenter:(BOOL)arg1;
- (void)setShowsMessagePreview:(BOOL)arg1;
- (void)setShowsOnExternalDevices:(BOOL)arg1;
- (BOOL)showsInLockScreen;
- (BOOL)showsInNotificationCenter;
- (BOOL)showsMessagePreview;
- (BOOL)showsOnExternalDevices;

@end
