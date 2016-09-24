/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton> {
    SEL  _action;
    _UIBackdropView * _backdropView;
    UIButton * _button;
    UIImageView * _overlayPlayBackground;
    int  _style;
    id  _target;
}

- (void).cxx_destruct;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (id)initWithStyle:(int)arg1 allowBackdropStatisticsSupression:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (int)style;

@end
