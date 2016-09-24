/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSError * _error;
    NSNumber * _persistentID;
    int  _status;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSNumber *persistentID;
@property (nonatomic) int status;

+ (id)_resultWithPersistentID:(int)arg1 bundleID:(id)arg2 status:(int)arg3 error:(id)arg4;
+ (id)resultWithExistingActivity:(int)arg1 bundleID:(id)arg2;
+ (id)resultWithInvalidActivity:(int)arg1 bundleID:(id)arg2;
+ (id)resultWithValidActivity:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)persistentID;
- (void)setBundleID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
