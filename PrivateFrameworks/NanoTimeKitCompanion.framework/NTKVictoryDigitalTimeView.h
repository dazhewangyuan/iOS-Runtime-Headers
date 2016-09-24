/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView> {
    unsigned int  _color;
    NTKVictoryDigitsView * _flipDigitsView;
    BOOL  _flipViewIsLower;
    BOOL  _frozen;
    NTKVictoryDigitsView * _lowerDigitsView;
    unsigned int  _style;
    CLKTimeFormatter * _timeFormatter;
    NTKVictoryDigitsView * _upperDigitsView;
}

@property (nonatomic) unsigned int color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) BOOL frozen;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int style;
@property (readonly) Class superclass;

+ (id)transitionTimingFunction;

- (void).cxx_destruct;
- (int)_lowerDigitAppearanceForStyle:(unsigned int)arg1;
- (void)_resetDigitAppearanceForStyle:(unsigned int)arg1;
- (void)_setFlipViewIsLower:(BOOL)arg1;
- (int)_upperDigitAppearanceForStyle:(unsigned int)arg1;
- (void)applyTransitionFraction:(float)arg1 fromColor:(unsigned int)arg2 toColor:(unsigned int)arg3;
- (void)applyTransitionFraction:(float)arg1 fromStyle:(unsigned int)arg2 toStyle:(unsigned int)arg3;
- (void)clearEditingTransitions;
- (unsigned int)color;
- (id)init;
- (BOOL)isFrozen;
- (void)layoutSubviews;
- (void)setColor:(unsigned int)arg1;
- (void)setFrozen:(BOOL)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setStyle:(unsigned int)arg1;
- (void)setTimeOffset:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)style;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)willBeginEditing;

@end
