/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionVendorContext : _MXExtensionBaseContext <_MXExtensionContextXPCProtocol, _MXExtensionVendorContextProtocol> {
    <_MXExtensionHostXPCProtocol> * _hostProxy;
}

@property (nonatomic) id connectionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeConnection;
- (void)connectRemoteProxyFromHost:(id)arg1 supportingProtocolName:(id)arg2 reply:(id /* block */)arg3;
- (id)hostContext;
- (id)hostContextWithErrorHandler:(id /* block */)arg1;

@end
