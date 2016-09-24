/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineHeuristics : NSObject {
    PFUbiquityKnowledgeVector * _currentBaselineKV;
    PFUbiquityKnowledgeVector * _currentKV;
    NSString * _localPeerID;
    int  _logSize;
    long double _logToStoreSizeRatio;
    int  _minLogBytes;
    NSString * _modelVersionHash;
    int  _numRequiredTransactions;
    NSString * _storeName;
    int  _storeSize;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (nonatomic, retain) PFUbiquityKnowledgeVector *currentBaselineKV;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *currentKV;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) int logSize;
@property (nonatomic) long double logToStoreSizeRatio;
@property (nonatomic) int minLogBytes;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic) int numRequiredTransactions;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) int storeSize;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;

- (int)bytesForFileAtPath:(id)arg1;
- (BOOL)canRollBaseline:(id*)arg1;
- (id)copy;
- (id)currentBaselineKV;
- (id)currentKV;
- (void)dealloc;
- (id)description;
- (BOOL)haveEnoughTransactionsToRoll;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)localPeerID;
- (int)logSize;
- (long double)logToStoreSizeRatio;
- (BOOL)logsConsumeEnoughDiskSpace;
- (int)minLogBytes;
- (id)modelVersionHash;
- (int)numRequiredTransactions;
- (void)setCurrentBaselineKV:(id)arg1;
- (void)setCurrentKV:(id)arg1;
- (void)setLogSize:(int)arg1;
- (void)setLogToStoreSizeRatio:(long double)arg1;
- (void)setMinLogBytes:(int)arg1;
- (void)setNumRequiredTransactions:(int)arg1;
- (void)setStoreSize:(int)arg1;
- (id)storeName;
- (int)storeSize;
- (id)ubiquityRootLocation;
- (void)updateHeuristics;

@end
