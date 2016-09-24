/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPingTest : NSObject {
    NSString * _address;
    id  _collector;
    BOOL  _isRunning;
    double  _secondsToRun;
    NSObject<OS_dispatch_source> * _sendTimer;
    NSObject<OS_dispatch_source> * _socketReadSource;
    BOOL  _usesWifi;
}

@property (nonatomic, readonly) double secondsToRun;

- (void)_doPingWithSocket:(int)arg1 address:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; })arg2 timeToRunTestInSeconds:(double)arg3 pingTimeout:(double)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (int)_setupAndPerformPing:(double)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setupReadSource:(int)arg1 address:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; })arg2 icmID:(unsigned short)arg3 queue:(id)arg4 completionHander:(id /* block */)arg5;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 wifi:(BOOL)arg2;
- (double)longTimeInterval;
- (id)pingStats;
- (id)pingStats:(double)arg1;
- (double)secondsToRun;
- (void)startWithTimeout:(double)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stop;
- (BOOL)writeResultsToFile:(id)arg1 error:(id*)arg2;

@end
