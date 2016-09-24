/* Generated by RuntimeBrowser.
 */

@protocol WPHomeKitDelegate <NSObject>

@required

- (void)homeKit:(WPHomeKit *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)homeKit:(WPHomeKit *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)homeKitDidUpdateState:(WPHomeKit *)arg1;

@optional

- (void)homeKit:(WPHomeKit *)arg1 allowDuplicate:(BOOL)arg2;
- (void)homeKit:(WPHomeKit *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (void)homeKitStartedScanning:(WPHomeKit *)arg1;
- (void)homeKitStoppedScanning:(WPHomeKit *)arg1;

@end
