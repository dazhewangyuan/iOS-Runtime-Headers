/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchModel : SPSearchAgent <SPDaemonQueryDelegate> {
    NSObject<OS_dispatch_semaphore> * _cacheResultLock;
    _DECCachedConsumer * _cachedConsumer;
    CPLRUDictionary * _cachedResultImages;
    NSArray * _deferredResults;
    BOOL  _isDeferredQUeryComplete;
    NSOperationQueue * _loadOperationQueue;
    NSOperationQueue * _prefetchOperationQueue;
    BOOL  _springBoardIsActive;
    NSOperation * _waitOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL springBoardIsActive;
@property (readonly) Class superclass;

+ (void)activate;
+ (void)deactivate;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)arg1;
+ (id)sharedFullZWKInstance;
+ (id)sharedGeneralInstance;
+ (id)sharedInstance;
+ (id)sharedPartialZKWInstance;

- (void).cxx_destruct;
- (id)_customImageForPath:(id)arg1;
- (void)activate;
- (void)cachedZKWAvailable:(BOOL)arg1;
- (int)contentFilters;
- (id)createZKWSearchQuery;
- (void)deactivate;
- (void)dealloc;
- (void)finishRanking:(id)arg1 blendingDuration:(double)arg2;
- (void)handleOptionsForNewSections:(id)arg1;
- (id)initForZKWLevel:(int)arg1;
- (void)invalidateCurrentQuery;
- (BOOL)isWideScreen;
- (BOOL)itemInLibrary:(id)arg1;
- (void)setSpringBoardIsActive:(BOOL)arg1;
- (BOOL)springBoardIsActive;
- (void)transferZKWResults:(id)arg1 wasSimilar:(BOOL)arg2;

@end
