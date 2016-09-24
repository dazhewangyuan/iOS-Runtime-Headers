/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitNotificationView : PBCodable <NSCopying> {
    int  _dismissReason;
    unsigned int  _dwelltimeMs;
    int  _endDate;
    struct { 
        unsigned int dwelltimeMs : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int dismissReason : 1; 
        unsigned int scrollBehavior : 1; 
    }  _has;
    int  _scrollBehavior;
    int  _startDate;
}

@property (nonatomic) int dismissReason;
@property (nonatomic) unsigned int dwelltimeMs;
@property (nonatomic) int endDate;
@property (nonatomic) BOOL hasDismissReason;
@property (nonatomic) BOOL hasDwelltimeMs;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasScrollBehavior;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) int scrollBehavior;
@property (nonatomic) int startDate;

- (int)StringAsDismissReason:(id)arg1;
- (int)StringAsScrollBehavior:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)dismissReason;
- (id)dismissReasonAsString:(int)arg1;
- (unsigned int)dwelltimeMs;
- (int)endDate;
- (BOOL)hasDismissReason;
- (BOOL)hasDwelltimeMs;
- (BOOL)hasEndDate;
- (BOOL)hasScrollBehavior;
- (BOOL)hasStartDate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)scrollBehavior;
- (id)scrollBehaviorAsString:(int)arg1;
- (void)setDismissReason:(int)arg1;
- (void)setDwelltimeMs:(unsigned int)arg1;
- (void)setEndDate:(int)arg1;
- (void)setHasDismissReason:(BOOL)arg1;
- (void)setHasDwelltimeMs:(BOOL)arg1;
- (void)setHasEndDate:(BOOL)arg1;
- (void)setHasScrollBehavior:(BOOL)arg1;
- (void)setHasStartDate:(BOOL)arg1;
- (void)setScrollBehavior:(int)arg1;
- (void)setStartDate:(int)arg1;
- (int)startDate;
- (void)writeTo:(id)arg1;

@end
