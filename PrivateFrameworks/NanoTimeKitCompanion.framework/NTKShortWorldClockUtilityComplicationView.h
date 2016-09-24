/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKShortWorldClockUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKWorldClockComplicationDisplay> {
    NTKDigitalTimeLabel * _timeLabel;
    BOOL  _timeTravel;
    NTKTimeOfDayLabel * _timeTravelLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

+ (id)_preferredAdditionalFontSettings;

- (void).cxx_destruct;
- (void)_applyForegroundAlpha;
- (void)_updateContentForEditingChange;
- (void)_updateLabelsForFontChange;
- (float)_widthThatFits;
- (void)endTimeTravelAnimated:(BOOL)arg1;
- (float)fontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setShortCity:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)startTimeTravelAnimated:(BOOL)arg1;

@end
