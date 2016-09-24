/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable <NSCopying> {
    BOOL  _bookedUsingMaps;
    BOOL  _cancelled;
    BOOL  _contactedDriver;
    struct { 
        unsigned int bookedUsingMaps : 1; 
        unsigned int cancelled : 1; 
        unsigned int contactedDriver : 1; 
        unsigned int tappedProactiveTrayItem : 1; 
        unsigned int viewedDetails : 1; 
        unsigned int viewedInProactiveTray : 1; 
    }  _has;
    NSString * _rideAppId;
    NSString * _rideBookedSessionId;
    BOOL  _tappedProactiveTrayItem;
    BOOL  _viewedDetails;
    BOOL  _viewedInProactiveTray;
}

@property (nonatomic) BOOL bookedUsingMaps;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL contactedDriver;
@property (nonatomic) BOOL hasBookedUsingMaps;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasContactedDriver;
@property (nonatomic, readonly) BOOL hasRideAppId;
@property (nonatomic, readonly) BOOL hasRideBookedSessionId;
@property (nonatomic) BOOL hasTappedProactiveTrayItem;
@property (nonatomic) BOOL hasViewedDetails;
@property (nonatomic) BOOL hasViewedInProactiveTray;
@property (nonatomic, retain) NSString *rideAppId;
@property (nonatomic, retain) NSString *rideBookedSessionId;
@property (nonatomic) BOOL tappedProactiveTrayItem;
@property (nonatomic) BOOL viewedDetails;
@property (nonatomic) BOOL viewedInProactiveTray;

- (BOOL)bookedUsingMaps;
- (BOOL)cancelled;
- (BOOL)contactedDriver;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBookedUsingMaps;
- (BOOL)hasCancelled;
- (BOOL)hasContactedDriver;
- (BOOL)hasRideAppId;
- (BOOL)hasRideBookedSessionId;
- (BOOL)hasTappedProactiveTrayItem;
- (BOOL)hasViewedDetails;
- (BOOL)hasViewedInProactiveTray;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)rideAppId;
- (id)rideBookedSessionId;
- (void)setBookedUsingMaps:(BOOL)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setContactedDriver:(BOOL)arg1;
- (void)setHasBookedUsingMaps:(BOOL)arg1;
- (void)setHasCancelled:(BOOL)arg1;
- (void)setHasContactedDriver:(BOOL)arg1;
- (void)setHasTappedProactiveTrayItem:(BOOL)arg1;
- (void)setHasViewedDetails:(BOOL)arg1;
- (void)setHasViewedInProactiveTray:(BOOL)arg1;
- (void)setRideAppId:(id)arg1;
- (void)setRideBookedSessionId:(id)arg1;
- (void)setTappedProactiveTrayItem:(BOOL)arg1;
- (void)setViewedDetails:(BOOL)arg1;
- (void)setViewedInProactiveTray:(BOOL)arg1;
- (BOOL)tappedProactiveTrayItem;
- (BOOL)viewedDetails;
- (BOOL)viewedInProactiveTray;
- (void)writeTo:(id)arg1;

@end
