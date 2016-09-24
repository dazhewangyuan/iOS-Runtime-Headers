/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditMutableModel : PLPhotoEditModel {
    _UIDynamicValueAnimation * _currentCopyAnimation;
    int  _transactionDepth;
}

@property (nonatomic) int appliedOrientation;
@property (getter=isAutoCropped, nonatomic) BOOL autoCropped;
@property (nonatomic, copy) NSArray *autoRedEyeCorrections;
@property (nonatomic, copy) NSString *autoSmartColorIdentifier;
@property (nonatomic) double autoSmartColorLevel;
@property (nonatomic, copy) NSString *autoSmartToneIdentifier;
@property (nonatomic) double autoSmartToneLevel;
@property (nonatomic, copy) NSString *autoWhiteBalanceIdentifier;
@property (nonatomic, copy) NSDictionary *autoWhiteBalanceSettings;
@property (nonatomic) double blackPointLevelOffset;
@property (nonatomic) double brightnessLevelOffset;
@property (nonatomic) double bwGrainLevelOffset;
@property (nonatomic) double bwHueLevelOffset;
@property (nonatomic) double bwNeutralGammaLevelOffset;
@property (nonatomic) double bwStrengthLevelOffset;
@property (nonatomic) double bwToneLevelOffset;
@property (nonatomic) double colorCastLevelOffset;
@property (nonatomic) double colorContrastLevelOffset;
@property (nonatomic) double colorVibrancyLevelOffset;
@property (nonatomic) double contrastLevelOffset;
@property (nonatomic, copy) NSString *effectFilterName;
@property (nonatomic) int effectFilterVersion;
@property (nonatomic) double exposureLevelOffset;
@property (nonatomic) double highlightsLevelOffset;
@property (nonatomic, copy) NSArray *legacyAutoEnhanceFilters;
@property (nonatomic) BOOL legacyAutoEnhanceIsOn;
@property (nonatomic) double localLightLevelOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic, copy) NSArray *redEyeCorrections;
@property (nonatomic) double shadowsLevelOffset;
@property (getter=isSmartBWEnabled, nonatomic) BOOL smartBWEnabled;
@property (nonatomic) double smartBWLevel;
@property (nonatomic, copy) NSDictionary *smartBWStatistics;
@property (getter=isSmartColorEnabled, nonatomic) BOOL smartColorEnabled;
@property (nonatomic) double smartColorLevel;
@property (nonatomic, copy) NSDictionary *smartColorStatistics;
@property (getter=isSmartToneEnabled, nonatomic) BOOL smartToneEnabled;
@property (nonatomic) double smartToneLevel;
@property (nonatomic, copy) NSDictionary *smartToneStatistics;
@property (nonatomic) double straightenAngle;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } trimEndTimeOffset;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } trimStartTimeOffset;
@property (getter=isWhiteBalanceEnabled, nonatomic) BOOL whiteBalanceEnabled;
@property (nonatomic) double whiteBalanceFaceI;
@property (nonatomic) double whiteBalanceFaceQ;
@property (nonatomic) double whiteBalanceFaceStrength;
@property (nonatomic) double whiteBalanceFaceWarmth;

- (id)_newModelChangeAnimation;
- (void)_setLevelInstanceVariable:(float*)arg1 toValue:(float)arg2;
- (void)addRedEyeCorrections:(id)arg1;
- (void)copyValuesFromModel:(id)arg1 animated:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)performChangesWithBlock:(id /* block */)arg1;
- (void)pl_setCropConstraintForDataConstraint:(struct CGSize { double x1; double x2; })arg1 imageGeometry:(id)arg2;
- (void)pl_setNormalizedCropRectForDataCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 straightenAngle:(float)arg2 imageGeometry:(id)arg3;
- (void)removeRedEyeCorrections:(id)arg1;
- (void)setAppliedOrientation:(int)arg1;
- (void)setAutoCropped:(BOOL)arg1;
- (void)setAutoRedEyeCorrections:(id)arg1;
- (void)setAutoSmartColorIdentifier:(id)arg1;
- (void)setAutoSmartColorLevel:(float)arg1;
- (void)setAutoSmartToneIdentifier:(id)arg1;
- (void)setAutoSmartToneLevel:(float)arg1;
- (void)setAutoWhiteBalanceIdentifier:(id)arg1;
- (void)setAutoWhiteBalanceSettings:(id)arg1;
- (void)setBlackPointLevelOffset:(float)arg1;
- (void)setBrightnessLevelOffset:(float)arg1;
- (void)setBwGrainLevelOffset:(float)arg1;
- (void)setBwHueLevelOffset:(float)arg1;
- (void)setBwNeutralGammaLevelOffset:(float)arg1;
- (void)setBwStrengthLevelOffset:(float)arg1;
- (void)setBwToneLevelOffset:(float)arg1;
- (void)setColorCastLevelOffset:(float)arg1;
- (void)setColorContrastLevelOffset:(float)arg1;
- (void)setColorVibrancyLevelOffset:(float)arg1;
- (void)setContrastLevelOffset:(float)arg1;
- (void)setCropConstraintWidth:(int)arg1 height:(int)arg2;
- (void)setEffectFilterName:(id)arg1;
- (void)setEffectFilterVersion:(int)arg1;
- (void)setExposureLevelOffset:(float)arg1;
- (void)setHighlightsLevelOffset:(float)arg1;
- (void)setLegacyAutoEnhanceFilters:(id)arg1;
- (void)setLegacyAutoEnhanceIsOn:(BOOL)arg1;
- (void)setLocalLightLevelOffset:(float)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRedEyeCorrections:(id)arg1;
- (void)setShadowsLevelOffset:(float)arg1;
- (void)setSmartBWEnabled:(BOOL)arg1;
- (void)setSmartBWLevel:(float)arg1;
- (void)setSmartBWStatistics:(id)arg1;
- (void)setSmartColorEnabled:(BOOL)arg1;
- (void)setSmartColorLevel:(float)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneEnabled:(BOOL)arg1;
- (void)setSmartToneLevel:(float)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (void)setStraightenAngle:(float)arg1;
- (void)setTrimEndTimeOffset:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setTrimStartTimeOffset:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setWhiteBalanceEnabled:(BOOL)arg1;
- (void)setWhiteBalanceFaceI:(float)arg1;
- (void)setWhiteBalanceFaceQ:(float)arg1;
- (void)setWhiteBalanceFaceStrength:(float)arg1;
- (void)setWhiteBalanceFaceWarmth:(float)arg1;

@end
