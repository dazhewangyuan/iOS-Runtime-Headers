/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@interface FudInternalConnection : NSObject <FudConnection> {
    NSString * clientIdentifier;
    BOOL  didStop;
    NSObject<OS_dispatch_queue> * handlerQueue;
    id /* block */  messageHandler;
    NSMutableDictionary * pendingRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (int)getNextMessageID;
- (void)handleInboundNotification:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(id /* block */)arg3;
- (void)sendMessageToFud:(id)arg1;
- (void)sendMessageToFud:(id)arg1 reply:(id /* block */)arg2;
- (void)stop;

@end
