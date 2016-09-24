/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying> {
    unsigned int  _duration;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int errorCode : 1; 
        unsigned int transportType : 1; 
        unsigned int isAdd : 1; 
        unsigned int isAddedViaWAC : 1; 
    }  _has;
    BOOL  _isAdd;
    BOOL  _isAddedViaWAC;
    unsigned int  _timestamp;
    int  _transportType;
    AWDHomeKitVendorInformation * _vendorDetails;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasIsAdd;
@property (nonatomic) BOOL hasIsAddedViaWAC;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic, readonly) BOOL hasVendorDetails;
@property (nonatomic) BOOL isAdd;
@property (nonatomic) BOOL isAddedViaWAC;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) int transportType;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)errorCode;
- (BOOL)hasDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasIsAdd;
- (BOOL)hasIsAddedViaWAC;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportType;
- (BOOL)hasVendorDetails;
- (unsigned int)hash;
- (BOOL)isAdd;
- (BOOL)isAddedViaWAC;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasIsAdd:(BOOL)arg1;
- (void)setHasIsAddedViaWAC:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setIsAdd:(BOOL)arg1;
- (void)setIsAddedViaWAC:(BOOL)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTransportType:(int)arg1;
- (void)setVendorDetails:(id)arg1;
- (unsigned int)timestamp;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)vendorDetails;
- (void)writeTo:(id)arg1;

@end
