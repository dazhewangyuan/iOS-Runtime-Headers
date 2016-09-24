/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCGLWaveformViewController : UIViewController <RCGLWaveformRendererDelegate, RCWaveformSelectionOverlayDelegate, UIScrollViewDelegate> {
    RCUIConfiguration * _UIConfiguration;
    RCAcousticAnnotationView * _acousticAnnotationView;
    UIView * _backgroundView;
    UIView * _bottomLineView;
    BOOL  _capturing;
    BOOL  _clipTimeMarkersToDuration;
    double  _currentTime;
    unsigned int  _currentTimeDisplayOptions;
    <RCGLWaveformViewDelegate> * _delegate;
    BOOL  _dragEnding;
    double  _duration;
    struct { 
        double beginTime; 
        double endTime; 
    }  _highlightTimeRange;
    BOOL  _isScrollViewAutoScrolling;
    BOOL  _isScrollViewAutoScrollingBeginning;
    BOOL  _isScrollViewAutoScrollingPaused;
    RCLayoutMetrics * _layoutMetrics;
    double  _layoutWidth;
    double  _maximumSelectionDuration;
    double  _overlayAutoscrollBaseDuration;
    double  _overlayAutoscrollRateForSelectionTracking;
    NSTimer * _overlayAutoscrollTimer;
    BOOL  _playing;
    RCGLWaveformRenderer * _rendererController;
    double  _resumingToForegroundAutoscrollRate;
    RCWaveformScrollView * _scrollView;
    BOOL  _scrubbing;
    BOOL  _scrubbingEnabled;
    struct { 
        double beginTime; 
        double endTime; 
    }  _selectedTimeRange;
    BOOL  _selectedTimeRangeEditingEnabled;
    BOOL  _selectedTimeRangeScrubbingEnabled;
    RCWaveformSelectionOverlay * _selectionOverlay;
    double  _selectionVisibleMargin;
    BOOL  _shouldUpdateInDisplayLink;
    double  _timeBeganAutoscrolling;
    NSMutableArray * _timeMarkerViews;
    BOOL  _timeMarkerViewsNeedInitialLayout;
    BOOL  _timeMarkerViewsUpdatesDisabled;
    UIView * _topLineView;
    struct { 
        double beginTime; 
        double endTime; 
    }  _visibleTimeRange;
    struct { 
        double beginTime; 
        double endTime; 
    }  _visibleTimeRangeBeforeSelectionTracking;
}

@property (nonatomic, copy) RCUIConfiguration *UIConfiguration;
@property (getter=isAutoscrolling, nonatomic, readonly) BOOL autoscrolling;
@property (nonatomic) BOOL capturing;
@property (nonatomic) BOOL clipTimeMarkersToDuration;
@property (nonatomic) double currentTime;
@property (nonatomic) unsigned int currentTimeDisplayOptions;
@property (nonatomic, retain) RCWaveformDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RCGLWaveformViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned int hash;
@property (nonatomic) struct { double x1; double x2; } highlightTimeRange;
@property (nonatomic, retain) RCLayoutMetrics *layoutMetrics;
@property (nonatomic) double maximumSelectionDuration;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL scrubbingEnabled;
@property (nonatomic) struct { double x1; double x2; } selectedTimeRange;
@property (getter=isSelectedTimeRangeEditingEnabled, nonatomic) BOOL selectedTimeRangeEditingEnabled;
@property (getter=isSelectedTimeRangeEditingEnabled, nonatomic) BOOL selectedTimeRangeScrubbingEnabled;
@property (nonatomic) double selectionVisibleMargin;
@property (readonly) Class superclass;
@property (nonatomic) struct { double x1; double x2; } visibleTimeRange;

- (void).cxx_destruct;
- (id)UIConfiguration;
- (void)_applyUIConfiguration;
- (void)_autoscrollOverlayIfNecessary;
- (void)_displayLinkDidUpdate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTimeMarkerView:(id)arg1;
- (BOOL)_isScrubbing;
- (BOOL)_isScrubbingSelectionTimeRange;
- (void)_layoutTimeMarkerViewsForCurrentlyVisibleTimeRange;
- (void)_scrollViewPanGestureRecognized:(id)arg1;
- (void)_scrubbingDidFinish;
- (void)_setSelectedTimeRange:(struct { double x1; double x2; })arg1 updateVisibleTimeRange:(BOOL)arg2 notifyDelegate:(BOOL)arg3 animationDuration:(double)arg4;
- (void)_setTimeMarkerViewUpdatesDisabled:(BOOL)arg1;
- (void)_setTimeMarkerViewsNeedInitialLayout:(BOOL)arg1;
- (void)_setVisibleTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2 completionBlock:(id /* block */)arg3;
- (BOOL)_shouldAutoAnimateScrollChanges;
- (BOOL)_shouldCenterTimeIndicator;
- (void)_startDisplayLink;
- (void)_stopDisplayLink;
- (void)_updateAnnotationViews;
- (void)_updateCurrentTimeDisplay;
- (void)_updateRendererControllerPausedState;
- (void)_updateSelectionOverlayWithAnimationDuration:(double)arg1;
- (void)_updateVisibleAreaWithAnimationDuration:(double)arg1;
- (void)_updateWaveformViewContentSizeAndOffset;
- (struct { double x1; double x2; })_visibleTimeRangeForCurrentSelectionTimeRange;
- (void)beginAutoscrollingAtTime:(double)arg1 atRate:(float)arg2;
- (BOOL)capturing;
- (BOOL)clipTimeMarkersToDuration;
- (double)currentTime;
- (unsigned int)currentTimeDisplayOptions;
- (float)currentTimeIndicatorCoordinate;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)endAutoscrolling;
- (void)fixupScrollPositionToMatchIndicatorPositionTime;
- (struct { double x1; double x2; })highlightTimeRange;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isAutoscrolling;
- (BOOL)isScrollViewAutoScrolling;
- (BOOL)isSelectedTimeRangeEditingEnabled;
- (BOOL)isSelectedTimeRangeEditingEnabled;
- (id)layoutMetrics;
- (double)maximumSelectionDuration;
- (void)pauseAutoscrolling;
- (BOOL)playing;
- (void)rc_screenUpdatesDisabledDidChange;
- (void)reloadOverlayOffsets;
- (void)resumeAutoscrollingIfPaused;
- (void)scrollView:(id)arg1 didChangeContentOffsetToOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollView:(id)arg1 willChangeContentOffsetToOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (BOOL)scrubbingEnabled;
- (struct { double x1; double x2; })selectedTimeRange;
- (float)selectionVisibleMargin;
- (void)setAutoscrolling:(BOOL)arg1;
- (void)setCapturing:(BOOL)arg1;
- (void)setClipTimeMarkersToDuration:(BOOL)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTimeDisplayOptions:(unsigned int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (struct { double x1; double x2; })setHighlightTimeRange;
- (void)setHighlightTimeRange:(struct { double x1; double x2; })arg1;
- (void)setLayoutMetrics:(id)arg1;
- (void)setMaximumSelectionDuration:(double)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setScrubbingEnabled:(BOOL)arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2;
- (void)setSelectedTimeRangeEditingEnabled:(BOOL)arg1;
- (void)setSelectedTimeRangeScrubbingEnabled:(BOOL)arg1;
- (void)setSelectionVisibleMargin:(float)arg1;
- (void)setUIConfiguration:(id)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2;
- (struct { double x1; double x2; })timeRangeByInsettingVisibleTimeRange:(struct { double x1; double x2; })arg1 inset:(float)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (struct { double x1; double x2; })visibleTimeRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })waveformRectForLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)waveformRenderer:(id)arg1 contentWidthDidChange:(float)arg2;
- (void)waveformRendererContentDidFinishLoading:(id)arg1;
- (void)waveformRendererDidSynchronizeToDisplayLink:(id)arg1;
- (void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
- (float)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
- (double)waveformSelectionOverlay:(id)arg1 timeForOffset:(float)arg2;
- (void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
- (double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(BOOL)arg3;
- (struct { double x1; double x2; })waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(struct { double x1; double x2; })arg2 isTracking:(BOOL)arg3;
- (double)waveformSelectionOverlayGetCurrentTime:(id)arg1;

@end
