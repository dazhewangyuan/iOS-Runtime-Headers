/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBStateInfo : NSObject <NSCoding, NSCopying> {
    NSDate * _date;
    NSError * _error;
    NSMutableArray * _errors;
    unsigned int  _estimatedTimeRemaining;
    double  _progress;
    int  _state;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) unsigned int estimatedTimeRemaining;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) int state;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)errors;
- (unsigned int)estimatedTimeRemaining;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned int)arg3 error:(id)arg4 errors:(id)arg5;
- (float)progress;
- (void)setError:(id)arg1;
- (void)setEstimatedTimeRemaining:(unsigned int)arg1;
- (void)setProgress:(float)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
