/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPUtils : NSObject

+ (id)SPURLQueryAllowedCharacterSet;
+ (id)UIColorFromString:(id)arg1;
+ (BOOL)appExtensionFirstUnlock;
+ (id)companionConnectionClientIdentifier:(BOOL)arg1;
+ (id)deserializeObject:(id)arg1;
+ (void)dispatchAsyncToMainThread:(id /* block */)arg1;
+ (void)dispatchSyncToMainThread:(id /* block */)arg1;
+ (unsigned int)folderSizeAtPath:(id)arg1 volumeBlockSize:(unsigned int)arg2;
+ (BOOL)isApplicationCompanionConnectionClientIdentifier:(id)arg1;
+ (BOOL)isRTL;
+ (BOOL)isRunningInAnyDemoMode;
+ (BOOL)isRunningInF201DemoMode;
+ (BOOL)isRunningInF5DemoMode;
+ (id)localizedStringForSystemLanguage:(id)arg1 fromBundlePath:(id)arg2;
+ (id)machTime;
+ (id)serializeObject:(id)arg1;
+ (BOOL)subclassForObject:(id)arg1 overridesSelector:(SEL)arg2 fromSuperclass:(Class)arg3;
+ (id)uniqueNumber;
+ (unsigned int)userVolumeBlockSize;

@end
