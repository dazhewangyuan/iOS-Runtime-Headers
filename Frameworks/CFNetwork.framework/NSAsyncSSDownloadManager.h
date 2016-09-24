/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {
    NSMutableDictionary * _downloads;
    SSDownloadManager * _manager;
    NSOperationQueue * _queue;
    BOOL  _reconnectInProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_attemptReconnect;
- (void)addDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)addDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (void)cancelDownload:(int)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)downloadHandlerDisconnected:(BOOL)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)finishDownload:(int)arg1;
- (id)initWithDownloadManager:(id)arg1;
- (void)setDelegate:(id)arg1 forDownload:(int)arg2;
- (void)withDownload:(int)arg1 perform:(id /* block */)arg2;
- (void)withDownload:(int)arg1 performAsync:(id /* block */)arg2;
- (void)withDownloadMatchingIdentifier:(id)arg1 perform:(id /* block */)arg2;

@end
