/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementDefinitionLoader : NSObject {
    NSDictionary * _allDefinitionsByIdentifier;
    _HKMobileAssetDownloadManager * _assetDownloadManager;
    int  _externalDefinitionsChangedNotificationCount;
    NSDictionary * _injectedTestDefinitionsByIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _remoteDefinitionsByIdentifier;
    NSDictionary * _resourcesPathURLsByIdentifier;
    NSDictionary * _stickersPathURLsByIdentifier;
}

+ (void)_getDefinitionsAsset:(id*)arg1 resourcesAssets:(id*)arg2 stickersAssets:(id*)arg3 fromCombinedAssets:(id)arg4;
+ (void)_getNewestAsset:(id*)arg1 olderAssets:(id*)arg2 fromAssets:(id)arg3;
+ (id)_loadAchievementDefinitionsFromAsset:(id)arg1;
+ (id)_loadAchievementResourcesPathURLsFromAssets:(id)arg1;
+ (id)_loadAchievementStickersPathURLsFromAssets:(id)arg1;
+ (void)_loadLoadsRemoteDefinitions;
+ (BOOL)_loadsRemoteDefinitions;
+ (id)_resourcesAssetsGroupedByDefinitionIdentifier:(id)arg1;
+ (void)_setLoadsRemoteDefinitions:(BOOL)arg1;
+ (id)_stickersAssetsGroupedByDefinitionIdentifier:(id)arg1;
+ (void)initialize;
+ (id)sharedLoader;

- (void).cxx_destruct;
- (void)_achievementAssetsDidChangeWithAssets:(id)arg1 postDarwinNotification:(BOOL)arg2;
- (id)_achievementDefinitionsByIdentifier;
- (void)_achievementDefinitionsChangedExternally;
- (id)_allAchievementResourcesPredicate;
- (id)_allAchievementStickersPredicate;
- (void)_clearCaches;
- (void)_clearInjectedDefinitionsForTesting;
- (id)_compatibilityVersionPredicate;
- (id)_definitionsPlistPredicate;
- (void)_injectDefinitionsForTesting:(id)arg1;
- (void)_queue_clearCaches;
- (BOOL)_queue_isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (void)_stickerAssetsAvailabilityDidChange;
- (id)achievementDefinitionForIdentifier:(id)arg1;
- (id)allAchievementDefinitionIdentifiers;
- (id)allAchievementDefinitions;
- (id)init;
- (BOOL)isDefinitionWithIdentifierLoaded:(id)arg1;
- (BOOL)isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (id)loadedRemotelyDefinedDefinitionIdentifiers;
- (id)resourcesBundleForIdentifier:(id)arg1;
- (id)serverURLWithError:(id*)arg1;
- (void)setServerURL:(id)arg1;
- (id)stickersBundleForIdentifier:(id)arg1;
- (void)updateAchievementResourcesAssetsWithFilter:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAchievementStickersAssetsWithFilter:(id)arg1 completion:(id /* block */)arg2;
- (void)updateDefinitionsAssetWithCompletion:(id /* block */)arg1;

@end
