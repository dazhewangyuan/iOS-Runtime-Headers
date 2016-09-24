/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCFileStorage : NSObject {
    WCContentIndex * _fileIndex;
    NSObject<OS_dispatch_queue> * _fileQueue;
    WCContentIndex * _fileResultsIndex;
    NSArray * _outstandingFileTransfers;
    NSString * _pairingID;
    WCContentIndex * _userInfoIndex;
    WCContentIndex * _userInfoResultsIndex;
}

@property (retain) WCContentIndex *fileIndex;
@property (retain) NSObject<OS_dispatch_queue> *fileQueue;
@property (retain) WCContentIndex *fileResultsIndex;
@property (retain) NSArray *outstandingFileTransfers;
@property (nonatomic, copy) NSString *pairingID;
@property (retain) WCContentIndex *userInfoIndex;
@property (retain) WCContentIndex *userInfoResultsIndex;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appContextFolderURL:(BOOL)arg1;
- (id)appendPathForFileTransfer:(id)arg1 toPath:(id)arg2;
- (void)cleanUpOldPairingIDFolderInFolder:(id)arg1 pairedDevicesPairingIDs:(id)arg2;
- (void)cleanUpOldPairingIDFoldersWithPairedDevicesPairingIDs:(id)arg1;
- (void)cleanUpWatchContentDirectoryWithCurrentAppInstallationID:(id)arg1;
- (void)cleanupSessionFileFromInbox:(id)arg1;
- (void)createWatchDirectoryIfNeeded:(id)arg1;
- (void)deleteAppContextDataFromInbox;
- (void)deleteAppContextReceived:(BOOL)arg1;
- (void)deleteFileFolderForSessionFileFromInbox:(id)arg1;
- (void)deleteOutstandingFileTransfer:(id)arg1;
- (void)deleteOutstandingUserInfoTransfer:(id)arg1;
- (void)deleteRelatedMetadataForSessionFileFromInbox:(id)arg1;
- (void)deleteUserInfoTransferFromInbox:(id)arg1;
- (void)enumerateFileTransferResultsWithBlock:(id /* block */)arg1;
- (void)enumerateIncomingFilesWithBlock:(id /* block */)arg1;
- (void)enumerateIncomingUserInfosWithBlock:(id /* block */)arg1;
- (void)enumerateUserInfoResultsWithBlock:(id /* block */)arg1;
- (id)fileIndex;
- (id)fileQueue;
- (id)fileResultsIndex;
- (id)homeDirectoryURL;
- (id)init;
- (id)loadAppContextDataFromInbox;
- (id)loadAppContextReceived:(BOOL)arg1;
- (id)loadOutstandingFileTransfers;
- (id)loadOutstandingUserInfoTransfersAndComplicationUserInfo:(id*)arg1;
- (id)localAppContextFolderURL;
- (void)onqueue_persistFileTransfer:(id)arg1;
- (id)outgoingFileTransferPath;
- (id)outstandingFileTransfers;
- (id)pairingID;
- (void)persistAppContextData:(id)arg1 received:(BOOL)arg2;
- (void)persistOutgoingFileTransfer:(id)arg1;
- (id)persistOutgoingUserInfoTransfer:(id)arg1;
- (id)receivedAppContextFolderURL;
- (void)resetIndexes;
- (void)setFileIndex:(id)arg1;
- (void)setFileQueue:(id)arg1;
- (void)setFileResultsIndex:(id)arg1;
- (void)setOutstandingFileTransfers:(id)arg1;
- (void)setPairingID:(id)arg1;
- (void)setUserInfoIndex:(id)arg1;
- (void)setUserInfoResultsIndex:(id)arg1;
- (id)userInfoIndex;
- (id)userInfoResultsIndex;

@end
