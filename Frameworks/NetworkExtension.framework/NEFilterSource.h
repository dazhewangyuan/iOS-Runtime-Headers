/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterSource : NSObject {
    NSURLRequest * _currentRequest;
    NSURLResponse * _currentResponse;
    int  _direction;
    BOOL  _expectRemediation;
    NSUUID * _flowUUID;
    unsigned int  _lastPendingDataStartIndex;
    unsigned int  _lastSendDataLength;
    NSString * _organization;
    NSURL * _parentURL;
    unsigned int  _passLength;
    unsigned int  _peekIndex;
    NSMutableData * _pendingData;
    unsigned int  _pendingDataStartIndex;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _registered;
    NSString * _remediationButtonText;
    NSString * _remediationURL;
    unsigned int  _socketIdentifier;
    int  _status;
    NSURL * _url;
    NSString * _urlAppendString;
}

@property (retain) NSURLRequest *currentRequest;
@property (retain) NSURLResponse *currentResponse;
@property (readonly) int direction;
@property BOOL expectRemediation;
@property (retain) NSUUID *flowUUID;
@property unsigned int lastPendingDataStartIndex;
@property unsigned int lastSendDataLength;
@property (retain) NSString *organization;
@property (retain) NSURL *parentURL;
@property unsigned int passLength;
@property unsigned int peekIndex;
@property (retain) NSMutableData *pendingData;
@property unsigned int pendingDataStartIndex;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL registered;
@property (retain) NSString *remediationButtonText;
@property (retain) NSString *remediationURL;
@property (readonly) unsigned int socketIdentifier;
@property (readonly) int status;
@property (readonly) NSURL *url;
@property (retain) NSString *urlAppendString;

+ (unsigned int)checkPolicyFilterUnit;
+ (void)connectToAgentWithCompletionHandler:(id /* block */)arg1;
+ (BOOL)filterRequired;
+ (unsigned int)filterUnit;
+ (void)initializeGlobals;

- (void).cxx_destruct;
- (void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentRequest;
- (id)currentResponse;
- (void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)direction;
- (BOOL)expectRemediation;
- (id)filterOptions;
- (void)finishedLoadingWithDecisionHandler:(id /* block */)arg1;
- (id)flowUUID;
- (id)initWithDecisionQueue:(id)arg1;
- (id)initWithParentURL:(id)arg1 decisionQueue:(id)arg2;
- (id)initWithURL:(id)arg1 direction:(int)arg2 socketIdentifier:(unsigned int)arg3;
- (unsigned int)lastPendingDataStartIndex;
- (unsigned int)lastSendDataLength;
- (id)mergeURLString:(id)arg1 withAppendString:(id)arg2;
- (id)organization;
- (id)parentURL;
- (unsigned int)passLength;
- (unsigned int)peekIndex;
- (id)pendingData;
- (unsigned int)pendingDataStartIndex;
- (void)prepareAgentForRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)prepareAgentForResponse:(id)arg1 handler:(id /* block */)arg2;
- (void)prepareAgentForURL:(id)arg1 urlRequest:(id)arg2 urlResponse:(id)arg3 parentURL:(id)arg4 direction:(int)arg5 flowUUID:(id)arg6 handler:(id /* block */)arg7;
- (void)prepareAgentWithHandler:(id /* block */)arg1;
- (id)queue;
- (void)receivedData:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)receivedResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (BOOL)registered;
- (void)remediateWithDecisionHandler:(id /* block */)arg1;
- (id)remediationButtonText;
- (id)remediationURL;
- (id)replacementData;
- (BOOL)sendDataToPluginWithConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCurrentRequest:(id)arg1;
- (void)setCurrentResponse:(id)arg1;
- (void)setExpectRemediation:(BOOL)arg1;
- (void)setFlowUUID:(id)arg1;
- (void)setLastPendingDataStartIndex:(unsigned int)arg1;
- (void)setLastSendDataLength:(unsigned int)arg1;
- (void)setOrganization:(id)arg1;
- (void)setParentURL:(id)arg1;
- (void)setPassLength:(unsigned int)arg1;
- (void)setPeekIndex:(unsigned int)arg1;
- (void)setPendingData:(id)arg1;
- (void)setPendingDataStartIndex:(unsigned int)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegistered:(BOOL)arg1;
- (void)setRemediationButtonText:(id)arg1;
- (void)setRemediationURL:(id)arg1;
- (void)setUrlAppendString:(id)arg1;
- (unsigned int)socketIdentifier;
- (int)status;
- (id)url;
- (id)urlAppendString;
- (void)willSendRequest:(id)arg1 decisionHandler:(id /* block */)arg2;

@end
