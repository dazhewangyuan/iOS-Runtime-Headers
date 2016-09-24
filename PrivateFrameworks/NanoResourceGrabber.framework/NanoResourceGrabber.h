/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
 */

@interface NanoResourceGrabber : NSObject {
    BOOL  _connectionMayBeValid;
    NSObject<OS_dispatch_queue> * _iconCacheQueue;
    NSXPCConnection * _nrgdConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property BOOL connectionMayBeValid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *iconCacheQueue;
@property (nonatomic, retain) NSXPCConnection *nrgdConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_iconVariant:(int)arg1 fromURL:(id)arg2;
+ (id)firstPartyBundleIDs;
+ (id)iconDataForBundleID:(id)arg1 variant:(int)arg2 proxy:(id)arg3;
+ (BOOL)isFirstParty:(id)arg1;
+ (id)liIconVariants;
+ (id)nrgIconVariants;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2;
- (void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3;
- (void)_getLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)_setCachedIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3;
- (id)connectToService;
- (BOOL)connectionMayBeValid;
- (void)dealloc;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 queue:(id)arg4 updateBlock:(id /* block */)arg5 timeout:(double)arg6;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(id /* block */)arg4;
- (void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(id /* block */)arg4 timeout:(double)arg5;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 timeout:(double)arg4;
- (void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(id /* block */)arg4 timeout:(double)arg5;
- (void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 timeout:(double)arg4;
- (void)getRemoteIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(id /* block */)arg4 timeout:(double)arg5;
- (void)getRemoteIconForBundleIDBypassingCache:(id)arg1 iconVariant:(int)arg2 block:(id /* block */)arg3 timeout:(double)arg4;
- (id)grabIconForBundleID:(id)arg1 iconVariant:(int)arg2 updateBlock:(id /* block */)arg3;
- (id)iconCacheQueue;
- (id)init;
- (id)nrgdConnection;
- (id)queue;
- (void)setConnectionMayBeValid:(BOOL)arg1;
- (void)setIconCacheQueue:(id)arg1;
- (void)setNrgdConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
