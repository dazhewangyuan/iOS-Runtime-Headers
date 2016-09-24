/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATTaskProgress : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _UUID;
    int  _completedUnitCount;
    NSError * _error;
    BOOL  _isCancelable;
    BOOL  _isCanceled;
    unsigned int  _phase;
    NSString * _requestClassName;
    id  _resultObject;
    int  _totalUnitCount;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic) int completedUnitCount;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) BOOL isCancelable;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) unsigned int phase;
@property (nonatomic, copy) NSString *requestClassName;
@property (nonatomic, retain) id resultObject;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic) int totalUnitCount;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (void)assertResultObject:(id)arg1 isValidForRequestClassName:(id)arg2;
+ (Class)classForResultObjectWithRequestClassName:(id)arg1;
+ (id)progressForOperation:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (int)completedUnitCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithOperationUUID:(id)arg1;
- (BOOL)isCancelable;
- (BOOL)isCanceled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)phase;
- (id)progressStateDescription;
- (id)requestClassName;
- (id)resultObject;
- (void)setCompletedUnitCount:(int)arg1;
- (void)setError:(id)arg1;
- (void)setIsCancelable:(BOOL)arg1;
- (void)setIsCanceled:(BOOL)arg1;
- (void)setPhase:(unsigned int)arg1;
- (void)setProgress:(id)arg1;
- (void)setRequestClassName:(id)arg1;
- (void)setResultObject:(id)arg1;
- (void)setTotalUnitCount:(int)arg1;
- (void)setUUID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned int)state;
- (int)totalUnitCount;
- (id)userInfo;

@end
