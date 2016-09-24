/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMResidentDevice : NSObject <HFPrettyDescription, HMObjectMerge, NSSecureCoding> {
    unsigned int  _capabilities;
    NSObject<OS_dispatch_queue> * _clientQueue;
    BOOL  _currentDevice;
    <HMResidentDeviceDelegate> * _delegate;
    HMDelegateCaller * _delegateCaller;
    BOOL  _enabled;
    HMHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    unsigned int  _status;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (readonly) unsigned int capabilities;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (getter=isCurrentDevice, readonly) BOOL currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property <HMResidentDeviceDelegate> *delegate;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled) BOOL enabled;
@property (readonly) unsigned int hash;
@property HMHome *home;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property unsigned int status;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (unsigned int)capabilities;
- (id)clientQueue;
- (id)delegate;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCurrentDevice;
- (BOOL)isEnabled;
- (id)messageDispatcher;
- (id)name;
- (id)propertyQueue;
- (void)setClientQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHome:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (id)uniqueIdentifier;
- (void)updatedEnabled:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescription;

@end
