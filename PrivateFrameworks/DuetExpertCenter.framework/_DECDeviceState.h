/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECDeviceState : NSObject

+ (void)blockUntilFirstUnlock;
+ (BOOL)isClassCLocked;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isUnlocked;
+ (void)registerBlockForFirstUnlock:(id /* block */)arg1;
+ (void)registerBlockForFirstUnlock:(id /* block */)arg1 executeIfUnlocked:(BOOL)arg2;

@end
