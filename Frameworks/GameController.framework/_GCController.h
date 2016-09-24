/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCController : GCController <NSSecureCoding> {
    id /* block */  _controllerPausedHandler;
    unsigned int  _deviceHash;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSMutableArray * _hidServices;
    int  _playerIndex;
    <GCNamedProfile> * _profile;
    unsigned int  _service;
    NSString * _vendorName;
    NSString * physicalDeviceUniqueID;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addServiceRefs:(id)arg1;
- (void)clearServiceRef;
- (id /* block */)controllerPausedHandler;
- (void)dealloc;
- (id)description;
- (unsigned int)deviceHash;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedGamepad;
- (id)gamepad;
- (id)handlerQueue;
- (BOOL)hasServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (BOOL)isAttachedToDevice;
- (BOOL)isEqualToController:(id)arg1;
- (id)microGamepad;
- (id)motion;
- (id)physicalDeviceUniqueID;
- (int)playerIndex;
- (id)profile;
- (void)removeServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (unsigned int)service;
- (void)setControllerPausedHandler:(id /* block */)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setPhysicalDeviceUniqueID:(id)arg1;
- (void)setPlayerIndex:(int)arg1;
- (void)setProfile:(id)arg1;
- (id)vendorName;

@end
