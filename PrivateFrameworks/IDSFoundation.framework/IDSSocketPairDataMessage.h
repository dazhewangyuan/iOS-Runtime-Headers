/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairDataMessage : IDSSocketPairMessage {
    BOOL  _compressed;
    NSData * _data;
    BOOL  _expectsPeerResponse;
    NSDate * _expiryDate;
    NSString * _messageUUID;
    unsigned int  _payloadLength;
    unsigned int  _payloadOffset;
    NSString * _peerResponseIdentifier;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    BOOL  _wantsAppAck;
}

@property (nonatomic) BOOL compressed;
@property (nonatomic, readonly, retain) NSData *data;
@property (nonatomic, readonly) BOOL expectsPeerResponse;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, readonly, retain) NSString *messageUUID;
@property (nonatomic, readonly, retain) NSString *peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) BOOL wantsAppAck;

- (id)_nonHeaderData;
- (unsigned char)command;
- (BOOL)compressed;
- (id)data;
- (void)dealloc;
- (BOOL)expectsPeerResponse;
- (id)expiryDate;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8 expiryDate:(id)arg9;
- (id)messageUUID;
- (id)peerResponseIdentifier;
- (unsigned int)sequenceNumber;
- (void)setCompressed:(BOOL)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;
- (BOOL)wantsAppAck;

@end
