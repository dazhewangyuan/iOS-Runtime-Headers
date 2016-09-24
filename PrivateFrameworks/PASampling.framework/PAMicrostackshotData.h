/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAMicrostackshotData : NSObject {
    unsigned int  _cpuNumber;
    unsigned char  _microSnapshotFlags;
    unsigned short  _systemStatsFlags;
    unsigned int  _timeInUsUnix;
}

@property (readonly) unsigned int cpuNumber;
@property (readonly) BOOL didInterruptKernelMode;
@property (readonly) BOOL didInterruptUserMode;
@property (readonly) BOOL hasValidOnBatteryAndUserIdleFlags;
@property (readonly) BOOL isInterruptRecord;
@property (readonly) BOOL isOnBattery;
@property (readonly) BOOL isTimerArmingRecord;
@property (readonly) BOOL isUserIdle;
@property (readonly) unsigned char microSnapshotFlags;
@property (readonly) unsigned short systemStatsFlags;
@property (readonly) unsigned int timestampInUsUnix;

- (unsigned long)bytesUsedInBuffer;
- (unsigned int)cpuNumber;
- (BOOL)didInterruptKernelMode;
- (BOOL)didInterruptUserMode;
- (BOOL)hasValidOnBatteryAndUserIdleFlags;
- (id)initWithMicrosnapshot:(const struct micro_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned short x6; }*)arg1 withRemainingBytes:(unsigned long)arg2;
- (BOOL)isInterruptRecord;
- (BOOL)isOnBattery;
- (BOOL)isTimerArmingRecord;
- (BOOL)isUserIdle;
- (unsigned char)microSnapshotFlags;
- (unsigned int)powerstatsFlags;
- (unsigned short)systemStatsFlags;
- (unsigned int)timestampInUsUnix;

@end
