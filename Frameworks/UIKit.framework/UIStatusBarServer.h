/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarServer : NSObject {
    struct __CFRunLoopSource { } * _source;
    <UIStatusBarServerClient> * _statusBar;
}

@property (nonatomic, retain) <UIStatusBarServerClient> *statusBar;

+ (unsigned int)_publisherPort;
+ (unsigned int)_serverPort;
+ (void)addStatusBarItem:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;
+ (id)getDoubleHeightStatusStringForStyle:(int)arg1;
+ (double)getGlowAnimationEndTimeForStyle:(int)arg1;
+ (BOOL)getGlowAnimationStateForStyle:(int)arg1;
+ (const struct { BOOL x1[34]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; }*)getStatusBarData;
+ (struct { BOOL x1[34]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { BOOL x_27_1_1[34]; BOOL x_27_1_2[64]; int x_27_1_3; int x_27_1_4; BOOL x_27_1_5[100]; BOOL x_27_1_6[100]; BOOL x_27_1_7[2][100]; BOOL x_27_1_8[1024]; unsigned int x_27_1_9; int x_27_1_10; int x_27_1_11; unsigned int x_27_1_12; int x_27_1_13; unsigned int x_27_1_14; BOOL x_27_1_15[150]; int x_27_1_16; int x_27_1_17; unsigned int x_27_1_18 : 1; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; BOOL x_27_1_21[256]; unsigned int x_27_1_22 : 1; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27; unsigned int x_27_1_28 : 1; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; BOOL x_27_1_31[256]; BOOL x_27_1_32[256]; BOOL x_27_1_33[100]; BOOL x_27_1_34[100]; unsigned int x_27_1_35 : 1; unsigned int x_27_1_36 : 1; } x27; }*)getStatusBarOverrideData;
+ (int)getStyleOverrides;
+ (void)permanentizeStatusBarOverrideData;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(int)arg2;
+ (void)postGlowAnimationState:(BOOL)arg1 forStyle:(int)arg2;
+ (void)postStatusBarData:(const struct { BOOL x1[34]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; }*)arg1 withActions:(int)arg2;
+ (void)postStatusBarOverrideData:(struct { BOOL x1[34]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { BOOL x_27_1_1[34]; BOOL x_27_1_2[64]; int x_27_1_3; int x_27_1_4; BOOL x_27_1_5[100]; BOOL x_27_1_6[100]; BOOL x_27_1_7[2][100]; BOOL x_27_1_8[1024]; unsigned int x_27_1_9; int x_27_1_10; int x_27_1_11; unsigned int x_27_1_12; int x_27_1_13; unsigned int x_27_1_14; BOOL x_27_1_15[150]; int x_27_1_16; int x_27_1_17; unsigned int x_27_1_18 : 1; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; BOOL x_27_1_21[256]; unsigned int x_27_1_22 : 1; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27; unsigned int x_27_1_28 : 1; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; BOOL x_27_1_31[256]; BOOL x_27_1_32[256]; BOOL x_27_1_33[100]; BOOL x_27_1_34[100]; unsigned int x_27_1_35 : 1; unsigned int x_27_1_36 : 1; } x27; }*)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)removeStyleOverrides:(int)arg1;
+ (void)runServer;

- (void).cxx_destruct;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(int)arg2;
- (void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(int)arg2;
- (void)_receivedStatusBarData:(struct { BOOL x1[34]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; }*)arg1 actions:(int)arg2;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)dealloc;
- (id)initWithStatusBar:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)statusBar;

@end
