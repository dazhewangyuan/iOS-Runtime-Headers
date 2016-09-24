/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsCloudKitCodableActivitySnapshot : PBCodable <NSCopying> {
    double  _activeHours;
    double  _activeHoursGoal;
    double  _briskMinutes;
    double  _briskMinutesGoal;
    double  _energyBurned;
    double  _energyBurnedGoal;
    struct { 
        unsigned int activeHours : 1; 
        unsigned int activeHoursGoal : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int briskMinutesGoal : 1; 
        unsigned int energyBurned : 1; 
        unsigned int energyBurnedGoal : 1; 
        unsigned int pushCount : 1; 
        unsigned int snapshotIndex : 1; 
        unsigned int stepCount : 1; 
        unsigned int timeZoneOffsetFromUTCForNoon : 1; 
        unsigned int walkingAndRunningDistance : 1; 
        unsigned int wheelchairUse : 1; 
    }  _has;
    double  _pushCount;
    HDFitnessFriendsCloudKitCodableSample * _sample;
    int  _snapshotIndex;
    NSData * _sourceUUID;
    double  _stepCount;
    int  _timeZoneOffsetFromUTCForNoon;
    double  _walkingAndRunningDistance;
    int  _wheelchairUse;
}

@property (nonatomic) double activeHours;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) double energyBurned;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic) BOOL hasActiveHours;
@property (nonatomic) BOOL hasActiveHoursGoal;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasBriskMinutesGoal;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) BOOL hasPushCount;
@property (nonatomic, readonly) BOOL hasSample;
@property (nonatomic) BOOL hasSnapshotIndex;
@property (nonatomic, readonly) BOOL hasSourceUUID;
@property (nonatomic) BOOL hasStepCount;
@property (nonatomic) BOOL hasTimeZoneOffsetFromUTCForNoon;
@property (nonatomic) BOOL hasWalkingAndRunningDistance;
@property (nonatomic) BOOL hasWheelchairUse;
@property (nonatomic) double pushCount;
@property (nonatomic, retain) HDFitnessFriendsCloudKitCodableSample *sample;
@property (nonatomic) int snapshotIndex;
@property (nonatomic, retain) NSData *sourceUUID;
@property (nonatomic) double stepCount;
@property (nonatomic) int timeZoneOffsetFromUTCForNoon;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) int wheelchairUse;

- (void).cxx_destruct;
- (double)activeHours;
- (double)activeHoursGoal;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)energyBurned;
- (double)energyBurnedGoal;
- (BOOL)hasActiveHours;
- (BOOL)hasActiveHoursGoal;
- (BOOL)hasBriskMinutes;
- (BOOL)hasBriskMinutesGoal;
- (BOOL)hasEnergyBurned;
- (BOOL)hasEnergyBurnedGoal;
- (BOOL)hasPushCount;
- (BOOL)hasSample;
- (BOOL)hasSnapshotIndex;
- (BOOL)hasSourceUUID;
- (BOOL)hasStepCount;
- (BOOL)hasTimeZoneOffsetFromUTCForNoon;
- (BOOL)hasWalkingAndRunningDistance;
- (BOOL)hasWheelchairUse;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)pushCount;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setActiveHours:(double)arg1;
- (void)setActiveHoursGoal:(double)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesGoal:(double)arg1;
- (void)setEnergyBurned:(double)arg1;
- (void)setEnergyBurnedGoal:(double)arg1;
- (void)setHasActiveHours:(BOOL)arg1;
- (void)setHasActiveHoursGoal:(BOOL)arg1;
- (void)setHasBriskMinutes:(BOOL)arg1;
- (void)setHasBriskMinutesGoal:(BOOL)arg1;
- (void)setHasEnergyBurned:(BOOL)arg1;
- (void)setHasEnergyBurnedGoal:(BOOL)arg1;
- (void)setHasPushCount:(BOOL)arg1;
- (void)setHasSnapshotIndex:(BOOL)arg1;
- (void)setHasStepCount:(BOOL)arg1;
- (void)setHasTimeZoneOffsetFromUTCForNoon:(BOOL)arg1;
- (void)setHasWalkingAndRunningDistance:(BOOL)arg1;
- (void)setHasWheelchairUse:(BOOL)arg1;
- (void)setPushCount:(double)arg1;
- (void)setSample:(id)arg1;
- (void)setSnapshotIndex:(int)arg1;
- (void)setSourceUUID:(id)arg1;
- (void)setStepCount:(double)arg1;
- (void)setTimeZoneOffsetFromUTCForNoon:(int)arg1;
- (void)setWalkingAndRunningDistance:(double)arg1;
- (void)setWheelchairUse:(int)arg1;
- (int)snapshotIndex;
- (id)sourceUUID;
- (double)stepCount;
- (int)timeZoneOffsetFromUTCForNoon;
- (double)walkingAndRunningDistance;
- (int)wheelchairUse;
- (void)writeTo:(id)arg1;

@end
