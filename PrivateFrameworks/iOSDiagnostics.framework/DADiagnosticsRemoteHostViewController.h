/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iOSDiagnostics.framework/iOSDiagnostics
 */

@interface DADiagnosticsRemoteHostViewController : _UIRemoteViewController <DADiagnosticsRemoteHost> {
    <DADiagnosticsRemoteDelegate> * _delegate;
    <DKBrightnessResponder><DKVolumeHUDResponder> * _localResponder;
    double  _originalScreenBrightness;
}

@property (nonatomic) <DADiagnosticsRemoteDelegate> *delegate;
@property (nonatomic, retain) <DKBrightnessResponder><DKVolumeHUDResponder> *localResponder;
@property (nonatomic) double originalScreenBrightness;

+ (id)exportedInterface;
+ (void)requestDiagnosticsRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_diagnosticsServiceViewControllerProxy;
- (id)delegate;
- (void)didEnableVolumeHUD:(BOOL)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)didSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2;
- (void)disconnect;
- (id)localResponder;
- (float)originalScreenBrightness;
- (void)setDelegate:(id)arg1;
- (void)setLocalResponder:(id)arg1;
- (void)setOriginalScreenBrightness:(float)arg1;
- (void)teardown;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
