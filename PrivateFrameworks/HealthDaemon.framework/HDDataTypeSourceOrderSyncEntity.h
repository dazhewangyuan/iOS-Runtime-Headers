/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataTypeSourceOrderSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)decodeSyncObjectWithData:(id)arg1;
+ (BOOL)generateSyncObjectsForStore:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { int x1; int x2; })arg3 maxEncodedBytesPerMessage:(int)arg4 profile:(id)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
+ (int)nanoSyncObjectType;
+ (int)nextSyncAnchorWithStore:(id)arg1 predicate:(id)arg2 startSyncAnchor:(int)arg3 profile:(id)arg4 error:(id*)arg5;
+ (int)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (unsigned int)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependencies;
+ (int)syncEntityType;

@end
