/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate> {
    BOOL  _autoFinishDownloads;
    SSDownloadManager * _downloadManager;
    struct __CFSet { } * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *downloadKinds;
@property (readonly) SSDownloadManager *downloadManager;
@property (nonatomic, readonly) NSArray *downloads;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *placeholderDownloads;
@property (nonatomic, readonly) NSArray *preorders;
@property (nonatomic) BOOL shouldAutomaticallyFinishDownloads;
@property (readonly) Class superclass;
@property (getter=isUsingNetwork, readonly) BOOL usingNetwork;

+ (id)mediaDownloadKinds;
+ (id)softwareApplicationDownloadKinds;

- (void)_handleDownloadsDidChange:(id)arg1;
- (void)_handleDownloadsRemoved:(id)arg1;
- (id)_initWithDownloadManagerOptions:(id)arg1;
- (void)_messageObserversWithFunction:(int (*)arg1 context:(void*)arg2;
- (void)_sendDownloadStatusChangedAtIndex:(int)arg1;
- (void)_sendQueueChangedWithRemovals:(id)arg1;
- (void)_sendQueueNetworkUsageChanged;
- (void)_sendQueuePreOrdersChanged;
- (BOOL)addDownload:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addPlaceholderDownloads:(id)arg1;
- (BOOL)canCancelDownload:(id)arg1;
- (BOOL)cancelDownload:(id)arg1;
- (void)dealloc;
- (id)downloadForItemIdentifier:(unsigned int)arg1;
- (id)downloadKinds;
- (id)downloadManager;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (id)downloads;
- (void)getDownloadsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDownloadKinds:(id)arg1;
- (id)initWithDownloadManagerOptions:(id)arg1;
- (BOOL)isUsingNetwork;
- (id)placeholderDownloads;
- (id)preorders;
- (BOOL)reloadFromServer;
- (void)removeObserver:(id)arg1;
- (void)removePlaceholderDownload:(id)arg1;
- (void)setShouldAutomaticallyFinishDownloads:(BOOL)arg1;
- (BOOL)shouldAutomaticallyFinishDownloads;
- (BOOL)startPreOrderDownload:(id)arg1;

@end
