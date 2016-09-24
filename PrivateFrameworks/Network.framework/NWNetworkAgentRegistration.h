/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWNetworkAgentRegistration : NSObject {
    NSObject<NWNetworkAgent> * _networkAgent;
    Class  _networkAgentClass;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _readSource;
    NSUUID * _registeredUUID;
    int  _registrationSocket;
}

@property (retain) NSObject<NWNetworkAgent> *networkAgent;
@property Class networkAgentClass;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (getter=isRegistered, nonatomic, readonly) BOOL registered;
@property (retain) NSUUID *registeredUUID;
@property int registrationSocket;

+ (BOOL)addActiveAssertionToNetworkAgent:(id)arg1;
+ (int)newRegistrationFileDescriptor;
+ (BOOL)removeActiveAssertionFromNetworkAgent:(id)arg1;

- (void).cxx_destruct;
- (BOOL)addNetworkAgentToInterfaceNamed:(id)arg1;
- (BOOL)assignNexusData:(id)arg1 toClient:(id)arg2;
- (BOOL)createReadSourceWithRegistrationSocket:(int)arg1;
- (void)dealloc;
- (int)dupRegistrationFileDescriptor;
- (void)handleMessageFromAgent;
- (id)initWithNetworkAgentClass:(Class)arg1;
- (BOOL)isRegistered;
- (id)networkAgent;
- (Class)networkAgentClass;
- (id)queue;
- (id)readSource;
- (BOOL)registerNetworkAgent:(id)arg1;
- (BOOL)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2;
- (id)registeredUUID;
- (int)registrationSocket;
- (BOOL)removeNetworkAgentFromInterfaceNamed:(id)arg1;
- (void)setNetworkAgent:(id)arg1;
- (void)setNetworkAgentClass:(Class)arg1;
- (void)setQueue:(id)arg1;
- (void)setReadSource:(id)arg1;
- (BOOL)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2;
- (void)setRegisteredUUID:(id)arg1;
- (void)setRegistrationSocket:(int)arg1;
- (BOOL)unregisterNetworkAgent;
- (BOOL)updateNetworkAgent:(id)arg1;

@end
