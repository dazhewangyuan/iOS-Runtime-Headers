/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSoundContext : NSObject {
    struct ALCcontext_struct { } * _context;
    struct ALCdevice_struct { } * _device;
    BOOL  _suspended;
}

@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint { double x1; double x2; } listenerPosition;
@property (nonatomic) BOOL suspended;

+ (id)context;
+ (id)currentContext;

- (void)dealloc;
- (double)gain;
- (id)init;
- (struct CGPoint { double x1; double x2; })listenerPosition;
- (void)makeCurrentContext;
- (void)setGain:(double)arg1;
- (void)setListenerPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSuspended:(BOOL)arg1;
- (BOOL)suspended;

@end
