/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMutableLegacyStillImageCaptureRequest : CAMLegacyStillImageCaptureRequest <CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestPower>

@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic, copy) NSString *burstIdentifier;
@property (nonatomic) int captureDevice;
@property (nonatomic) int captureMode;
@property (nonatomic) int captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int deferredPersistenceOptions;
@property (nonatomic) <CAMLegacyStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effectFilterType;
@property (nonatomic) int flashMode;
@property (readonly) unsigned int hash;
@property (nonatomic) int hdrMode;
@property (nonatomic, copy) NSURL *localDestinationURL;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) unsigned int maximumBurstLength;
@property (nonatomic, copy) NSString *originalPersistenceUUID;
@property (nonatomic) int persistenceOptions;
@property (nonatomic, copy) NSString *persistenceUUID;
@property (nonatomic) int physicalButtonType;
@property (nonatomic) BOOL shouldDelayRemotePersistence;
@property (nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (nonatomic) int temporaryPersistenceOptions;
@property (getter=isTransient, nonatomic) BOOL transient;
@property (nonatomic) BOOL usesStillImageStabilization;
@property (nonatomic) BOOL wantsAudioForCapture;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAssertionIdentifier:(unsigned int)arg1;
- (void)setBurstIdentifier:(id)arg1;
- (void)setCaptureDevice:(int)arg1;
- (void)setCaptureMode:(int)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setCapturedFromPhotoBooth:(BOOL)arg1;
- (void)setDeferredPersistenceOptions:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectFilterType:(int)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setHdrMode:(int)arg1;
- (void)setLocalDestinationURL:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMaximumBurstLength:(unsigned int)arg1;
- (void)setOriginalPersistenceUUID:(id)arg1;
- (void)setPersistenceOptions:(int)arg1;
- (void)setPersistenceUUID:(id)arg1;
- (void)setPhysicalButtonType:(int)arg1;
- (void)setShouldDelayRemotePersistence:(BOOL)arg1;
- (void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1;
- (void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1;
- (void)setTemporaryPersistenceOptions:(int)arg1;
- (void)setTransient:(BOOL)arg1;
- (void)setUsesStillImageStabilization:(BOOL)arg1;
- (void)setWantsAudioForCapture:(BOOL)arg1;

@end
