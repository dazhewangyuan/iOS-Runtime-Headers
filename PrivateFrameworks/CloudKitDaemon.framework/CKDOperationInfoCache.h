/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperationInfoCache : CKSQLite {
    NSObject<OS_dispatch_queue> * _cacheDelegateQueue;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSMapTable * _delegatesByOperationID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheDelegateQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, retain) NSMapTable *delegatesByOperationID;

+ (id)dbFileName;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_lockedResultForOperationWithID:(id)arg1;
- (void)_locked_enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_locked_operationInfoForID:(id)arg1;
- (id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1;
- (id)cacheDelegateQueue;
- (id)cacheQueue;
- (id)delegatesByOperationID;
- (void)deleteAllInfoForOperationWithID:(id)arg1;
- (void)enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(BOOL)arg2;
- (id)init;
- (id)operationInfoMetadataForOperationWithID:(id)arg1;
- (id)outstandingOperationInfosForIDs:(id)arg1;
- (void)registerAttemptForOperationWithID:(id)arg1;
- (void)registerCacheEvictionActivity;
- (void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2;
- (id)resultForOperationWithID:(id)arg1;
- (id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)arg1;
- (void)setCacheDelegateQueue:(id)arg1;
- (void)setCacheQueue:(id)arg1;
- (void)setDelegatesByOperationID:(id)arg1;
- (void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3;
- (void)setOperationResult:(id)arg1 forOperationID:(id)arg2;
- (void)setProgressCallbackArguments:(id)arg1 forOperationID:(id)arg2;
- (void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2;

@end
