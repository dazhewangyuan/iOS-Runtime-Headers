/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASAPlaythrough : NSObject {
    unsigned long  _aggregateID;
    NSString * _aggregateUID;
    ASAAudioDevice * _audioDevice;
    NSArray * _channelMapping;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; double *x5; struct OpaqueAudioConverter {} **x6; struct OpaqueAudioConverter {} **x7; struct AudioBufferList {} **x8; struct AudioBufferList {} **x9; struct AudioBufferList {} **x10; struct AudioBufferList {} *x11; } * _ioContext;
    BOOL  _playing;
    int (* _procID;
}

@property (retain) ASAAudioDevice *audioDevice;
@property BOOL playing;

- (void).cxx_destruct;
- (void)_createIOContext;
- (void)_destroyIOContext;
- (void)_freeIOContext:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; double *x5; struct OpaqueAudioConverter {} **x6; struct OpaqueAudioConverter {} **x7; struct AudioBufferList {} **x8; struct AudioBufferList {} **x9; struct AudioBufferList {} **x10; struct AudioBufferList {} *x11; }*)arg1;
- (id)audioDevice;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 usingChannelMapping:(id)arg2;
- (id)initWithDevices:(id)arg1 usingMasterDevice:(id)arg2 andClockDeviceUID:(id)arg3 withName:(id)arg4 isPrivate:(BOOL)arg5 usingChannelMapping:(id)arg6;
- (BOOL)playing;
- (void)setAudioDevice:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)start;
- (BOOL)stop;

@end
