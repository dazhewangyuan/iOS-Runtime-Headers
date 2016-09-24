/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSUserFilteredClock : TSKernelClock

@property (getter=isAdaptive, nonatomic, readonly) BOOL adaptive;
@property (nonatomic, readonly) unsigned char filterShift;
@property (nonatomic, readonly) unsigned int nominalDomainInterval;
@property (nonatomic, readonly) unsigned int nominalMachInterval;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned int)arg1;

- (BOOL)addTimestampWithMachAbsolute:(unsigned int)arg1 andDomainTime:(unsigned int)arg2 error:(id*)arg3;
- (unsigned char)filterShift;
- (BOOL)isAdaptive;
- (unsigned int)nominalDomainInterval;
- (unsigned int)nominalMachInterval;
- (BOOL)resetFilterToNominal:(BOOL)arg1 error:(id*)arg2;
- (BOOL)resetSyncServiceWithError:(id*)arg1;

@end
