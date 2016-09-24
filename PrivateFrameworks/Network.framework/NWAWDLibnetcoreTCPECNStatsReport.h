/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreTCPECNStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int tcpECNClientSetup : 1; 
        unsigned int tcpECNClientSuccess : 1; 
        unsigned int tcpECNConnNoPacketLossCE : 1; 
        unsigned int tcpECNConnPacketLossCE : 1; 
        unsigned int tcpECNConnPacketLossNoCE : 1; 
        unsigned int tcpECNConnRecvCE : 1; 
        unsigned int tcpECNConnRecvECE : 1; 
        unsigned int tcpECNFallbackCE : 1; 
        unsigned int tcpECNFallbackReorder : 1; 
        unsigned int tcpECNFallbackSynLoss : 1; 
        unsigned int tcpECNNotSupportedPeer : 1; 
        unsigned int tcpECNRecvCE : 1; 
        unsigned int tcpECNRecvECE : 1; 
        unsigned int tcpECNSentECE : 1; 
        unsigned int tcpECNServerSetup : 1; 
        unsigned int tcpECNServerSuccess : 1; 
        unsigned int tcpECNSynAckLost : 1; 
        unsigned int tcpECNSynLost : 1; 
        unsigned int tcpECNClientNegotiationEnabled : 1; 
        unsigned int tcpECNServerNegotiationEnabled : 1; 
    }  _has;
    BOOL  _tcpECNClientNegotiationEnabled;
    unsigned int  _tcpECNClientSetup;
    unsigned int  _tcpECNClientSuccess;
    unsigned int  _tcpECNConnNoPacketLossCE;
    unsigned int  _tcpECNConnPacketLossCE;
    unsigned int  _tcpECNConnPacketLossNoCE;
    unsigned int  _tcpECNConnRecvCE;
    unsigned int  _tcpECNConnRecvECE;
    unsigned int  _tcpECNFallbackCE;
    unsigned int  _tcpECNFallbackReorder;
    unsigned int  _tcpECNFallbackSynLoss;
    unsigned int  _tcpECNNotSupportedPeer;
    unsigned int  _tcpECNRecvCE;
    unsigned int  _tcpECNRecvECE;
    unsigned int  _tcpECNSentECE;
    BOOL  _tcpECNServerNegotiationEnabled;
    unsigned int  _tcpECNServerSetup;
    unsigned int  _tcpECNServerSuccess;
    unsigned int  _tcpECNSynAckLost;
    unsigned int  _tcpECNSynLost;
}

@property (nonatomic) BOOL hasTcpECNClientNegotiationEnabled;
@property (nonatomic) BOOL hasTcpECNClientSetup;
@property (nonatomic) BOOL hasTcpECNClientSuccess;
@property (nonatomic) BOOL hasTcpECNConnNoPacketLossCE;
@property (nonatomic) BOOL hasTcpECNConnPacketLossCE;
@property (nonatomic) BOOL hasTcpECNConnPacketLossNoCE;
@property (nonatomic) BOOL hasTcpECNConnRecvCE;
@property (nonatomic) BOOL hasTcpECNConnRecvECE;
@property (nonatomic) BOOL hasTcpECNFallbackCE;
@property (nonatomic) BOOL hasTcpECNFallbackReorder;
@property (nonatomic) BOOL hasTcpECNFallbackSynLoss;
@property (nonatomic) BOOL hasTcpECNNotSupportedPeer;
@property (nonatomic) BOOL hasTcpECNRecvCE;
@property (nonatomic) BOOL hasTcpECNRecvECE;
@property (nonatomic) BOOL hasTcpECNSentECE;
@property (nonatomic) BOOL hasTcpECNServerNegotiationEnabled;
@property (nonatomic) BOOL hasTcpECNServerSetup;
@property (nonatomic) BOOL hasTcpECNServerSuccess;
@property (nonatomic) BOOL hasTcpECNSynAckLost;
@property (nonatomic) BOOL hasTcpECNSynLost;
@property (nonatomic) BOOL tcpECNClientNegotiationEnabled;
@property (nonatomic) unsigned int tcpECNClientSetup;
@property (nonatomic) unsigned int tcpECNClientSuccess;
@property (nonatomic) unsigned int tcpECNConnNoPacketLossCE;
@property (nonatomic) unsigned int tcpECNConnPacketLossCE;
@property (nonatomic) unsigned int tcpECNConnPacketLossNoCE;
@property (nonatomic) unsigned int tcpECNConnRecvCE;
@property (nonatomic) unsigned int tcpECNConnRecvECE;
@property (nonatomic) unsigned int tcpECNFallbackCE;
@property (nonatomic) unsigned int tcpECNFallbackReorder;
@property (nonatomic) unsigned int tcpECNFallbackSynLoss;
@property (nonatomic) unsigned int tcpECNNotSupportedPeer;
@property (nonatomic) unsigned int tcpECNRecvCE;
@property (nonatomic) unsigned int tcpECNRecvECE;
@property (nonatomic) unsigned int tcpECNSentECE;
@property (nonatomic) BOOL tcpECNServerNegotiationEnabled;
@property (nonatomic) unsigned int tcpECNServerSetup;
@property (nonatomic) unsigned int tcpECNServerSuccess;
@property (nonatomic) unsigned int tcpECNSynAckLost;
@property (nonatomic) unsigned int tcpECNSynLost;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTcpECNClientNegotiationEnabled;
- (BOOL)hasTcpECNClientSetup;
- (BOOL)hasTcpECNClientSuccess;
- (BOOL)hasTcpECNConnNoPacketLossCE;
- (BOOL)hasTcpECNConnPacketLossCE;
- (BOOL)hasTcpECNConnPacketLossNoCE;
- (BOOL)hasTcpECNConnRecvCE;
- (BOOL)hasTcpECNConnRecvECE;
- (BOOL)hasTcpECNFallbackCE;
- (BOOL)hasTcpECNFallbackReorder;
- (BOOL)hasTcpECNFallbackSynLoss;
- (BOOL)hasTcpECNNotSupportedPeer;
- (BOOL)hasTcpECNRecvCE;
- (BOOL)hasTcpECNRecvECE;
- (BOOL)hasTcpECNSentECE;
- (BOOL)hasTcpECNServerNegotiationEnabled;
- (BOOL)hasTcpECNServerSetup;
- (BOOL)hasTcpECNServerSuccess;
- (BOOL)hasTcpECNSynAckLost;
- (BOOL)hasTcpECNSynLost;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTcpECNClientNegotiationEnabled:(BOOL)arg1;
- (void)setHasTcpECNClientSetup:(BOOL)arg1;
- (void)setHasTcpECNClientSuccess:(BOOL)arg1;
- (void)setHasTcpECNConnNoPacketLossCE:(BOOL)arg1;
- (void)setHasTcpECNConnPacketLossCE:(BOOL)arg1;
- (void)setHasTcpECNConnPacketLossNoCE:(BOOL)arg1;
- (void)setHasTcpECNConnRecvCE:(BOOL)arg1;
- (void)setHasTcpECNConnRecvECE:(BOOL)arg1;
- (void)setHasTcpECNFallbackCE:(BOOL)arg1;
- (void)setHasTcpECNFallbackReorder:(BOOL)arg1;
- (void)setHasTcpECNFallbackSynLoss:(BOOL)arg1;
- (void)setHasTcpECNNotSupportedPeer:(BOOL)arg1;
- (void)setHasTcpECNRecvCE:(BOOL)arg1;
- (void)setHasTcpECNRecvECE:(BOOL)arg1;
- (void)setHasTcpECNSentECE:(BOOL)arg1;
- (void)setHasTcpECNServerNegotiationEnabled:(BOOL)arg1;
- (void)setHasTcpECNServerSetup:(BOOL)arg1;
- (void)setHasTcpECNServerSuccess:(BOOL)arg1;
- (void)setHasTcpECNSynAckLost:(BOOL)arg1;
- (void)setHasTcpECNSynLost:(BOOL)arg1;
- (void)setTcpECNClientNegotiationEnabled:(BOOL)arg1;
- (void)setTcpECNClientSetup:(unsigned int)arg1;
- (void)setTcpECNClientSuccess:(unsigned int)arg1;
- (void)setTcpECNConnNoPacketLossCE:(unsigned int)arg1;
- (void)setTcpECNConnPacketLossCE:(unsigned int)arg1;
- (void)setTcpECNConnPacketLossNoCE:(unsigned int)arg1;
- (void)setTcpECNConnRecvCE:(unsigned int)arg1;
- (void)setTcpECNConnRecvECE:(unsigned int)arg1;
- (void)setTcpECNFallbackCE:(unsigned int)arg1;
- (void)setTcpECNFallbackReorder:(unsigned int)arg1;
- (void)setTcpECNFallbackSynLoss:(unsigned int)arg1;
- (void)setTcpECNNotSupportedPeer:(unsigned int)arg1;
- (void)setTcpECNRecvCE:(unsigned int)arg1;
- (void)setTcpECNRecvECE:(unsigned int)arg1;
- (void)setTcpECNSentECE:(unsigned int)arg1;
- (void)setTcpECNServerNegotiationEnabled:(BOOL)arg1;
- (void)setTcpECNServerSetup:(unsigned int)arg1;
- (void)setTcpECNServerSuccess:(unsigned int)arg1;
- (void)setTcpECNSynAckLost:(unsigned int)arg1;
- (void)setTcpECNSynLost:(unsigned int)arg1;
- (BOOL)tcpECNClientNegotiationEnabled;
- (unsigned int)tcpECNClientSetup;
- (unsigned int)tcpECNClientSuccess;
- (unsigned int)tcpECNConnNoPacketLossCE;
- (unsigned int)tcpECNConnPacketLossCE;
- (unsigned int)tcpECNConnPacketLossNoCE;
- (unsigned int)tcpECNConnRecvCE;
- (unsigned int)tcpECNConnRecvECE;
- (unsigned int)tcpECNFallbackCE;
- (unsigned int)tcpECNFallbackReorder;
- (unsigned int)tcpECNFallbackSynLoss;
- (unsigned int)tcpECNNotSupportedPeer;
- (unsigned int)tcpECNRecvCE;
- (unsigned int)tcpECNRecvECE;
- (unsigned int)tcpECNSentECE;
- (BOOL)tcpECNServerNegotiationEnabled;
- (unsigned int)tcpECNServerSetup;
- (unsigned int)tcpECNServerSuccess;
- (unsigned int)tcpECNSynAckLost;
- (unsigned int)tcpECNSynLost;
- (void)writeTo:(id)arg1;

@end
