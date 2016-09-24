/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUDashboardServer : NSObject {
    unsigned char  _key;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; int x20; } * _logFile;
    NSString * _logFilePath;
    int  _sockV4;
    NSObject<OS_dispatch_source> * _sockV4Source;
    int  _sockV6;
    NSObject<OS_dispatch_source> * _sockV6Source;
}

@property (nonatomic, retain) NSString *logFilePath;

- (void).cxx_destruct;
- (void)_readHandler:(int)arg1;
- (long)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)logFilePath;
- (void)setLogFilePath:(id)arg1;

@end
