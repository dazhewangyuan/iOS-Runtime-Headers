/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACCredentialItem : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    ACAccountStore * _accountStore;
    NSMutableSet * _dirtyProperties;
    NSDate * _expirationDate;
    NSURL * _objectID;
    BOOL  _persistent;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic) ACAccountStore *accountStore;
@property (getter=isDirty, nonatomic, readonly) BOOL dirty;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSURL *objectID;
@property (getter=isPersistent, nonatomic) BOOL persistent;
@property (nonatomic, readonly) NSString *serviceName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_markPropertyDirty:(id)arg1;
- (id)accountIdentifier;
- (id)accountStore;
- (void)clearDirtyProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dirtyProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)fullDescription;
- (id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2;
- (BOOL)isDirty;
- (BOOL)isPersistent;
- (BOOL)isPropertyDirty:(id)arg1;
- (void)markAllPropertiesDirty;
- (id)objectID;
- (id)serviceName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setPersistent:(BOOL)arg1;
- (void)setServiceName:(id)arg1;

@end
