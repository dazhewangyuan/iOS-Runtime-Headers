/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLWeiboSession : NSObject <SLMicroBlogSheetDelegate, SLWeiboClientSessionProtocol> {
    id /* block */  _connectionResetBlock;
    CLInUseAssertion * _locationInUseAssertion;
    id /* block */  _locationInformationChangedBlock;
    NSCache * _profileImageCache;
    SLRemoteSessionProxy<SLWeiboRemoteSessionProtocol> * _remoteSession;
    NSObject<OS_dispatch_queue> * _remoteSessionQueue;
    NSObject<OS_dispatch_semaphore> * _remoteSessionQueueSemaphore;
    NSBundle * _serviceBundle;
}

@property (nonatomic, copy) id /* block */ connectionResetBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ locationInformationChangedBlock;
@property (readonly) Class superclass;

+ (id)_remoteInterface;

- (void).cxx_destruct;
- (id)_createOrGetRemoteSession;
- (void)acceptLocationUpdate:(id)arg1;
- (void)beginPotentialLocationUse;
- (id)cachedProfileImageDataForScreenName:(id)arg1;
- (int)characterCountForText:(id)arg1 shortenedURLCost:(int)arg2;
- (id /* block */)connectionResetBlock;
- (BOOL)countMediaAttachmentsTowardCharacterCount;
- (void)deferExpensiveOperations;
- (void)endPotentialLocationUse;
- (void)ensureUserRecordStore;
- (void)fetchCurrentImageLimits:(id /* block */)arg1;
- (void)fetchCurrentUrlLimits:(id /* block */)arg1;
- (void)fetchGeotagStatus:(id /* block */)arg1;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSessionInfo:(id /* block */)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(id /* block */)arg1;
- (id)init;
- (id /* block */)locationInformationChangedBlock;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id /* block */)arg2;
- (void)sendStatus:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceAccountTypeIdentifier;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setConnectionResetBlock:(id /* block */)arg1;
- (void)setGeotagAccountSetting:(BOOL)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)setLocationInformationChangedBlock:(id /* block */)arg1;
- (void)showSettingsIfNeeded;
- (void)stopDeferringExpensiveOperations;
- (void)tearDownConnectionToRemoteSession;

@end
