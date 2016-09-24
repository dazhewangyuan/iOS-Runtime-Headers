/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCModifyPersonalizationOperation : FCOperation {
    NSArray * _changeGroups;
    FCCKDatabase * _database;
    CKRecord * _remoteRecord;
    NSError * _resultError;
    id /* block */  _saveCompletionHandler;
    NTPBPersonalizationProfile * _savedProfile;
    CKRecord * _savedRecord;
    FCPersonalizationTreatment * _treatment;
}

@property (nonatomic, retain) NSArray *changeGroups;
@property (nonatomic, retain) FCCKDatabase *database;
@property (nonatomic, retain) CKRecord *remoteRecord;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, copy) id /* block */ saveCompletionHandler;
@property (nonatomic, retain) NTPBPersonalizationProfile *savedProfile;
@property (nonatomic, retain) CKRecord *savedRecord;
@property (nonatomic, retain) FCPersonalizationTreatment *treatment;

+ (void)applyChangeGroups:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(BOOL)arg4;
+ (void)applyDeltas:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(BOOL)arg4;
+ (id)personalizationProfileFromRecord:(id)arg1;
+ (void)pruneAggregates:(id)arg1;

- (void).cxx_destruct;
- (BOOL)canRetryWithError:(id)arg1 retryAfter:(double*)arg2;
- (id)changeGroups;
- (id)database;
- (unsigned int)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)remoteRecord;
- (void)resetForRetry;
- (id)resultError;
- (id /* block */)saveCompletionHandler;
- (id)savedProfile;
- (id)savedRecord;
- (void)setChangeGroups:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setRemoteRecord:(id)arg1;
- (void)setResultError:(id)arg1;
- (void)setSaveCompletionHandler:(id /* block */)arg1;
- (void)setSavedProfile:(id)arg1;
- (void)setSavedRecord:(id)arg1;
- (void)setTreatment:(id)arg1;
- (id)treatment;
- (BOOL)validateOperation;

@end
