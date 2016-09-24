/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCChronologicalAnnotationView : UIView {
    RCUIConfiguration * _UIConfiguration;
    UIColor * _backgroundDebugColor;
    double  _contentDuration;
    int  _lastHourComponentsUsedForMajorTickUpdate;
    double  _majorTickMinimumSpacing;
    double  _majorTickTimeUnit;
    struct { 
        double beginTime; 
        double endTime; 
    }  _markerClippingRange;
    unsigned int  _maximumMajorUnitsInVisibleDuration;
    UIFont * _timeLabelFont;
    struct { 
        double beginTime; 
        double endTime; 
    }  _visibleTimeRange;
}

@property (nonatomic, copy) RCUIConfiguration *UIConfiguration;
@property (nonatomic, retain) UIColor *backgroundDebugColor;
@property (nonatomic) double contentDuration;
@property (nonatomic) struct { double x1; double x2; } markerClippingRange;
@property (nonatomic) unsigned int maximumMajorUnitsInVisibleDuration;
@property (nonatomic) struct { double x1; double x2; } visibleTimeRange;

+ (int)_determineWidestTimeLabelDigit;
+ (id)_normalTimeLabelFont;

- (void).cxx_destruct;
- (id)UIConfiguration;
- (id)_timeLabelAttributes;
- (id)_timeLabelAttributesWithFont:(id)arg1;
- (void)_updateMajorTickMinimumSpacingForContentDuration:(double)arg1;
- (void)_updateMajorTickTimeUnit;
- (id)backgroundDebugColor;
- (double)contentDuration;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })labelsSize;
- (struct { double x1; double x2; })markerClippingRange;
- (unsigned int)maximumMajorUnitsInVisibleDuration;
- (void)setBackgroundDebugColor:(id)arg1;
- (void)setContentDuration:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMarkerClippingRange:(struct { double x1; double x2; })arg1;
- (void)setMaximumMajorUnitsInVisibleDuration:(unsigned int)arg1;
- (void)setUIConfiguration:(id)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })visibleTimeRange;

@end
