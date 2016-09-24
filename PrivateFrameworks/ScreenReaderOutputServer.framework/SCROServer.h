/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROServer : NSObject {
    long  _clientCount;
    NSLock * _contentLock;
    unsigned int  _deathPort;
    struct __CFRunLoopSource { } * _deathSource;
    struct __CFRunLoopTimer { } * _deathTimer;
    <SCROServerDelegate> * _delegate;
    BOOL  _isRegisteredWithMach;
    unsigned int  _serverPort;
    struct __CFRunLoopSource { } * _serverSource;
}

+ (id)sharedServer;

- (long)_clientCount;
- (struct __CFRunLoopTimer { }*)_deathTimer;
- (long)_incrementClientCount;
- (int)_registerForNotificationOnDeathPort:(unsigned int)arg1;
- (void)_setClientCount:(long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isRegisteredWithMach;
- (BOOL)registerWithMach;
- (struct __CFRunLoopSource { }*)serverSource;
- (void)setDelegate:(id)arg1;
- (void)unregisterWithMach;

@end
