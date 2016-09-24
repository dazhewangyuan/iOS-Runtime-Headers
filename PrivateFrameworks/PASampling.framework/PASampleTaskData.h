/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleTaskData : NSObject <PASerializable> {
    NSSet * _donatingUniqueIds;
    PASampleTaskDataPrivateData * _privateData;
    NSMutableDictionary * _sampleThreadsDict;
    PASampleTimeInsensitiveTaskData * _timeInsensitiveTaskData;
}

@property (readonly) BOOL allowsIdleExit;
@property (readonly) NSString *bundleName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSSet *donatingUniqueIds;
@property (readonly) unsigned int hash;
@property (readonly) NSArray *imageInfos;
@property (readonly) BOOL isBoosted;
@property (readonly) BOOL isDarwinBG;
@property (readonly) BOOL isDarwinExtBG;
@property (readonly) BOOL isDirty;
@property (readonly) BOOL isForeground;
@property (readonly) BOOL isFrozen;
@property (readonly) BOOL isImpDonor;
@property (readonly) BOOL isLiveImpDonor;
@property (readonly) BOOL isNonVisible;
@property (readonly) BOOL isPidSuspended;
@property (readonly) BOOL isSuppressed;
@property (readonly) BOOL isTaskResourceFlagged;
@property (readonly) BOOL isTerminatedSnapshot;
@property (readonly) BOOL isThirdParty;
@property (readonly) BOOL isTimerThrottled;
@property (readonly) BOOL isTranslocated;
@property (readonly) BOOL isUnresponsive;
@property (readonly) BOOL isVisible;
@property (readonly) unsigned int latency_qos;
@property (readonly) unsigned int mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) double mostRecentTimeSamplingOnlyMainThread;
@property (copy) NSString *name;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) NSDictionary *sampleThreads;
@property (readonly) unsigned int ss_flags;
@property (readonly) Class superclass;
@property (readonly) int suspendCount;
@property (readonly) int taskSizeInBytes;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned int uid;
@property (readonly) unsigned int uniquePid;
@property (readonly) BOOL usesSuddenTermination;
@property (readonly) BOOL wqAndDirtyAreStatic;
@property (readonly) BOOL wqExceededConstrainedThreadLimit;
@property (readonly) BOOL wqExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)allowsIdleExit;
- (struct _CSArchitecture { int x1; int x2; })architecture;
- (id)architectureString;
- (id)bundleName;
- (id)debugDescription;
- (id)donatingUniqueIds;
- (id)imageInfos;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 andTimeInsensitiveTaskData:(id)arg2;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 andTimeInsensitiveTaskData:(id)arg2;
- (id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2;
- (id)initWithTimeInsensitiveTaskData:(id)arg1;
- (BOOL)isBoosted;
- (BOOL)isDarwinBG;
- (BOOL)isDarwinExtBG;
- (BOOL)isDirty;
- (BOOL)isForeground;
- (BOOL)isFrozen;
- (BOOL)isImpDonor;
- (BOOL)isLiveImpDonor;
- (BOOL)isNonVisible;
- (BOOL)isPidSuspended;
- (BOOL)isSameAsTask:(id)arg1;
- (BOOL)isSuppressed;
- (BOOL)isTaskResourceFlagged;
- (BOOL)isTerminatedSnapshot;
- (BOOL)isThirdParty;
- (BOOL)isTimerThrottled;
- (BOOL)isTranslocated;
- (BOOL)isUnresponsive;
- (BOOL)isVisible;
- (unsigned int)latency_qos;
- (unsigned int)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (double)mostRecentTimeSamplingOnlyMainThread;
- (id)mutableSampleThreads;
- (id)name;
- (int)numberOfCopyOnWritePageFaults;
- (int)numberOfPageFaults;
- (int)numberOfPageIns;
- (int)pid;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (int)ppid;
- (int)rpid;
- (id)sampleThreadForTid:(unsigned int)arg1;
- (id)sampleThreads;
- (void)setDonatingUniqueIds:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSampleThreads:(id)arg1;
- (unsigned long)sizeInBytesForSerializedVersion;
- (unsigned int)ss_flags;
- (int)suspendCount;
- (int)taskSizeInBytes;
- (id)timeInsensitiveTaskData;
- (double)timeOfLastResponse;
- (unsigned int)uid;
- (unsigned int)uniquePid;
- (BOOL)usesSuddenTermination;
- (BOOL)wqAndDirtyAreStatic;
- (BOOL)wqExceededConstrainedThreadLimit;
- (BOOL)wqExceededTotalThreadLimit;

@end
