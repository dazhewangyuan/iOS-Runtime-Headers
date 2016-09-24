/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNTextInputNotificationResponse : UNNotificationResponse {
    NSString * _userText;
}

@property (nonatomic, readonly, copy) NSString *userText;

+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned int)arg3 userText:(id)arg4;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned int)arg3 userText:(id)arg4;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)userText;

@end
