/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitWorkout : PBCodable <NSCopying> {
    int  _activityType;
    int  _durationMs;
    int  _endDate;
    struct { 
        unsigned int durationMs : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalDistance : 1; 
        unsigned int totalEnergyBurned : 1; 
        unsigned int totalSteps : 1; 
        unsigned int activityType : 1; 
    }  _has;
    int  _startDate;
    unsigned int  _timestamp;
    int  _totalDistance;
    int  _totalEnergyBurned;
    int  _totalSteps;
}

@property (nonatomic) int activityType;
@property (nonatomic) int durationMs;
@property (nonatomic) int endDate;
@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalDistance;
@property (nonatomic) BOOL hasTotalEnergyBurned;
@property (nonatomic) BOOL hasTotalSteps;
@property (nonatomic) int startDate;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) int totalDistance;
@property (nonatomic) int totalEnergyBurned;
@property (nonatomic) int totalSteps;

- (int)StringAsActivityType:(id)arg1;
- (int)activityType;
- (id)activityTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)durationMs;
- (int)endDate;
- (BOOL)hasActivityType;
- (BOOL)hasDurationMs;
- (BOOL)hasEndDate;
- (BOOL)hasStartDate;
- (BOOL)hasTimestamp;
- (BOOL)hasTotalDistance;
- (BOOL)hasTotalEnergyBurned;
- (BOOL)hasTotalSteps;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setActivityType:(int)arg1;
- (void)setDurationMs:(int)arg1;
- (void)setEndDate:(int)arg1;
- (void)setHasActivityType:(BOOL)arg1;
- (void)setHasDurationMs:(BOOL)arg1;
- (void)setHasEndDate:(BOOL)arg1;
- (void)setHasStartDate:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTotalDistance:(BOOL)arg1;
- (void)setHasTotalEnergyBurned:(BOOL)arg1;
- (void)setHasTotalSteps:(BOOL)arg1;
- (void)setStartDate:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTotalDistance:(int)arg1;
- (void)setTotalEnergyBurned:(int)arg1;
- (void)setTotalSteps:(int)arg1;
- (int)startDate;
- (unsigned int)timestamp;
- (int)totalDistance;
- (int)totalEnergyBurned;
- (int)totalSteps;
- (void)writeTo:(id)arg1;

@end
