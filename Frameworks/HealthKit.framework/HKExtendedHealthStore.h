/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKExtendedHealthStore : NSObject <HKExtendedClientInterface> {
    id /* block */  _achievementsAddedHandler;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSXPCConnection * _connection;
    _HKExtendedHealthStoreProxy * _connectionProxy;
    id /* block */  _unviewedAchievementDefinitionsChangedHandler;
}

@property (nonatomic, copy) id /* block */ achievementsAddedHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) _HKExtendedHealthStoreProxy *connectionProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unviewedAchievementDefinitionsChangedHandler;

- (void).cxx_destruct;
- (id /* block */)achievementsAddedHandler;
- (void)addAchievement:(id)arg1 completion:(id /* block */)arg2;
- (id)clientInterface;
- (id)clientQueue;
- (void)clientRemote_achievementDefinitionUnviewedCountChanged;
- (void)clientRemote_achievementsWereAdded;
- (id)connection;
- (void)connectionInterrupted;
- (id)connectionProxy;
- (void)daemonDidStart;
- (void)dealloc;
- (void)deleteAchievementWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllAchievementsWithCompletion:(id /* block */)arg1;
- (void)fetchAchievementAssetsServerURLWithCompletion:(id /* block */)arg1;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchAchievementsWithCompletion:(id /* block */)arg1;
- (void)fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(id /* block */)arg1;
- (void)fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)markAchievementAsViewed:(id)arg1 completion:(id /* block */)arg2;
- (void)markAchievementDefinitionIdentifierAlertViewed:(id)arg1 completion:(id /* block */)arg2;
- (void)markAchievementsAlerted:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)runAchievementsFixupAsDryRun:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)serverInterface;
- (void)setAchievementAssetsServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setAchievementsAddedHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionProxy:(id)arg1;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (void)setUnviewedAchievementDefinitionsChangedHandler:(id /* block */)arg1;
- (id /* block */)unviewedAchievementDefinitionsChangedHandler;
- (void)updateAllAchievementAssetsWithCompletion:(id /* block */)arg1;

@end
