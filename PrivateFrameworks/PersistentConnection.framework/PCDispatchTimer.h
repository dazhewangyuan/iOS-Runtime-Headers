/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCDispatchTimer : NSObject {
    NSDate * _fireDate;
    unsigned int  _fireTime;
    BOOL  _isValid;
    NSObject<OS_dispatch_queue> * _queue;
    SEL  _selector;
    CUTWeakReference * _target;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic, retain) NSDate *fireDate;
@property (nonatomic, readonly) BOOL isValid;

- (void)_callTarget;
- (void)_cleanupTimer;
- (void)dealloc;
- (id)fireDate;
- (id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned int)arg4;
- (void)invalidate;
- (BOOL)isValid;
- (void)setFireDate:(id)arg1;
- (void)start;

@end
