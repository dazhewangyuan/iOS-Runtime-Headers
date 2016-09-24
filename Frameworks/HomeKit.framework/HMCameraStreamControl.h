/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate> {
    <HMCameraStreamControlDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    _HMCameraStreamControl * _streamControl;
}

@property (nonatomic, readonly) HMCameraStream *cameraStream;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMCameraStreamControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) _HMCameraStreamControl *streamControl;
@property (nonatomic, readonly) unsigned int streamState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cameraStream;
- (void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (id)delegate;
- (id)initWithStreamControl:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)propertyQueue;
- (void)resetControl;
- (void)setDelegate:(id)arg1;
- (void)setStreamControl:(id)arg1;
- (void)startStream;
- (void)stopStream;
- (id)streamControl;
- (unsigned int)streamState;

@end
