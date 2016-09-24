/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementEntity : HDHealthEntity <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_achievementsByRemovingDuplicatesWithSyncedAchievements:(id)arg1 achievementsToDelete:(id*)arg2 profile:(id)arg3;
+ (id)_insertAchievement:(id)arg1 provenance:(int)arg2 database:(id)arg3 error:(id*)arg4;
+ (BOOL)_insertAchievements:(id)arg1 provenance:(int)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)_predicateForProvenance:(int)arg1;
+ (id)_predicateForSyncAnchor:(id)arg1;
+ (id)_unalertedAchievementsPredicate;
+ (id)_viewedEarnedAchievementsPredicate;
+ (id)achievementsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)allAchievementDefinitionIdentifiersInHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)columnsDefinition;
+ (int)countOfUnalertedAchievementsInHealthDatabase:(id)arg1;
+ (int)countOfViewedEarnedAchievementsInHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)databaseTable;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (BOOL)deleteAchievementWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)deleteAchievements:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)deleteAllAchievementsInHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(int)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (BOOL)generateSyncObjectsForStore:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { int x1; int x2; })arg3 maxEncodedBytesPerMessage:(int)arg4 profile:(id)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
+ (BOOL)insertAchievement:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)insertAchievements:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)markAchievement:(id)arg1 alertedInHealthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)markAchievement:(id)arg1 viewedInHealthDatabase:(id)arg2 error:(id*)arg3;
+ (int)nanoSyncObjectType;
+ (int)nextSyncAnchorWithStore:(id)arg1 predicate:(id)arg2 startSyncAnchor:(int)arg3 profile:(id)arg4 error:(id*)arg5;
+ (int)numberOfUnviewedAchievementsInHealthDatabase:(id)arg1;
+ (id)predicateForAchievementsWithDefinitionIdentifiers:(id)arg1;
+ (id)propertyForSyncProvenance;
+ (int)protectionClass;
+ (int)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (unsigned int)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (id)syncEntityDependencies;
+ (int)syncEntityType;
+ (id)unalertedAchievementsInProfile:(id)arg1;

@end
