/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPreviewView : UIView {
    int  __exposureBiasSide;
    NSMutableDictionary * __faceIndicators;
    UILabel * __simulatorLabel;
    CAMFocusIndicatorView * _continuousIndicator;
    CAMGridView * _gridView;
    UIView * _indicatorContainerView;
    CAMFocusIndicatorView * _pointIndicator;
    CAMVideoPreviewView * _videoPreviewView;
}

@property (nonatomic) int _exposureBiasSide;
@property (nonatomic, readonly) NSMutableDictionary *_faceIndicators;
@property (nonatomic, readonly) UILabel *_simulatorLabel;
@property (nonatomic, retain) CAMFocusIndicatorView *continuousIndicator;
@property (nonatomic, readonly) NSDictionary *faceIndicatorsByIdentifier;
@property (nonatomic) CAMGridView *gridView;
@property (nonatomic, readonly) UIView *indicatorContainerView;
@property (nonatomic, retain) CAMFocusIndicatorView *pointIndicator;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly) CAMVideoPreviewView *videoPreviewView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_aspectFaceRectFromSquareFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(float)arg2;
- (int)_exposureBiasSide;
- (id)_faceIndicators;
- (int)_faceOrientationForRollAngle:(float)arg1;
- (id)_simulatorLabel;
- (void)addFaceIndicator:(id)arg1 forIdentifier:(int)arg2;
- (struct CGPoint { double x1; double x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)continuousIndicator;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceIndicatorFrameForFaceResult:(id)arg1;
- (id)faceIndicatorsByIdentifier;
- (id)gridView;
- (void)indicatePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)indicatorContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointIndicator;
- (void)removeFaceIndicatorForIdentifier:(int)arg1;
- (void)setContinuousIndicator:(id)arg1;
- (void)setGridView:(id)arg1;
- (void)setPointIndicator:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)set_exposureBiasSide:(int)arg1;
- (id)videoPreviewLayer;
- (id)videoPreviewView;

@end
