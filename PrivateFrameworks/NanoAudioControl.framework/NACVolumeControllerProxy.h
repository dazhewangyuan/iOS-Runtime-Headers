/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACVolumeControllerProxy : NSObject <NACVolumeController> {
    double  _EUVolumeLimit;
    NSString * _category;
    <NACVolumeControllerDelegate> * _delegate;
    NSNumber * _hapticIntensity;
    NACEventThrottler * _hapticThrottler;
    BOOL  _isObserving;
    BOOL  _lastReceivedProminentHapticEnabled;
    double  _lastReceivedVolumeValue;
    double  _lastRecievedHapticIntensity;
    BOOL  _muted;
    BOOL  _prominentHapticEnabled;
    NSObject<OS_dispatch_source> * _setHapticTimer;
    NSObject<OS_dispatch_source> * _setProminentHapticTimer;
    NSObject<OS_dispatch_source> * _setVolumeTimer;
    BOOL  _systemMuted;
    BOOL  _volumeControlAvailable;
    NACEventThrottler * _volumeThrottler;
    NSNumber * _volumeValue;
    BOOL  _volumeWarningEnabled;
    NACXPCClient * _xpcClient;
}

@property (nonatomic, readonly) double EUVolumeLimit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double hapticIntensity;
@property (readonly) unsigned int hash;
@property (getter=isMuted, nonatomic, readonly) BOOL muted;
@property (getter=isProminentHapticEnabled, nonatomic) BOOL prominentHapticEnabled;
@property (readonly) Class superclass;
@property (getter=isSystemMuted, nonatomic) BOOL systemMuted;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) BOOL volumeControlAvailable;
@property (nonatomic, readonly) double volumeValue;
@property (getter=isVolumeWarningEnabled, nonatomic, readonly) BOOL volumeWarningEnabled;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_EUVolumeLimitDidChange;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_cancelSetHapticTimer;
- (void)_cancelSetProminentHapticTimer;
- (void)_cancelSetVolumeTimer;
- (void)_hapticIntensityDidChange;
- (void)_hapticTimeout;
- (void)_mutedStateDidChange;
- (void)_notifyDelegateHapticChanged;
- (void)_notifyDelegateProminentHapticStateChanged;
- (void)_notifyDelegateSystemMutedStateChanged;
- (void)_notifyDelegateVolumeChanged;
- (void)_prominentHapticStateDidChange;
- (void)_prominentHapticTimeout;
- (id)_scheduleTimeoutWithBlock:(id /* block */)arg1;
- (void)_setHapticIntensity:(id)arg1;
- (void)_setVolumeValue:(id)arg1;
- (void)_systemMutedStateDidChange;
- (void)_volumeControlAvailabilityDidChange;
- (void)_volumeTimout;
- (void)_volumeValueDidChange;
- (void)_volumeWarningDidChange;
- (void)beginObservingVolume;
- (void)dealloc;
- (id)delegate;
- (void)endObservingVolume;
- (float)hapticIntensity;
- (id)init;
- (id)initWithAudioCategory:(id)arg1;
- (BOOL)isMuted;
- (BOOL)isProminentHapticEnabled;
- (BOOL)isSystemMuted;
- (BOOL)isVolumeControlAvailable;
- (BOOL)isVolumeWarningEnabled;
- (void)setDelegate:(id)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setProminentHapticEnabled:(BOOL)arg1;
- (void)setSystemMuted:(BOOL)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3;
- (float)volumeValue;

@end
