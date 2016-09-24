/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyCall : TUCall <AVCRemoteVideoClientDelegate, NSSecureCoding> {
    NSString * _audioCategory;
    NSString * _audioMode;
    TUCallProvider * _backingProvider;
    BOOL  _blocked;
    NSUUID * _callGroupUUID;
    int  _callIdentifier;
    int  _callRelaySupport;
    int  _callStatus;
    NSString * _callUUID;
    NSString * _callerNameFromNetwork;
    int  _cameraType;
    NSString * _contactIdentifier;
    TUCallDisplayContext * _displayContext;
    TUCallProvider * _displayProvider;
    BOOL  _downlinkMuted;
    BOOL  _emergencyCall;
    NSString * _endedErrorString;
    NSString * _endedReasonString;
    NSDictionary * _endedReasonUserInfo;
    TUHandle * _handle;
    BOOL  _hostedOnCurrentDevice;
    BOOL  _isSendingAudio;
    BOOL  _isSendingVideo;
    BOOL  _isVideo;
    NSData * _localFrequency;
    BOOL  _mediaStalled;
    BOOL  _needsManualInCallSounds;
    BOOL  _outgoing;
    NSDictionary * _providerContext;
    <TUCallServicesProxyCallActions> * _proxyCallActionsDelegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteAspectRatio;
    int  _remoteCameraOrientation;
    NSData * _remoteFrequency;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenLandscapeAspectRatio;
    int  _remoteScreenOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenPortraitAspectRatio;
    AVCRemoteVideoClient * _remoteVideo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _remoteVideoContentRect;
    NSMutableDictionary * _remoteVideoModeToLayer;
    double  _startTime;
    BOOL  _thirdPartyVideo;
    int  _ttyType;
    BOOL  _uplinkMuted;
    BOOL  _usingBaseband;
    BOOL  _videoDegraded;
    BOOL  _videoPaused;
    int  _videoStreamToken;
    BOOL  _voicemail;
}

@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic, copy) NSString *audioMode;
@property (nonatomic, retain) TUCallProvider *backingProvider;
@property (getter=isBlocked, nonatomic) BOOL blocked;
@property (nonatomic, copy) NSUUID *callGroupUUID;
@property (nonatomic) int callIdentifier;
@property (nonatomic) int callRelaySupport;
@property (nonatomic) int callStatus;
@property (nonatomic, copy) NSString *callUUID;
@property (nonatomic, copy) NSString *callerNameFromNetwork;
@property (nonatomic) int cameraType;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) TUCallDisplayContext *displayContext;
@property (nonatomic, retain) TUCallProvider *displayProvider;
@property (getter=isEmergencyCall, nonatomic) BOOL emergencyCall;
@property (nonatomic, copy) NSString *endedErrorString;
@property (nonatomic, copy) NSString *endedReasonString;
@property (nonatomic, copy) NSDictionary *endedReasonUserInfo;
@property (nonatomic, retain) TUHandle *handle;
@property (readonly) unsigned int hash;
@property (getter=isHostedOnCurrentDevice, nonatomic) BOOL hostedOnCurrentDevice;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic) BOOL isVideo;
@property (nonatomic, retain) NSData *localFrequency;
@property (getter=isMediaStalled, nonatomic) BOOL mediaStalled;
@property (nonatomic) BOOL needsManualInCallSounds;
@property (getter=isOutgoing, nonatomic) BOOL outgoing;
@property (nonatomic, retain) NSDictionary *providerContext;
@property (nonatomic) <TUCallServicesProxyCallActions> *proxyCallActionsDelegate;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteAspectRatio;
@property (nonatomic) int remoteCameraOrientation;
@property (nonatomic, retain) NSData *remoteFrequency;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteScreenLandscapeAspectRatio;
@property (nonatomic) int remoteScreenOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteScreenPortraitAspectRatio;
@property (nonatomic, retain) AVCRemoteVideoClient *remoteVideo;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } remoteVideoContentRect;
@property (nonatomic, retain) NSMutableDictionary *remoteVideoModeToLayer;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;
@property (nonatomic) int ttyType;
@property (getter=isUsingBaseband, nonatomic) BOOL usingBaseband;
@property (getter=isVideoDegraded, nonatomic) BOOL videoDegraded;
@property (getter=isVideoPaused, nonatomic) BOOL videoPaused;
@property (nonatomic) int videoStreamToken;
@property (getter=isVoicemail, nonatomic) BOOL voicemail;

+ (id)proxyCallWithCall:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)_cameraTypeForVideoAttributeCamera:(int)arg1;
- (void)_createRemoteVideoIfNecessary;
- (int)_orientationForVideoAttributesOrientation:(int)arg1;
- (void)_synchronizeRemoteVideoLayers;
- (void)_updateVideoStreamToken:(int)arg1;
- (void)answerWithRequest:(id)arg1;
- (id)audioCategory;
- (id)audioMode;
- (int)avcRemoteVideoModeForMode:(int)arg1;
- (id)backingProvider;
- (id)callGroupUUID;
- (int)callIdentifier;
- (int)callRelaySupport;
- (int)callStatus;
- (id)callUUID;
- (id)callerNameFromNetwork;
- (int)cameraType;
- (id)contactIdentifier;
- (void)disconnectWithReason:(int)arg1;
- (id)displayContext;
- (id)displayProvider;
- (void)encodeWithCoder:(id)arg1;
- (id)endedErrorString;
- (id)endedReasonString;
- (id)endedReasonUserInfo;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(BOOL)arg2;
- (BOOL)isBlocked;
- (BOOL)isDownlinkMuted;
- (BOOL)isEmergencyCall;
- (BOOL)isHostedOnCurrentDevice;
- (BOOL)isMediaStalled;
- (BOOL)isOutgoing;
- (BOOL)isSendingAudio;
- (BOOL)isSendingVideo;
- (BOOL)isThirdPartyVideo;
- (BOOL)isUplinkMuted;
- (BOOL)isUsingBaseband;
- (BOOL)isVideo;
- (BOOL)isVideoDegraded;
- (BOOL)isVideoPaused;
- (BOOL)isVoicemail;
- (struct CGSize { double x1; double x2; })localAspectRatioForOrientation:(int)arg1;
- (id)localFrequency;
- (BOOL)needsManualInCallSounds;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (id)providerContext;
- (id)proxyCallActionsDelegate;
- (struct CGSize { double x1; double x2; })remoteAspectRatio;
- (int)remoteCameraOrientation;
- (id)remoteFrequency;
- (struct CGSize { double x1; double x2; })remoteScreenAspectRatio;
- (struct CGSize { double x1; double x2; })remoteScreenLandscapeAspectRatio;
- (int)remoteScreenOrientation;
- (struct CGSize { double x1; double x2; })remoteScreenPortraitAspectRatio;
- (id)remoteVideo;
- (void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(BOOL)arg2;
- (void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteVideoContentRect;
- (id)remoteVideoModeToLayer;
- (void)sendHardPauseDigits;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioMode:(id)arg1;
- (void)setBackingProvider:(id)arg1;
- (void)setBlocked:(BOOL)arg1;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)setCallGroupUUID:(id)arg1;
- (void)setCallIdentifier:(int)arg1;
- (void)setCallRelaySupport:(int)arg1;
- (void)setCallStatus:(int)arg1;
- (void)setCallUUID:(id)arg1;
- (void)setCallerNameFromNetwork:(id)arg1;
- (void)setCameraType:(int)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)setDisplayContext:(id)arg1;
- (void)setDisplayProvider:(id)arg1;
- (void)setDownlinkMuted:(BOOL)arg1;
- (void)setEmergencyCall:(BOOL)arg1;
- (void)setEndedErrorString:(id)arg1;
- (void)setEndedReasonString:(id)arg1;
- (void)setEndedReasonUserInfo:(id)arg1;
- (void)setEndpointOnCurrentDevice:(BOOL)arg1;
- (void)setHandle:(id)arg1;
- (void)setHostedOnCurrentDevice:(BOOL)arg1;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setLocalFrequency:(id)arg1;
- (void)setMediaStalled:(BOOL)arg1;
- (void)setNeedsManualInCallSounds:(BOOL)arg1;
- (void)setOutgoing:(BOOL)arg1;
- (void)setProviderContext:(id)arg1;
- (void)setProxyCallActionsDelegate:(id)arg1;
- (void)setRemoteAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteCameraOrientation:(int)arg1;
- (void)setRemoteFrequency:(id)arg1;
- (void)setRemoteScreenLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteScreenOrientation:(int)arg1;
- (void)setRemoteScreenPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteVideo:(id)arg1;
- (void)setRemoteVideoContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(int)arg2;
- (void)setRemoteVideoModeToLayer:(id)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setShouldSuppressRingtone:(BOOL)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTransitionStatus:(int)arg1;
- (void)setTtyType:(int)arg1;
- (void)setUplinkMuted:(BOOL)arg1;
- (void)setUsingBaseband:(BOOL)arg1;
- (void)setVideoDegraded:(BOOL)arg1;
- (void)setVideoPaused:(BOOL)arg1;
- (void)setVideoStreamToken:(int)arg1;
- (void)setVoicemail:(BOOL)arg1;
- (void)setWantsHoldMusic:(BOOL)arg1;
- (double)startTime;
- (int)ttyType;
- (void)updateProxyCallWithDaemon;
- (void)updateWithCall:(id)arg1;
- (int)videoStreamToken;

@end
