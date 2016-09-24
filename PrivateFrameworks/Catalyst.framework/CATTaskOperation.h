/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATTaskOperation : CATOperation {
    <CATTaskOperationNotificationDelegate> * _notificationDelegate;
    NSUUID * _remoteUUID;
    CATTaskRequest * _request;
}

@property (nonatomic) <CATTaskOperationNotificationDelegate> *notificationDelegate;
@property (nonatomic, copy) NSUUID *remoteUUID;
@property (nonatomic, readonly) CATTaskRequest *request;

+ (BOOL)isCancelable;
+ (id)new;
+ (BOOL)validateRequest:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (BOOL)canSendNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (void)main;
- (id)notificationDelegate;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)processMessage:(id)arg1;
- (void)processNotificationMessage:(id)arg1;
- (id)remoteUUID;
- (id)request;
- (void)setNotificationDelegate:(id)arg1;
- (void)setRemoteUUID:(id)arg1;

@end
