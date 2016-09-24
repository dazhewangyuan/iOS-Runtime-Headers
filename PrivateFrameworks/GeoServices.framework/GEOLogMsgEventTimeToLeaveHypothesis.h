/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying> {
    int  _arrival;
    int  _departure;
    double  _earliestArrivalOffset;
    double  _earliestDepartureOffset;
    struct { 
        unsigned int earliestArrivalOffset : 1; 
        unsigned int earliestDepartureOffset : 1; 
        unsigned int latestArrivalOffset : 1; 
        unsigned int latestDepartureOffset : 1; 
        unsigned int arrival : 1; 
        unsigned int departure : 1; 
        unsigned int numberOfReroutes : 1; 
        unsigned int ttlUiNotificationShown : 1; 
    }  _has;
    double  _latestArrivalOffset;
    double  _latestDepartureOffset;
    unsigned int  _numberOfReroutes;
    int  _ttlUiNotificationShown;
}

@property (nonatomic) int arrival;
@property (nonatomic) int departure;
@property (nonatomic) double earliestArrivalOffset;
@property (nonatomic) double earliestDepartureOffset;
@property (nonatomic) BOOL hasArrival;
@property (nonatomic) BOOL hasDeparture;
@property (nonatomic) BOOL hasEarliestArrivalOffset;
@property (nonatomic) BOOL hasEarliestDepartureOffset;
@property (nonatomic) BOOL hasLatestArrivalOffset;
@property (nonatomic) BOOL hasLatestDepartureOffset;
@property (nonatomic) BOOL hasNumberOfReroutes;
@property (nonatomic) BOOL hasTtlUiNotificationShown;
@property (nonatomic) double latestArrivalOffset;
@property (nonatomic) double latestDepartureOffset;
@property (nonatomic) unsigned int numberOfReroutes;
@property (nonatomic) int ttlUiNotificationShown;

- (int)StringAsArrival:(id)arg1;
- (int)StringAsDeparture:(id)arg1;
- (int)StringAsTtlUiNotificationShown:(id)arg1;
- (int)arrival;
- (id)arrivalAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)departure;
- (id)departureAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)earliestArrivalOffset;
- (double)earliestDepartureOffset;
- (BOOL)hasArrival;
- (BOOL)hasDeparture;
- (BOOL)hasEarliestArrivalOffset;
- (BOOL)hasEarliestDepartureOffset;
- (BOOL)hasLatestArrivalOffset;
- (BOOL)hasLatestDepartureOffset;
- (BOOL)hasNumberOfReroutes;
- (BOOL)hasTtlUiNotificationShown;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (double)latestArrivalOffset;
- (double)latestDepartureOffset;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfReroutes;
- (BOOL)readFrom:(id)arg1;
- (void)setArrival:(int)arg1;
- (void)setDeparture:(int)arg1;
- (void)setEarliestArrivalOffset:(double)arg1;
- (void)setEarliestDepartureOffset:(double)arg1;
- (void)setHasArrival:(BOOL)arg1;
- (void)setHasDeparture:(BOOL)arg1;
- (void)setHasEarliestArrivalOffset:(BOOL)arg1;
- (void)setHasEarliestDepartureOffset:(BOOL)arg1;
- (void)setHasLatestArrivalOffset:(BOOL)arg1;
- (void)setHasLatestDepartureOffset:(BOOL)arg1;
- (void)setHasNumberOfReroutes:(BOOL)arg1;
- (void)setHasTtlUiNotificationShown:(BOOL)arg1;
- (void)setLatestArrivalOffset:(double)arg1;
- (void)setLatestDepartureOffset:(double)arg1;
- (void)setNumberOfReroutes:(unsigned int)arg1;
- (void)setTtlUiNotificationShown:(int)arg1;
- (int)ttlUiNotificationShown;
- (id)ttlUiNotificationShownAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
