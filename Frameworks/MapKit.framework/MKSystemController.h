/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSystemController : NSObject {
    <MKSystemControllerOpenURLDelegate> * _openURLDelegate;
}

@property (nonatomic) <MKSystemControllerOpenURLDelegate> *openURLDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_defaultOpenURLOptions;
- (BOOL)_openURLsOnBackgroundThread;
- (BOOL)_shouldUseLaunchServices;
- (BOOL)isDevicePluggedIn;
- (BOOL)isHiDPI;
- (BOOL)isInternalInstall;
- (BOOL)isPhone6PlusOrLarger;
- (BOOL)isWifiEnabled;
- (BOOL)openURL:(id)arg1;
- (void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)openURLDelegate;
- (BOOL)overrideBlurStyle;
- (void)placeDialRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)reduceMotionEnabled;
- (BOOL)requiresRTT;
- (float)screenScale;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setOpenURLDelegate:(id)arg1;
- (BOOL)supports3DImagery;
- (BOOL)supports3DMaps;
- (BOOL)supportsAlwaysOnCompass;
- (BOOL)supportsPitchAPI;
- (int)userInterfaceIdiom;

@end
