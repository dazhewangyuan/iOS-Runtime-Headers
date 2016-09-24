/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSSessionEnded : PBCodable <NSCopying> {
    unsigned int  _callDuration;
    unsigned int  _conferenceMiscError;
    unsigned int  _connectDuration;
    unsigned int  _connectionType;
    unsigned int  _currentNatType;
    unsigned int  _dataRate;
    unsigned int  _endedReason;
    unsigned int  _gameKitError;
    int  _genericError;
    int  _gksError;
    int  _gksReturnCode;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int callDuration : 1; 
        unsigned int conferenceMiscError : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int dataRate : 1; 
        unsigned int endedReason : 1; 
        unsigned int gameKitError : 1; 
        unsigned int genericError : 1; 
        unsigned int gksError : 1; 
        unsigned int gksReturnCode : 1; 
        unsigned int isInitiator : 1; 
        unsigned int isNetworkActive : 1; 
        unsigned int isNetworkEnabled : 1; 
        unsigned int isNetworkReachable : 1; 
        unsigned int linkQuality : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int networkCheckResult : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
    }  _has;
    unsigned int  _isInitiator;
    unsigned int  _isNetworkActive;
    unsigned int  _isNetworkEnabled;
    unsigned int  _isNetworkReachable;
    int  _linkQuality;
    unsigned int  _localNetworkConnection;
    unsigned int  _networkCheckResult;
    unsigned int  _relayConnectDuration;
    unsigned int  _remoteNatType;
    unsigned int  _remoteNetworkConnection;
    unsigned long long  _timestamp;
    unsigned int  _usesRelay;
}

@property (nonatomic) unsigned int callDuration;
@property (nonatomic) unsigned int conferenceMiscError;
@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int currentNatType;
@property (nonatomic) unsigned int dataRate;
@property (nonatomic) unsigned int endedReason;
@property (nonatomic) unsigned int gameKitError;
@property (nonatomic) int genericError;
@property (nonatomic) int gksError;
@property (nonatomic) int gksReturnCode;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) BOOL hasCallDuration;
@property (nonatomic) BOOL hasConferenceMiscError;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasCurrentNatType;
@property (nonatomic) BOOL hasDataRate;
@property (nonatomic) BOOL hasEndedReason;
@property (nonatomic) BOOL hasGameKitError;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic) BOOL hasGksError;
@property (nonatomic) BOOL hasGksReturnCode;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasIsInitiator;
@property (nonatomic) BOOL hasIsNetworkActive;
@property (nonatomic) BOOL hasIsNetworkEnabled;
@property (nonatomic) BOOL hasIsNetworkReachable;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) BOOL hasLocalNetworkConnection;
@property (nonatomic) BOOL hasNetworkCheckResult;
@property (nonatomic) BOOL hasRelayConnectDuration;
@property (nonatomic) BOOL hasRemoteNatType;
@property (nonatomic) BOOL hasRemoteNetworkConnection;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUsesRelay;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) unsigned int isNetworkActive;
@property (nonatomic) unsigned int isNetworkEnabled;
@property (nonatomic) unsigned int isNetworkReachable;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int localNetworkConnection;
@property (nonatomic) unsigned int networkCheckResult;
@property (nonatomic) unsigned int relayConnectDuration;
@property (nonatomic) unsigned int remoteNatType;
@property (nonatomic) unsigned int remoteNetworkConnection;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int usesRelay;

- (unsigned int)callDuration;
- (unsigned int)conferenceMiscError;
- (unsigned int)connectDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentNatType;
- (unsigned int)dataRate;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endedReason;
- (unsigned int)gameKitError;
- (int)genericError;
- (int)gksError;
- (int)gksReturnCode;
- (id)guid;
- (BOOL)hasCallDuration;
- (BOOL)hasConferenceMiscError;
- (BOOL)hasConnectDuration;
- (BOOL)hasConnectionType;
- (BOOL)hasCurrentNatType;
- (BOOL)hasDataRate;
- (BOOL)hasEndedReason;
- (BOOL)hasGameKitError;
- (BOOL)hasGenericError;
- (BOOL)hasGksError;
- (BOOL)hasGksReturnCode;
- (BOOL)hasGuid;
- (BOOL)hasIsInitiator;
- (BOOL)hasIsNetworkActive;
- (BOOL)hasIsNetworkEnabled;
- (BOOL)hasIsNetworkReachable;
- (BOOL)hasLinkQuality;
- (BOOL)hasLocalNetworkConnection;
- (BOOL)hasNetworkCheckResult;
- (BOOL)hasRelayConnectDuration;
- (BOOL)hasRemoteNatType;
- (BOOL)hasRemoteNetworkConnection;
- (BOOL)hasTimestamp;
- (BOOL)hasUsesRelay;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isInitiator;
- (unsigned int)isNetworkActive;
- (unsigned int)isNetworkEnabled;
- (unsigned int)isNetworkReachable;
- (int)linkQuality;
- (unsigned int)localNetworkConnection;
- (void)mergeFrom:(id)arg1;
- (unsigned int)networkCheckResult;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)relayConnectDuration;
- (unsigned int)remoteNatType;
- (unsigned int)remoteNetworkConnection;
- (void)setCallDuration:(unsigned int)arg1;
- (void)setConferenceMiscError:(unsigned int)arg1;
- (void)setConnectDuration:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (void)setDataRate:(unsigned int)arg1;
- (void)setEndedReason:(unsigned int)arg1;
- (void)setGameKitError:(unsigned int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGksError:(int)arg1;
- (void)setGksReturnCode:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasCallDuration:(BOOL)arg1;
- (void)setHasConferenceMiscError:(BOOL)arg1;
- (void)setHasConnectDuration:(BOOL)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasCurrentNatType:(BOOL)arg1;
- (void)setHasDataRate:(BOOL)arg1;
- (void)setHasEndedReason:(BOOL)arg1;
- (void)setHasGameKitError:(BOOL)arg1;
- (void)setHasGenericError:(BOOL)arg1;
- (void)setHasGksError:(BOOL)arg1;
- (void)setHasGksReturnCode:(BOOL)arg1;
- (void)setHasIsInitiator:(BOOL)arg1;
- (void)setHasIsNetworkActive:(BOOL)arg1;
- (void)setHasIsNetworkEnabled:(BOOL)arg1;
- (void)setHasIsNetworkReachable:(BOOL)arg1;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasLocalNetworkConnection:(BOOL)arg1;
- (void)setHasNetworkCheckResult:(BOOL)arg1;
- (void)setHasRelayConnectDuration:(BOOL)arg1;
- (void)setHasRemoteNatType:(BOOL)arg1;
- (void)setHasRemoteNetworkConnection:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUsesRelay:(BOOL)arg1;
- (void)setIsInitiator:(unsigned int)arg1;
- (void)setIsNetworkActive:(unsigned int)arg1;
- (void)setIsNetworkEnabled:(unsigned int)arg1;
- (void)setIsNetworkReachable:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (void)setNetworkCheckResult:(unsigned int)arg1;
- (void)setRelayConnectDuration:(unsigned int)arg1;
- (void)setRemoteNatType:(unsigned int)arg1;
- (void)setRemoteNetworkConnection:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsesRelay:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)usesRelay;
- (void)writeTo:(id)arg1;

@end
