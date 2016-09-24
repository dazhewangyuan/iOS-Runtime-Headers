/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadHandler : NSObject {
    SSXPCConnection * _controlConnection;
    <SSDownloadHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _downloadPhasesToIgnore;
    int  _handlerID;
    SSXPCConnection * _observerConnection;
    BOOL  _sessionsNeedPowerAssertion;
    BOOL  _sessionsShouldBlockOtherDownloads;
}

@property <SSDownloadHandlerDelegate> *delegate;
@property (copy) NSArray *downloadPhasesToIgnore;
@property (readonly) int handlerIdentifier;
@property BOOL sessionsNeedPowerAssertion;
@property BOOL sessionsShouldBlockOtherDownloads;

- (void)_connectToDaemon;
- (id)_controlConnection;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (id)_newSessionWithMessage:(id)arg1;
- (BOOL)_sendAuthenticationSessionWithMessage:(id)arg1;
- (void)_sendDisconnectMessage;
- (BOOL)_sendSessionCancelWithMessage:(id)arg1;
- (BOOL)_sendSessionHandleWithMessage:(id)arg1;
- (BOOL)_sendSessionPauseWithMessage:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(const char *)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)downloadPhasesToIgnore;
- (int)handlerIdentifier;
- (id)init;
- (void)resetDisavowedSessions;
- (BOOL)sessionsNeedPowerAssertion;
- (BOOL)sessionsShouldBlockOtherDownloads;
- (void)setDelegate:(id)arg1;
- (void)setDownloadPhasesToIgnore:(id)arg1;
- (void)setSessionsNeedPowerAssertion:(BOOL)arg1;
- (void)setSessionsShouldBlockOtherDownloads:(BOOL)arg1;

@end
