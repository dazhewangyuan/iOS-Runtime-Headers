/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNReplaySubject : CNObservable <CNObserver> {
    CNObservableContractEnforcement * _enforcement;
    NSMutableArray * _observers;
    _CNObservableEventBufferingStrategy * _recentEvents;
    <CNScheduler> * _resourceLock;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, retain) _CNObservableEventBufferingStrategy *recentEvents;
@property (nonatomic, readonly) <CNScheduler> *resourceLock;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addObserver:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (id)enforcement;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1 schedulerProvider:(id)arg2;
- (id)initWithQueue:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithSchedulerProvider:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)observers;
- (void)performWithResourceLock:(id /* block */)arg1;
- (id)recentEvents;
- (id)resourceLock;
- (void)resourceLock_scheduleReplayToObserver:(id)arg1;
- (void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:(id)arg1;
- (id)resultWithResourceLock:(id /* block */)arg1;
- (id)schedulerProvider;
- (void)setRecentEvents:(id)arg1;
- (id)subscribe:(id)arg1;

@end
