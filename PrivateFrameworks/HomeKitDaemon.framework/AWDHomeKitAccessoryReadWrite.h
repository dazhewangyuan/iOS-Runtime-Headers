/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitAccessoryReadWrite : PBCodable <NSCopying> {
    NSMutableArray * _characteristics;
    unsigned int  _duration;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int errorCode : 1; 
        unsigned int transportType : 1; 
        unsigned int isRemote : 1; 
        unsigned int isWrite : 1; 
    }  _has;
    BOOL  _isRemote;
    BOOL  _isWrite;
    unsigned int  _timestamp;
    NSString * _transaction;
    int  _transportType;
    AWDHomeKitVendorInformation * _vendorDetails;
}

@property (nonatomic, retain) NSMutableArray *characteristics;
@property (nonatomic) unsigned int duration;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasIsRemote;
@property (nonatomic) BOOL hasIsWrite;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTransaction;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic, readonly) BOOL hasVendorDetails;
@property (nonatomic) BOOL isRemote;
@property (nonatomic) BOOL isWrite;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic, retain) NSString *transaction;
@property (nonatomic) int transportType;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;

+ (Class)characteristicsType;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)addCharacteristics:(id)arg1;
- (id)characteristics;
- (id)characteristicsAtIndex:(unsigned int)arg1;
- (unsigned int)characteristicsCount;
- (void)clearCharacteristics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)errorCode;
- (BOOL)hasDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasIsRemote;
- (BOOL)hasIsWrite;
- (BOOL)hasTimestamp;
- (BOOL)hasTransaction;
- (BOOL)hasTransportType;
- (BOOL)hasVendorDetails;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRemote;
- (BOOL)isWrite;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasIsRemote:(BOOL)arg1;
- (void)setHasIsWrite:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setIsRemote:(BOOL)arg1;
- (void)setIsWrite:(BOOL)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setVendorDetails:(id)arg1;
- (unsigned int)timestamp;
- (id)transaction;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)vendorDetails;
- (void)writeTo:(id)arg1;

@end
