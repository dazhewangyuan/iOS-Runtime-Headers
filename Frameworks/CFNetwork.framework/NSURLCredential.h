/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCredential : NSObject <NSCopying, NSSecureCoding> {
    NSURLCredentialInternal * _internal;
}

@property (readonly) unsigned int persistence;

+ (id)credentialForTrust:(struct __SecTrust { }*)arg1;
+ (id)credentialWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(unsigned int)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;

- (const struct _CFURLCredential { }*)_CFURLCredential;
- (const struct _CFURLCredential { }*)_cfurlcredential;
- (BOOL)_hasSWCACreatorAttribute;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { }*)arg1;
- (void)_removeSWCACreatorAttribute;
- (id)certificates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasPassword;
- (unsigned int)hash;
- (struct __SecIdentity { }*)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(unsigned int)arg3;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)password;
- (unsigned int)persistence;
- (id)user;

@end
