/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMMutableUser : UMUser

@property (nonatomic, copy) NSString *alternateDSID;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) unsigned int dataQuota;
@property (nonatomic) unsigned int dataUsed;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSError *errorCausingLogout;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic) unsigned int gid;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic) BOOL hasDataToSync;
@property (nonatomic, copy) NSURL *homeDirectoryURL;
@property (nonatomic) BOOL isAuditor;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isLoginUser;
@property (nonatomic, copy) NSArray *languages;
@property (nonatomic, copy) NSDate *lastLoginDate;
@property (nonatomic, copy) NSDate *lastRemoteAuthDate;
@property (nonatomic) unsigned int passcodeLockGracePeriod;
@property (nonatomic) unsigned int passcodeType;
@property (nonatomic, copy) NSURL *photoURL;
@property (nonatomic) unsigned int uid;
@property (nonatomic, copy) NSString *username;

- (BOOL)commitChanges;
- (BOOL)commitChangesWithError:(id*)arg1;

@end
