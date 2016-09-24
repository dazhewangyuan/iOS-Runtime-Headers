/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOnceTimebaseObserver : AVTimebaseObserver {
    id /* block */  _block;
    BOOL  _didFire;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _fireTime;
}

@property (nonatomic, readonly) BOOL didFire;

- (void)_effectiveRateChanged;
- (void)_fireBlock;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)dealloc;
- (BOOL)didFire;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 fireTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;

@end
