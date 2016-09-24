/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoScene : NTKAnalogScene {
    SKEffectNode * _chronoMode;
    NSMutableDictionary * _chronoVariantNodes;
    SKNode * _currentMode;
    NSMutableArray * _informationTransitions;
    NTKChronoLowerSubDial * _lowerSubdial;
    NTKChronoPalette * _palette;
    BOOL  _rasterizeForEditing;
    SKNode * _subdials;
    SKEffectNode * _timeMode;
    unsigned int  _timeScale;
    SKLabelNode * _timeScaleLabel;
    NTKVariantNode * _timeVariantNode;
    NTKChronoUpperSubDial * _upperSubdial;
}

@property (nonatomic, readonly) SKEffectNode *chronoMode;
@property (nonatomic, retain) NTKChronoLowerSubDial *lowerSubdial;
@property (nonatomic, readonly) NTKChronoPalette *palette;
@property (nonatomic) BOOL rasterizeForEditing;
@property (nonatomic, readonly) SKEffectNode *timeMode;
@property (nonatomic, readonly) unsigned int timeScale;
@property (nonatomic, retain) NTKChronoUpperSubDial *upperSubdial;

- (void).cxx_destruct;
- (id)_addChronoVariantWithElements:(id)arg1 forTimeScale:(unsigned int)arg2;
- (void)_applyPalette:(id)arg1 toVariantNode:(id)arg2;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4;
- (float)_backgroundAlphaForEditMode:(int)arg1;
- (id)_chronoVariantForTimeScale:(unsigned int)arg1;
- (void)_cleanupAfterEditing;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (id)_createDensityVariantWitElements:(id)arg1 parent:(id)arg2 hidden:(BOOL)arg3;
- (BOOL)_getTicks:(id*)arg1 labels:(id*)arg2 otherNodes:(id*)arg3 fromParentNode:(id)arg4;
- (id)_localizedStringForTimeScaleSeconds:(unsigned int)arg1;
- (id)_nameFromTimeScale:(unsigned int)arg1;
- (void)_prepareForEditing;
- (BOOL)_showTimeForEditMode:(int)arg1;
- (float)_subdialAlphaForEditMode:(int)arg1;
- (id)activeVariantNodes;
- (void)applyPalette:(id)arg1 fully:(BOOL)arg2;
- (void)applyTimeScale:(unsigned int)arg1;
- (void)applyTransitionFraction:(float)arg1 fromTimeScale:(unsigned int)arg2 toTimeScale:(unsigned int)arg3;
- (id)auxiliaryScrubbingObscuredNodes;
- (id)chronoMode;
- (void)ensureTimeScaleTransitionHasCompleted;
- (void)fadeInLowerSubdialAnimated:(BOOL)arg1;
- (void)fadeOutLowerSubdialAnimated:(BOOL)arg1;
- (void)fadeTimeScaleLabelWithMode:(id)arg1;
- (void)hideMode:(id)arg1 animate:(BOOL)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)isTimeMode;
- (id)lowerSubdial;
- (id)palette;
- (BOOL)rasterizeForEditing;
- (id)scrubbingObscuredCollectionNodes;
- (void)setCurrentMode:(id)arg1 animate:(BOOL)arg2;
- (void)setLowerSubdial:(id)arg1;
- (void)setRasterizeForEditing:(BOOL)arg1;
- (void)setRegularDeviceLowerDialLabelPositions;
- (void)setRegularDeviceUpperDialLabelPositions:(id)arg1;
- (void)setUpperSubdial:(id)arg1;
- (void)showChronoModeAnimated:(BOOL)arg1;
- (void)showMode:(id)arg1 animate:(BOOL)arg2;
- (void)showTimeModeAnimated:(BOOL)arg1;
- (id)timeMode;
- (unsigned int)timeScale;
- (float)timeScaleLabelPosition;
- (float)timeScaleLabelPositionFromTimeScale:(unsigned int)arg1;
- (id)timeScaleName;
- (void)transitionTimeScaleLabelWithFraction:(float)arg1 fromTimeScale:(unsigned int)arg2 toTimeScale:(unsigned int)arg3;
- (void)transitionWith:(float)arg1 fromMode30:(id)arg2 toMode6:(id)arg3;
- (void)transitionWith:(float)arg1 fromMode60:(id)arg2 toMode30:(id)arg3;
- (void)transitionWith:(float)arg1 fromMode6:(id)arg2 toMode3:(id)arg3;
- (void)updateTimeScaleLabel;
- (void)updateTimeScaleLabelWithTimeScale:(unsigned int)arg1;
- (void)updateUpperDial;
- (id)upperSubdial;

@end
