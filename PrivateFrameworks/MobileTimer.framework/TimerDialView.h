/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface TimerDialView : UIView {
    double  _currentDuration;
    double  _currentTime;
    double  _fireTime;
    struct __CFNumberFormatter { } * _formatter;
    unsigned int  _graduatedSectionCount;
    NSMutableArray * _graduatedSectionLabels;
    NSMutableArray * _graduatedSectionValues;
    double  _graduatedSectionWidth;
    NSMutableArray * _graduatedSections;
    UIFont * _labelFont;
    double  _majorTickHeight;
    double  _minorTickHeight;
    unsigned int  _minorTicksPerSection;
    double  _remainingTime;
    BOOL  _running;
    double  _tickHorizontalSpacing;
}

@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic) double majorTickHeight;
@property (nonatomic) double minorTickHeight;
@property (nonatomic) unsigned int minorTicksPerSection;
@property (nonatomic) double tickHorizontalSpacing;

- (void).cxx_destruct;
- (void)dealloc;
- (id)graduatedSection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelFont;
- (void)layoutSubviews;
- (float)majorTickHeight;
- (void)makeGraduatedSurfaceAtLeastWidth:(float)arg1;
- (void)markStaleWithTime:(double)arg1;
- (float)minorTickHeight;
- (unsigned int)minorTicksPerSection;
- (float)pointsPerMinute;
- (void)setFireTime:(double)arg1 withTime:(double)arg2;
- (void)setLabelFont:(id)arg1;
- (void)setMajorTickHeight:(float)arg1;
- (void)setMinorTickHeight:(float)arg1;
- (void)setMinorTicksPerSection:(unsigned int)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setTickHorizontalSpacing:(float)arg1;
- (void)setupWithDuration:(double)arg1;
- (float)tickHorizontalSpacing;
- (BOOL)updateDisplayWithTime:(double)arg1;
- (double)updatedDurationForPointOffset:(float)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
