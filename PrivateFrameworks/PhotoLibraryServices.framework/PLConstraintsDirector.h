/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLConstraintsDirector : NSObject <PLForegroundObserver> {
    NSObject<OS_dispatch_source> * _bonusTimer;
    BOOL  _didTransitionToOpportunisticDisallowed;
    BOOL  _photosAppInForeground;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_photoanalysisdIsRunning;
+ (id)sharedConstraintsDirector;

- (void)_addBonusTime;
- (void)_disableAutoFGAndUserFGConstraints;
- (void)dealloc;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 context:(id)arg3;
- (void)informOpportunisticTasksAllowed:(BOOL)arg1;
- (id)init;

@end
