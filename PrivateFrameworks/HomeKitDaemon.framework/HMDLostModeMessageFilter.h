/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLostModeMessageFilter : HMDMessageFilter {
    BOOL  _deviceLost;
}

@property (getter=isDeviceLost, nonatomic) BOOL deviceLost;

- (void)_deviceLostStateNotification:(id)arg1;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)initWithName:(id)arg1;
- (BOOL)isDeviceLost;
- (void)setDeviceLost:(BOOL)arg1;

@end
