/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAirPlaySettings : PUSettings {
    BOOL  _compensateForOverscan;
    BOOL  _ignoreMirroredScreens;
    double  _maximumZoomForScrollPadding;
    double  _minimumZoomForScrollPadding;
    unsigned int  _placeholderForMirroredScreen;
    unsigned int  _placeholderForSecondScreen;
    double  _simulatedScreenContentHeight;
    double  _simulatedScreenContentWidth;
}

@property (nonatomic) BOOL compensateForOverscan;
@property (nonatomic) BOOL ignoreMirroredScreens;
@property (nonatomic) double maximumZoomForScrollPadding;
@property (nonatomic) double minimumZoomForScrollPadding;
@property (nonatomic) unsigned int placeholderForMirroredScreen;
@property (nonatomic) unsigned int placeholderForSecondScreen;
@property (nonatomic) double simulatedScreenContentHeight;
@property (nonatomic) double simulatedScreenContentWidth;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (BOOL)compensateForOverscan;
- (id)debugDescription;
- (BOOL)ignoreMirroredScreens;
- (float)maximumZoomForScrollPadding;
- (float)minimumZoomForScrollPadding;
- (unsigned int)placeholderForMirroredScreen;
- (unsigned int)placeholderForSecondScreen;
- (void)setCompensateForOverscan:(BOOL)arg1;
- (void)setDefaultValues;
- (void)setIgnoreMirroredScreens:(BOOL)arg1;
- (void)setMaximumZoomForScrollPadding:(float)arg1;
- (void)setMinimumZoomForScrollPadding:(float)arg1;
- (void)setPlaceholderForMirroredScreen:(unsigned int)arg1;
- (void)setPlaceholderForSecondScreen:(unsigned int)arg1;
- (void)setSimulatedScreenContentHeight:(float)arg1;
- (void)setSimulatedScreenContentWidth:(float)arg1;
- (float)simulatedScreenContentHeight;
- (float)simulatedScreenContentWidth;

@end
