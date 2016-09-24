/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDProgressView : UIView {
    BOOL  _isLiveStream;
    NSLayoutConstraint * _leftConstant;
    UILabel * _liveLabel;
    double  _progress;
    BOOL  _progressActive;
    MCDProgressBarView * _progressBarView;
    NSLayoutConstraint * _rightConstant;
    UILabel * _timeLabel;
    UILabel * _timeRemainingLabel;
}

@property (nonatomic) BOOL isLiveStream;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isLiveStream;
- (void)layoutSubviews;
- (void)setIsLiveStream:(BOOL)arg1;
- (void)setPlaybackTime:(double)arg1 duration:(double)arg2;

@end
