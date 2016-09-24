/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying> {
    int  _direction;
    struct { 
        unsigned int payloadSize : 1; 
        unsigned int timestamp : 1; 
        unsigned int direction : 1; 
        unsigned int messageType : 1; 
        unsigned int transport : 1; 
        unsigned int isSecure : 1; 
    }  _has;
    NSString * _identifier;
    BOOL  _isSecure;
    int  _messageType;
    unsigned int  _payloadSize;
    unsigned int  _timestamp;
    NSString * _transactionID;
    int  _transport;
}

@property (nonatomic) int direction;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsSecure;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTransactionID;
@property (nonatomic) BOOL hasTransport;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) BOOL isSecure;
@property (nonatomic) int messageType;
@property (nonatomic) unsigned int payloadSize;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic, retain) NSString *transactionID;
@property (nonatomic) int transport;

- (void).cxx_destruct;
- (int)StringAsDirection:(id)arg1;
- (int)StringAsMessageType:(id)arg1;
- (int)StringAsTransport:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)direction;
- (id)directionAsString:(int)arg1;
- (BOOL)hasDirection;
- (BOOL)hasIdentifier;
- (BOOL)hasIsSecure;
- (BOOL)hasMessageType;
- (BOOL)hasPayloadSize;
- (BOOL)hasTimestamp;
- (BOOL)hasTransactionID;
- (BOOL)hasTransport;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSecure;
- (void)mergeFrom:(id)arg1;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (unsigned int)payloadSize;
- (BOOL)readFrom:(id)arg1;
- (void)setDirection:(int)arg1;
- (void)setHasDirection:(BOOL)arg1;
- (void)setHasIsSecure:(BOOL)arg1;
- (void)setHasMessageType:(BOOL)arg1;
- (void)setHasPayloadSize:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransport:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsSecure:(BOOL)arg1;
- (void)setMessageType:(int)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setTransport:(int)arg1;
- (unsigned int)timestamp;
- (id)transactionID;
- (int)transport;
- (id)transportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
