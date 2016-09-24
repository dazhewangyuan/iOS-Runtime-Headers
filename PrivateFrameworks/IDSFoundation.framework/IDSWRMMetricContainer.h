/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSWRMMetricContainer : NSObject {
    unsigned int  _MessageDeliveredDeliveryError;
    unsigned int  _MessageDeliveredRTT;
    unsigned int  _MessageDeliveredSize;
    unsigned int  _MessageReceivedSize;
    unsigned int  _MessageSentSize;
    unsigned int  _StreamBytesReceived;
    unsigned int  _StreamBytesSent;
    unsigned int  _StreamPacketsReceived;
    unsigned int  _StreamPacketsSent;
    unsigned int  _numMessageDeliveredRTT;
    unsigned int  _numMessageDeliveredSize;
    unsigned int  _numMessageReceivedSize;
    unsigned int  _numMessageSentSize;
}

@property (nonatomic) unsigned int MessageDeliveredDeliveryError;
@property (nonatomic) unsigned int MessageDeliveredRTT;
@property (nonatomic) unsigned int MessageDeliveredSize;
@property (nonatomic) unsigned int MessageReceivedSize;
@property (nonatomic) unsigned int MessageSentSize;
@property (nonatomic) unsigned int StreamBytesReceived;
@property (nonatomic) unsigned int StreamBytesSent;
@property (nonatomic) unsigned int StreamPacketsReceived;
@property (nonatomic) unsigned int StreamPacketsSent;
@property (nonatomic, readonly) unsigned int numMessageDeliveredRTT;
@property (nonatomic, readonly) unsigned int numMessageDeliveredSize;
@property (nonatomic, readonly) unsigned int numMessageReceivedSize;
@property (nonatomic, readonly) unsigned int numMessageSentSize;

- (unsigned int)MessageDeliveredDeliveryError;
- (unsigned int)MessageDeliveredRTT;
- (unsigned int)MessageDeliveredSize;
- (unsigned int)MessageReceivedSize;
- (unsigned int)MessageSentSize;
- (unsigned int)StreamBytesReceived;
- (unsigned int)StreamBytesSent;
- (unsigned int)StreamPacketsReceived;
- (unsigned int)StreamPacketsSent;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned int)numMessageDeliveredRTT;
- (unsigned int)numMessageDeliveredSize;
- (unsigned int)numMessageReceivedSize;
- (unsigned int)numMessageSentSize;
- (void)resetMetric;
- (void)setMessageDeliveredDeliveryError:(unsigned int)arg1;
- (void)setMessageDeliveredRTT:(unsigned int)arg1;
- (void)setMessageDeliveredSize:(unsigned int)arg1;
- (void)setMessageReceivedSize:(unsigned int)arg1;
- (void)setMessageSentSize:(unsigned int)arg1;
- (void)setStreamBytesReceived:(unsigned int)arg1;
- (void)setStreamBytesSent:(unsigned int)arg1;
- (void)setStreamPacketsReceived:(unsigned int)arg1;
- (void)setStreamPacketsSent:(unsigned int)arg1;

@end
