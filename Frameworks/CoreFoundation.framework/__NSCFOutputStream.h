/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFOutputStream : NSOutputStream

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)_isDeallocating;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)arg2 context:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (BOOL)_tryRetain;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)close;
- (id)delegate;
- (BOOL)hasSpaceAvailable;
- (unsigned int)hash;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned int)arg2;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initToMemory;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned int)retainCount;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;

@end
