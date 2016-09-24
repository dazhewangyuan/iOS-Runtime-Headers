/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL  _current;
    NSDate * _expirationDate;
    double  _pauseTime;
    NSDate * _skipDate;
    int  _storeID;
    NSDictionary * _trackInfo;
}

@property (getter=isCurrent, nonatomic, readonly) BOOL current;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) double pauseTime;
@property (nonatomic, readonly) NSDate *skipDate;
@property (nonatomic, readonly) int storeID;
@property (nonatomic, readonly, copy) NSDictionary *trackInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrack:(id)arg1;
- (BOOL)isCurrent;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)pauseTime;
- (id)queueTrackDictionary;
- (id)skipDate;
- (int)storeID;
- (id)trackInfo;

@end
