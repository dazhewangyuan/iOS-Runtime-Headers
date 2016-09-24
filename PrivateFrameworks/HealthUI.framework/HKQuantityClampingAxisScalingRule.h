/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKQuantityClampingAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSArray * _chartBoundsRuleChoices;
    NSDictionary * _chartBoundsRuleChoicesByUnit;
    HKUnit * _unit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)ruleWithChartBoundsRuleChoicesByUnit:(id)arg1;

- (void).cxx_destruct;
- (void)_convertQuantityRanges;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(int)arg2 allowedDecimalPrecision:(int)arg3;
- (void)setUnit:(id)arg1;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(int)arg2;

@end
