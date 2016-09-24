/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplay : NSObject {
    BOOL  _allowsVirtualModes;
    void * _impl;
}

@property BOOL allowsVirtualModes;
@property (nonatomic, readonly) NSArray *availableModes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (getter=isCloned, readonly) BOOL cloned;
@property (getter=isCloningSupported, readonly) BOOL cloningSupported;
@property (nonatomic, copy) NSString *colorMode;
@property (readonly) unsigned int connectionSeed;
@property (nonatomic, retain) CADisplayMode *currentMode;
@property (nonatomic, readonly) NSString *deviceName;
@property (readonly) unsigned int displayId;
@property (getter=isExternal, readonly) BOOL external;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) double heartbeatRate;
@property (readonly) double maximumRefreshRate;
@property (readonly) int minimumFrameDuration;
@property (readonly) double minimumRefreshRate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSString *overscanAdjustment;
@property (readonly) double overscanAmount;
@property (readonly) struct CGSize { double x1; double x2; } overscanAmounts;
@property (getter=isOverscanned, readonly) BOOL overscanned;
@property (nonatomic, readonly) CADisplayMode *preferredMode;
@property (readonly) int processId;
@property (readonly) double refreshRate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeBounds;
@property (readonly) unsigned int seed;
@property (getter=isSupported, readonly) BOOL supported;
@property (readonly) BOOL supportsExtendedColors;
@property (readonly) int tag;
@property (readonly) NSString *uniqueId;

+ (id)TVOutDisplay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)displays;
+ (id)mainDisplay;

- (id)_initWithDisplay:(struct Display { int (**x1)(); id x2; struct __CFString {} x3; struct __CFString {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; struct __CFString {} *x8; struct ModeSet { struct vector<CA::WindowServer::Display::Mode, std::__1::allocator<CA::WindowServer::Display::Mode> > { struct Mode {} *x_1_2_1; struct Mode {} *x_1_2_2; struct __compressed_pair<CA::WindowServer::Display::Mode *, std::__1::allocator<CA::WindowServer::Display::Mode> > { struct Mode {} *x_3_3_1; } x_1_2_3; } x_9_1_1; } x9; struct Mode { union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 16; unsigned int x_1_3_3 : 24; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 2; unsigned int x_1_3_6 : 2; } x_1_2_1; unsigned int x_1_2_2; } x_10_1_1; } x10; struct Mode { union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 16; unsigned int x_1_3_3 : 24; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 2; unsigned int x_1_3_6 : 2; } x_1_2_1; unsigned int x_1_2_2; } x_11_1_1; } x11; struct Bounds { int x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; }*)arg1;
- (void)_invalidate;
- (BOOL)allowsVirtualModes;
- (id)availableModes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)colorMode;
- (unsigned int)connectionSeed;
- (id)currentMode;
- (id)description;
- (id)deviceName;
- (unsigned int)displayId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (double)heartbeatRate;
- (BOOL)isCloned;
- (BOOL)isCloningSupported;
- (BOOL)isExternal;
- (BOOL)isOverscanned;
- (BOOL)isSupported;
- (double)maximumRefreshRate;
- (int)minimumFrameDuration;
- (double)minimumRefreshRate;
- (id)name;
- (id)overscanAdjustment;
- (float)overscanAmount;
- (struct CGSize { double x1; double x2; })overscanAmounts;
- (id)preferredMode;
- (int)processId;
- (double)refreshRate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeBounds;
- (unsigned int)seed;
- (void)setAllowsVirtualModes:(BOOL)arg1;
- (void)setColorMode:(id)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setOverscanAdjustment:(id)arg1;
- (BOOL)supportsExtendedColors;
- (int)tag;
- (id)uniqueId;
- (void)update;

@end
