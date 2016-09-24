/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIOLAConfigurationHistory : _UILAConfigurationHistory <_UIOLAPropertySource> {
    BOOL  _baselineRelativeArrangement;
    int  _distribution;
    BOOL  _hasEstablishedOrderingValues;
    BOOL  _inOrderedArrangementUpdateSection;
    BOOL  _itemFittingSizeChanged;
    BOOL  _itemOrderingChanged;
    double  _proportionalFillDenominator;
    double  _spacing;
}

@property (setter=_setItemFittingSizeChanged:, nonatomic) BOOL _itemFittingSizeChanged;
@property (setter=_setItemOrderingChanged:, nonatomic) BOOL _itemOrderingChanged;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic) int axis;
@property (getter=isBaselineRelativeArrangement, nonatomic) BOOL baselineRelativeArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int distribution;
@property (nonatomic) BOOL hasEstablishedOrderingValues;
@property (readonly) unsigned int hash;
@property (getter=isInOrderedArrangementUpdateSection, nonatomic) BOOL inOrderedArrangementUpdateSection;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic) double proportionalFillDenominator;
@property (nonatomic) double spacing;
@property (readonly) Class superclass;

- (BOOL)_itemFittingSizeChanged;
- (BOOL)_itemOrderingChanged;
- (void)_setItemFittingSizeChanged:(BOOL)arg1;
- (void)_setItemOrderingChanged:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)distribution;
- (BOOL)hasEstablishedOrderingValues;
- (BOOL)isBaselineRelativeArrangement;
- (BOOL)isInOrderedArrangementUpdateSection;
- (float)proportionalFillDenominator;
- (void)setBaselineRelativeArrangement:(BOOL)arg1;
- (void)setDistribution:(int)arg1;
- (void)setHasEstablishedOrderingValues:(BOOL)arg1;
- (void)setInOrderedArrangementUpdateSection:(BOOL)arg1;
- (void)setProportionalFillDenominator:(float)arg1;
- (void)setSpacing:(float)arg1;
- (float)spacing;

@end
