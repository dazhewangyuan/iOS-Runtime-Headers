/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBLocalNotificationReceived : PBCodable <NSCopying> {
    struct { 
        unsigned int localNotificationNumberReceived : 1; 
    }  _has;
    int  _localNotificationNumberReceived;
}

@property (nonatomic) BOOL hasLocalNotificationNumberReceived;
@property (nonatomic) int localNotificationNumberReceived;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLocalNotificationNumberReceived;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)localNotificationNumberReceived;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLocalNotificationNumberReceived:(BOOL)arg1;
- (void)setLocalNotificationNumberReceived:(int)arg1;
- (void)writeTo:(id)arg1;

@end
