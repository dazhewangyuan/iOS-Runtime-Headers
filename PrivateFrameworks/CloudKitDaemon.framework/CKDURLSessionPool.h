/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDURLSessionPool : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegatePrivate> {
    int  _backgroundSessionConnectionPoolLimit;
    NSMutableDictionary * _delegateByTaskDescription;
    NSMutableDictionary * _ephemeralSessionByName;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionByIdentifier;
    NSMutableDictionary * _sessionConfigurationReferenceByIdentifier;
    NSMutableDictionary * _sessionConfigurationReferenceByName;
}

@property (nonatomic, readonly) int backgroundSessionConnectionPoolLimit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)backgroundSessionConnectionPoolName;
+ (id)sharedURLSessionPool;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(int)arg3 totalBytesSent:(int)arg4 totalBytesExpectedToSend:(int)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_URLSessionWithConfiguration:(id)arg1 configurationName:(id)arg2 forDelegate:(id)arg3;
- (void)_performAsyncOnDelegateOfSession:(id)arg1 task:(id)arg2 fromSelector:(SEL)arg3 block:(id /* block */)arg4;
- (void)_updateBackgroundSessionConnectionPoolLimit;
- (int)backgroundSessionConnectionPoolLimit;
- (void)checkinSessionConfiguration:(id)arg1 withName:(id)arg2;
- (id)checkoutSessionConfigurationWithName:(id)arg1;
- (id)dataTaskWithTaskDescription:(id)arg1 configuration:(id)arg2 configurationName:(id)arg3 request:(id)arg4 delegate:(id)arg5;
- (id)init;
- (void)invalidateDataTask:(id)arg1;
- (void)setSessionConfiguration:(id)arg1 forName:(id)arg2;

@end
