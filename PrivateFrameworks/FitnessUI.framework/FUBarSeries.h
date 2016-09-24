/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUBarSeries : FUChartSeries {
    UIColor * _backgroundStrokeColor;
    double  _backgroundStrokeWidth;
    UIColor * _barColor;
    NSArray * _barColors;
    struct CGGradient { } * _barGradient;
    NSArray * _barLabels;
    double  _barSpacing;
    double  _barWidth;
    double  _fadeInPercentage;
    BOOL  _fadeZeroBars;
    UIColor * _fadedBarColor;
    NSArray * _labelAttributes;
    NSArray * _plotPoints;
    double  _roundedCornerRadius;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property (nonatomic, retain) UIColor *backgroundStrokeColor;
@property (nonatomic) double backgroundStrokeWidth;
@property (nonatomic, retain) UIColor *barColor;
@property (nonatomic, retain) NSArray *barColors;
@property (nonatomic) struct CGGradient { }*barGradient;
@property (nonatomic, retain) NSArray *barLabels;
@property (nonatomic) double barSpacing;
@property (nonatomic) double barWidth;
@property (nonatomic) double fadeInPercentage;
@property (nonatomic) BOOL fadeZeroBars;
@property (nonatomic, retain) UIColor *fadedBarColor;
@property (nonatomic, retain) NSArray *labelAttributes;
@property (nonatomic, retain) NSArray *plotPoints;
@property (nonatomic) double roundedCornerRadius;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;

- (void).cxx_destruct;
- (id)_chartColorForChartYValue:(float)arg1;
- (void)_strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 color:(struct CGColor { }*)arg3 width:(float)arg4;
- (void)_translateColorThresholds;
- (id)backgroundStrokeColor;
- (float)backgroundStrokeWidth;
- (id)barColor;
- (id)barColors;
- (struct CGGradient { }*)barGradient;
- (id)barLabels;
- (float)barSpacing;
- (float)barWidth;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (float)fadeInPercentage;
- (BOOL)fadeZeroBars;
- (id)fadedBarColor;
- (id)init;
- (id)labelAttributes;
- (void)layoutSubviews;
- (id)plotPoints;
- (float)roundedCornerRadius;
- (void)setBackgroundStrokeColor:(id)arg1;
- (void)setBackgroundStrokeWidth:(float)arg1;
- (void)setBarColor:(id)arg1;
- (void)setBarColors:(id)arg1;
- (void)setBarGradient:(struct CGGradient { }*)arg1;
- (void)setBarLabels:(id)arg1;
- (void)setBarSpacing:(float)arg1;
- (void)setBarWidth:(float)arg1;
- (void)setFadeInPercentage:(float)arg1;
- (void)setFadeZeroBars:(BOOL)arg1;
- (void)setFadedBarColor:(id)arg1;
- (void)setLabelAttributes:(id)arg1;
- (void)setPlotPoints:(id)arg1;
- (void)setRoundedCornerRadius:(float)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(float)arg1;
- (id)strokeColor;
- (float)strokeWidth;

@end
