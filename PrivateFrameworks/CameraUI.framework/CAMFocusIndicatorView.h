/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusIndicatorView : UIView {
    int  __exposureBiasSide;
    CAMExposureBiasSlider * __exposureBiasSlider;
    CAMFocusIndicatorRectView * __rectView;
    <CAMFocusIndicatorViewDelegate> * _delegate;
    double  _exposureBiasMaximum;
    double  _exposureBiasMinimum;
    double  _exposureBiasValue;
    BOOL  _showExposureBias;
    int  _size;
}

@property (nonatomic) int _exposureBiasSide;
@property (nonatomic, readonly) CAMExposureBiasSlider *_exposureBiasSlider;
@property (nonatomic, readonly) CAMFocusIndicatorRectView *_rectView;
@property (nonatomic) <CAMFocusIndicatorViewDelegate> *delegate;
@property (nonatomic) double exposureBiasMaximum;
@property (nonatomic) double exposureBiasMinimum;
@property (nonatomic) double exposureBiasValue;
@property (getter=isPulsing, nonatomic, readonly) BOOL pulsing;
@property (nonatomic) BOOL showExposureBias;
@property (nonatomic) int size;

- (void).cxx_destruct;
- (void)_commonCAMFocusIndicatorViewInitialization;
- (void)_createExposureBiasSlider;
- (void)_createRectViewAndUpdateBounds;
- (int)_exposureBiasSide;
- (id)_exposureBiasSlider;
- (void)_layoutExposureBiasSlider;
- (void)_layoutRectView:(id)arg1;
- (id)_rectView;
- (id)delegate;
- (float)exposureBiasMaximum;
- (float)exposureBiasMinimum;
- (float)exposureBiasValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(int)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isPulsing;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExposureBiasMaximum:(float)arg1;
- (void)setExposureBiasMinimum:(float)arg1;
- (void)setExposureBiasSide:(int)arg1 animated:(BOOL)arg2;
- (void)setExposureBiasValue:(float)arg1;
- (void)setShowExposureBias:(BOOL)arg1;
- (void)setSize:(int)arg1;
- (void)setSize:(int)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setTintColor:(id)arg1;
- (void)set_exposureBiasSide:(int)arg1;
- (BOOL)showExposureBias;
- (int)size;
- (void)startPulsing;
- (void)startScalingWithRepeatCount:(unsigned int)arg1;
- (void)stopPulsing;

@end
