/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataUnit : NSObject <NSCopying> {
    BOOL  __wheelchairUser;
    NSAttributedString * _attributedSummaryAttribution;
    int  _categoryIdentifier;
    NSString * _cautionaryTextKey;
    NSDictionary * _chartingPredicatesByTimeScope;
    HKDataUnitChartingRules * _chartingRules;
    int  _dataUnitIdentifier;
    NSPredicate * _defaultChartingPredicate;
    UIImage * _detailImage;
    BOOL  _disallowsSourceReordering;
    NSString * _displayNameKey;
    NSString * _embeddedDisplayNameKey;
    NSString * _keywordsNameKey;
    NSString * _labelDisplayNameKey;
    HKObjectType * _objectType;
    NSDictionary * _portraitPresentationOptionOverrides;
    unsigned int  _portraitPresentationOptions;
    double  _scalarValue;
    BOOL  _shouldDisplayUnitStringOnYAxis;
    BOOL  _shouldUseSingleSecondaryValue;
    BOOL  _showAllDataHierarchically;
    BOOL  _summaryAttributionHasLink;
    NSString * _summaryNameKey;
    NSString * _summaryPairedWatchNameKey;
    NSString * _titleEmbeddedDisplayNameKey;
    NSString * _unitChangeCautionaryTextKey;
    NSDictionary * _unitNameKeyOverrides;
}

@property (getter=_isWheelchairUser, setter=_setWheelchairUser:) BOOL _wheelchairUser;
@property (nonatomic, readonly) BOOL allowsManualEntry;
@property (nonatomic, readonly) BOOL anyPortraitChartDefinition;
@property (nonatomic, readonly) NSAttributedString *attributedSummaryAttribution;
@property (nonatomic, readonly) BOOL canBecomeFavorite;
@property (nonatomic, readonly) int categoryIdentifier;
@property (nonatomic, readonly) NSString *cautionaryText;
@property (nonatomic, readonly) HKDataUnitChartingRules *chartingRules;
@property (nonatomic, readonly) HKDataCategory *dataCategory;
@property (nonatomic, readonly) UIImage *dataUnitIcon;
@property (nonatomic, readonly) int dataUnitIdentifier;
@property (nonatomic, readonly) UIImage *detailImage;
@property (nonatomic, readonly) BOOL disallowsSourceReordering;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *embeddedDisplayName;
@property (nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) BOOL isActivitySummary;
@property (nonatomic, readonly) BOOL isCharacteristic;
@property (nonatomic, readonly) BOOL isDocument;
@property (nonatomic, readonly) NSSet *keywords;
@property (nonatomic, readonly) NSString *labelDisplayName;
@property (nonatomic, readonly) UIImage *listIcon;
@property (nonatomic, readonly) NSString *listIconImageName;
@property (nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, readonly) HKSampleType *recordSampleType;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (nonatomic, readonly) double scalarValue;
@property (nonatomic, readonly) UIImage *shareIcon;
@property (nonatomic) BOOL shouldDisplayUnitStringOnYAxis;
@property (nonatomic, readonly) BOOL shouldUseSingleSecondaryValue;
@property (nonatomic, readonly) BOOL showAllDataHierarchically;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) BOOL summaryAttributionHasLink;
@property (nonatomic, readonly) NSString *summaryForPairedWatch;
@property (nonatomic, readonly) BOOL supportsAssociatedSamples;
@property (nonatomic, readonly) NSString *titleEmbeddedDisplayName;
@property (nonatomic, readonly) NSString *unitChangeCautionaryText;
@property (nonatomic, readonly) UIImage *unitIcon;
@property (nonatomic, readonly) BOOL unitPreferencesRequireChangeConfirmation;

- (void).cxx_destruct;
- (void)_applyChartingProperties:(id)arg1;
- (void)_applyScalarValue:(id)arg1;
- (void)_applySummaryAndAttributionPropertiesWithAttributionURLString:(id)arg1 displayNameKey:(id)arg2;
- (void)_applyTextualPropertiesWithDictionary:(id)arg1 displayNameKey:(id)arg2;
- (BOOL)_isActivitySummary;
- (BOOL)_isNikeFuel;
- (BOOL)_isWheelchairUser;
- (id)_localizedStringWithKey:(id)arg1;
- (id)_rawLocalizedStringForKey:(id)arg1;
- (void)_setWheelchairUser:(BOOL)arg1;
- (id)adjustedValueForClientValue:(id)arg1;
- (id)adjustedValueForDaemonValue:(id)arg1;
- (BOOL)allowsManualEntry;
- (BOOL)anyPortraitChartDefinition;
- (id)attributedSummaryAttribution;
- (BOOL)canBecomeFavorite;
- (int)categoryIdentifier;
- (id)cautionaryText;
- (id)chartingPredicateForTimeScope:(int)arg1;
- (id)chartingRules;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataCategory;
- (id)dataUnitIcon;
- (int)dataUnitIdentifier;
- (id)defaultValuePredicate;
- (id)description;
- (id)detailImage;
- (BOOL)disallowsSourceReordering;
- (id)displayName;
- (id)embeddedDisplayName;
- (unsigned int)hash;
- (BOOL)hidden;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (BOOL)isActivitySummary;
- (BOOL)isCharacteristic;
- (BOOL)isDocument;
- (BOOL)isEqual:(id)arg1;
- (id)keywords;
- (id)labelDisplayName;
- (id)listIcon;
- (id)listIconImageName;
- (id)objectType;
- (unsigned int)presentationOptionsForTimeScope:(int)arg1;
- (id)recordSampleType;
- (id)sampleType;
- (float)scalarValue;
- (void)setShouldDisplayUnitStringOnYAxis:(BOOL)arg1;
- (id)shareIcon;
- (BOOL)shouldDisplayUnitStringOnYAxis;
- (BOOL)shouldUseSingleSecondaryValue;
- (BOOL)showAllDataHierarchically;
- (id)summary;
- (BOOL)summaryAttributionHasLink;
- (id)summaryForPairedWatch;
- (BOOL)supportsAssociatedSamples;
- (id)titleEmbeddedDisplayName;
- (id)unitChangeCautionaryText;
- (id)unitDisplayNameKeyOverrideForUnit:(id)arg1;
- (id)unitIcon;
- (BOOL)unitPreferencesRequireChangeConfirmation;

@end
