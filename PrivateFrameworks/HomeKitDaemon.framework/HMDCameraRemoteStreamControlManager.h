/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraStreamControlManagerProtocol, HMDStreamingManagerDelegate> {
    HMDCameraMediaConfigGenerator * _configGenerator;
    NSUUID * _profileUniqueIdentifier;
    HMDRemoteStreamSession * _streamSession;
}

@property (nonatomic, retain) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, retain) HMDRemoteStreamSession *streamSession;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cleanUpStreamSession;
- (void)_dispatchReconfigureToResident:(id)arg1;
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;
- (void)_idsSessionCreatedAndConfigNegotiated;
- (void)_negotiateStream;
- (void)_reconfigureStream:(id)arg1;
- (void)_reconfigureStreams;
- (void)_relaySessionStarted:(id)arg1;
- (void)_remoteSetup:(id)arg1;
- (void)_sendStopMessageToResident;
- (void)_sendUpdatedConfiguration;
- (void)_setParametersSelected:(id)arg1;
- (void)_startStream:(id)arg1;
- (void)_stopCurrentStreamSession;
- (void)_streamStarted;
- (id)configGenerator;
- (void)dealloc;
- (void)deviceConnectionReceiver:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionReceiver:(id)arg1 didSetup:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didSetup:(id)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned int)arg4 destinationID:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11;
- (void)negotiateStream;
- (id)profileUniqueIdentifier;
- (void)reconfigureStream:(id)arg1;
- (void)remoteSetup:(id)arg1;
- (void)sessionReceiver:(id)arg1 didEndSession:(id)arg2;
- (void)sessionReceiver:(id)arg1 didSetup:(id)arg2;
- (void)setConfigGenerator:(id)arg1;
- (void)setStreamSession:(id)arg1;
- (void)startStream:(id)arg1;
- (void)stopStream;
- (void)stopStreamAsIDSHasStopped;
- (id)streamSession;
- (void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;
- (void)streamingManagerDidNetworkImprove:(id)arg1;
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned int)arg2;
- (void)streamingManagerDidStopStream:(id)arg1;
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;
- (void)updateAudioSetting:(unsigned int)arg1;

@end
