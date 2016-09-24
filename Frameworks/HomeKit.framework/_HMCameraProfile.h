/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraProfile : _HMAccessoryProfile {
    NSMutableArray * _controls;
    _HMCameraAudioControl * _microphoneControl;
    _HMCameraSettingsControl * _settingsControl;
    _HMCameraSnapshotControl * _snapshotControlInternal;
    _HMCameraAudioControl * _speakerControl;
    _HMCameraStreamControl * _streamControlInternal;
}

@property (nonatomic, readonly) NSMutableArray *controls;
@property (nonatomic, readonly) _HMCameraAudioControl *microphoneControl;
@property (nonatomic, readonly) _HMCameraSettingsControl *settingsControl;
@property (nonatomic, readonly) _HMCameraSnapshotControl *snapshotControlInternal;
@property (nonatomic, readonly) _HMCameraAudioControl *speakerControl;
@property (nonatomic, readonly) _HMCameraStreamControl *streamControlInternal;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (void)configureWithClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3 home:(id)arg4;
- (id)controls;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)microphoneControl;
- (id)settingsControl;
- (id)snapshotControlInternal;
- (id)speakerControl;
- (id)streamControlInternal;

@end
