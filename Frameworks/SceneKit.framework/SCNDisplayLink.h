/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNDisplayLink : NSObject {
    BOOL  _asynchronous;
    id /* block */  _block;
    CADisplayLink * _caDisplayLink;
    BOOL  _invalidated;
    double  _lastFrameTime;
    id  _owner;
    BOOL  _paused;
    double  _preferredFrameRate;
    NSObject<OS_dispatch_queue> * _queue;
    int  _queuedFrameCount;
    BOOL  _supportTargetTimestamp;
}

@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic) double preferredFrameRate;

- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (BOOL)_isInvalidated;
- (void)_pause;
- (void)_resume;
- (void)_teardown;
- (void)dealloc;
- (id)init;
- (id)initWithOwner:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)invalidate;
- (BOOL)isPaused;
- (float)preferredFrameRate;
- (int)queuedFrameCount;
- (void)setNeedsDisplay;
- (void)setPaused:(BOOL)arg1;
- (BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
- (void)setPreferredFrameRate:(float)arg1;
- (void)willDie;

@end
