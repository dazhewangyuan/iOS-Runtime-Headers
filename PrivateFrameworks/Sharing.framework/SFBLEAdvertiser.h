/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFBLEAdvertiser : NSObject <WPNearbyDelegate> {
    BOOL  _activateCalled;
    int  _advertiseRate;
    int  _advertiseState;
    id /* block */  _advertiseStateChangedHandler;
    id /* block */  _bluetoothStateChangedHandler;
    id /* block */  _connectionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _invalidateCalled;
    id /* block */  _invalidationHandler;
    CUBitCoder * _payloadCoder;
    NSData * _payloadDataCurrent;
    NSData * _payloadDataPrevious;
    NSDictionary * _payloadFields;
    NSString * _payloadIdentifier;
    int  _payloadType;
    CURetrier * _startRetrier;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    WPNearby * _wpNearby;
    int  _wpNearbyType;
}

@property (nonatomic) int advertiseRate;
@property (nonatomic, copy) id /* block */ advertiseStateChangedHandler;
@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic, copy) id /* block */ connectionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (long)_preparePayload:(BOOL)arg1;
- (void)_restartIfNeeded:(BOOL)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)advertiseRate;
- (id /* block */)advertiseStateChangedHandler;
- (id /* block */)bluetoothStateChangedHandler;
- (id /* block */)connectionHandler;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (id)initWithType:(int)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didDeferAdvertisingType:(int)arg2;
- (void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(int)arg2 withError:(id)arg3;
- (void)nearby:(id)arg1 didStartAdvertisingType:(int)arg2;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)setAdvertiseRate:(int)arg1;
- (void)setAdvertiseStateChangedHandler:(id /* block */)arg1;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setConnectionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPayloadCoder:(id)arg1 fields:(id)arg2 identifier:(id)arg3;
- (void)setPayloadData:(id)arg1;

@end
