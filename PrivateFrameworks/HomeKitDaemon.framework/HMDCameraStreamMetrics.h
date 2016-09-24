/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamMetrics : HMDLogEvent <HMDAWDLogEvent> {
    BOOL  _isLocal;
    NSMutableArray * _resolutionTypes;
    NSString * _sessionID;
    BOOL  _streamStarted;
    double  _timeStreamStarted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isLocal;
@property (nonatomic, readonly) NSMutableArray *resolutionTypes;
@property (nonatomic, readonly) NSString *sessionID;
@property (getter=isStreamStarted, nonatomic) BOOL streamStarted;
@property (readonly) Class superclass;
@property (nonatomic) double timeStreamStarted;

+ (id)cameraStreamMetricWithID:(id)arg1 isLocal:(BOOL)arg2;
+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithID:(id)arg1 isLocal:(BOOL)arg2;
- (BOOL)isLocal;
- (BOOL)isStreamStarted;
- (id)metricForAWD;
- (void)negotiationComplete:(id)arg1;
- (void)reportError:(id)arg1;
- (id)resolutionTypes;
- (id)sessionID;
- (void)setStreamStarted:(BOOL)arg1;
- (void)setTimeStreamStarted:(double)arg1;
- (double)startDelay;
- (void)streamStarted;
- (void)streamStopped;
- (double)timeStreamStarted;

@end
