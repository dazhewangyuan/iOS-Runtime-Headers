/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMLiftManager : NSObject {
    CMLiftManagerInternal * _internal;
}

@property (nonatomic, readonly) CMLiftManagerInternal *_internal;
@property (nonatomic) <CMLiftManagerDelegate> *delegate;

+ (BOOL)isAvailable;

- (id)_internal;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)registerForLiftNotifications;
- (void)setDelegate:(id)arg1;
- (void)unregisterForLiftNotifications;

@end
