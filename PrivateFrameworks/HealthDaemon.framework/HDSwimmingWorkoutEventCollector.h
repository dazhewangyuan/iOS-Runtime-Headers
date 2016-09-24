/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSwimData * _referenceSwimData;
    CMSwimTracker * _swimTracker;
    NSObject<OS_dispatch_queue> * _workoutEventQueue;
}

+ (BOOL)isAvailableInCurrentHardware;

- (void).cxx_destruct;
- (void)_queue_addLapEventForSwimData:(id)arg1;
- (void)_queue_errorOccurred:(id)arg1;
- (void)_queue_processSwimData:(id)arg1 error:(id)arg2;
- (void)_queue_querySwimDataWithCompletion:(id /* block */)arg1;
- (void)_queue_startCollectionWithSessionId:(id)arg1;
- (void)_queue_stopCollection;
- (void)immediateUpdateWithCompletion:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (BOOL)supportsWorkoutActivityType:(unsigned int)arg1;

@end
