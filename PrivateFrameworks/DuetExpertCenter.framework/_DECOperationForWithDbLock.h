/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECOperationForWithDbLock : NSOperation {
    BOOL  _completed;
    NSObject<OS_dispatch_group> * _group;
    BOOL  _started;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)complete;
- (id)init;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (void)waitForStart;

@end
