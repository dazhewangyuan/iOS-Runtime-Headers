/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseNotification : CKNotification <NSSecureCoding> {
    int  _databaseScope;
}

@property (nonatomic) int databaseScope;

+ (BOOL)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (int)databaseScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (void)setDatabaseScope:(int)arg1;

@end
