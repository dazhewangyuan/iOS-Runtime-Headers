/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDeadlineSource : NSObject {
    int  _deadline;
    NSObject<OS_dispatch_source> * _latch;
    BRCDeadlineScheduler * _scheduler;
    int  _suspendCount;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithScheduler:(id)arg1;
- (void)resume;
- (void)setBottomQueue:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)signal;
- (void)signalWithDeadline:(int)arg1;
- (void)suspend;

@end
