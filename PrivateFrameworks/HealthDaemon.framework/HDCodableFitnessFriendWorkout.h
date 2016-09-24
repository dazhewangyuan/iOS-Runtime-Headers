/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableFitnessFriendWorkout : PBCodable <HDDecoding, NSCopying> {
    NSString * _bundleID;
    double  _duration;
    NSData * _friendUUID;
    double  _goal;
    int  _goalType;
    struct { 
        unsigned int duration : 1; 
        unsigned int goal : 1; 
        unsigned int goalType : 1; 
        unsigned int isIndoorWorkout : 1; 
        unsigned int isWatchWorkout : 1; 
        unsigned int totalBasalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int totalDistanceInCanonicalUnit : 1; 
        unsigned int totalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int type : 1; 
    }  _has;
    int  _isIndoorWorkout;
    int  _isWatchWorkout;
    HDCodableSample * _sample;
    double  _totalBasalEnergyBurnedInCanonicalUnit;
    double  _totalDistanceInCanonicalUnit;
    double  _totalEnergyBurnedInCanonicalUnit;
    int  _type;
}

@property (nonatomic, retain) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSData *friendUUID;
@property (nonatomic) double goal;
@property (nonatomic) int goalType;
@property (nonatomic, readonly) BOOL hasBundleID;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic, readonly) BOOL hasFriendUUID;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) BOOL hasGoalType;
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (nonatomic) BOOL hasIsWatchWorkout;
@property (nonatomic, readonly) BOOL hasSample;
@property (nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property (nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned int hash;
@property (nonatomic) int isIndoorWorkout;
@property (nonatomic) int isWatchWorkout;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (BOOL)applyToObject:(id)arg1;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)friendUUID;
- (double)goal;
- (int)goalType;
- (BOOL)hasBundleID;
- (BOOL)hasDuration;
- (BOOL)hasFriendUUID;
- (BOOL)hasGoal;
- (BOOL)hasGoalType;
- (BOOL)hasIsIndoorWorkout;
- (BOOL)hasIsWatchWorkout;
- (BOOL)hasSample;
- (BOOL)hasTotalBasalEnergyBurnedInCanonicalUnit;
- (BOOL)hasTotalDistanceInCanonicalUnit;
- (BOOL)hasTotalEnergyBurnedInCanonicalUnit;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)isIndoorWorkout;
- (int)isWatchWorkout;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setBundleID:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setGoal:(double)arg1;
- (void)setGoalType:(int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasGoal:(BOOL)arg1;
- (void)setHasGoalType:(BOOL)arg1;
- (void)setHasIsIndoorWorkout:(BOOL)arg1;
- (void)setHasIsWatchWorkout:(BOOL)arg1;
- (void)setHasTotalBasalEnergyBurnedInCanonicalUnit:(BOOL)arg1;
- (void)setHasTotalDistanceInCanonicalUnit:(BOOL)arg1;
- (void)setHasTotalEnergyBurnedInCanonicalUnit:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setIsIndoorWorkout:(int)arg1;
- (void)setIsWatchWorkout:(int)arg1;
- (void)setSample:(id)arg1;
- (void)setTotalBasalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setTotalDistanceInCanonicalUnit:(double)arg1;
- (void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setType:(int)arg1;
- (double)totalBasalEnergyBurnedInCanonicalUnit;
- (double)totalDistanceInCanonicalUnit;
- (double)totalEnergyBurnedInCanonicalUnit;
- (int)type;
- (void)writeTo:(id)arg1;

@end
