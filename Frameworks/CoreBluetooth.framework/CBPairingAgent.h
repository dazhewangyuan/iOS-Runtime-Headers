/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPairingAgent : NSObject {
    <CBPairingAgentDelegate> * _delegate;
    <CBPairingAgentParentDelegate> * _parentManager;
    BOOL  _useOOBMode;
}

@property (nonatomic) <CBPairingAgentDelegate> *delegate;
@property (nonatomic) <CBPairingAgentParentDelegate> *parentManager;
@property (nonatomic) BOOL useOOBMode;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)handlePairingCompleted:(id)arg1;
- (void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2;
- (void)handlePairingRequested:(id)arg1;
- (void)handleUnpaired:(id)arg1;
- (id)initWithParentManager:(id)arg1;
- (BOOL)isPeerCloudPaired:(id)arg1;
- (BOOL)isPeerPaired:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pairPeer:(id)arg1;
- (id)parentManager;
- (void)respondToPairingRequest:(id)arg1 type:(int)arg2 accept:(BOOL)arg3 data:(id)arg4;
- (id)retrieveOOBDataForPeer:(id)arg1;
- (id)retrievePairedPeers;
- (void)setDelegate:(id)arg1;
- (void)setOOBPairingEnabled:(BOOL)arg1 forPeer:(id)arg2;
- (void)setParentManager:(id)arg1;
- (void)setUseOOBMode:(BOOL)arg1;
- (void)unpairPeer:(id)arg1;
- (void)updateRegistration;
- (BOOL)useOOBMode;

@end
