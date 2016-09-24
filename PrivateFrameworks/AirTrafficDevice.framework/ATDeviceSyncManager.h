/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceSyncManager : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler, ATSessionObserver> {
    NSMutableDictionary * _activeSessionsForLinkIDAndDataClass;
    NSObject<OS_dispatch_queue> * _queue;
    ATDeviceSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)deviceSyncManager;

- (void).cxx_destruct;
- (id)_activeSessionsOnMessageLink:(id)arg1;
- (void)_cancelSyncForDataClass:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleBeginSyncSessionRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleEndSyncSessionRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleRequest:(id)arg1 onMessageLink:(id)arg2;
- (id)_initiateSyncForDataClass:(id)arg1 onMessageLink:(id)arg2;
- (void)_removeSessionForMessageLink:(id)arg1 dataClass:(id)arg2;
- (id)_sessionForMessageLink:(id)arg1 dataClass:(id)arg2;
- (id)_sessionTaskForRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_setSession:(id)arg1 forMessageLink:(id)arg2 dataClass:(id)arg3;
- (id)_startSyncSessionForDataClass:(id)arg1 messageLink:(id)arg2 identifier:(id)arg3;
- (void)cancelSyncForDataClass:(id)arg1 onMessageLink:(id)arg2;
- (void)cancelSyncOnMessageLink:(id)arg1;
- (id)init;
- (id)initiateSyncForDataClass:(id)arg1 onMessageLink:(id)arg2;
- (void)initiateSyncOnMessageLink:(id)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)session:(id)arg1 didFinishSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (void)sessionDidFinish:(id)arg1;
- (void)sessionWillBegin:(id)arg1;

@end
