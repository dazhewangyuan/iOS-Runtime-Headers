/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCMediaPlayPauseButton : UIControl {
    NCMaterialView * _backgroundCircle;
    NCMaterialButton * _button;
    UIButton * _invisibleButton;
    int  _type;
}

@property (nonatomic, retain) NCMaterialView *backgroundCircle;
@property (nonatomic, retain) NCMaterialButton *button;
@property (nonatomic, retain) UIButton *invisibleButton;
@property (nonatomic) int type;

+ (id)_buttonImageNamed:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)_updateBackground;
- (void)_updateBackgroundForAudioStyle;
- (void)_updateBackgroundForMovieStyle;
- (void)_updateSelected;
- (void)_updateSelectedForAudioStyle;
- (void)_updateSelectedForMovieStyle;
- (void)_updateSize;
- (void)_updateSizeForAudioStyle;
- (void)_updateSizeForMovieStyle;
- (void)_updateStyle;
- (void)_updateStyleForAudioStyle;
- (void)_updateStyleForMovieStyle;
- (void)_updateType;
- (id)backgroundCircle;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 type:(int)arg2;
- (id)invisibleButton;
- (void)layoutSubviews;
- (void)setBackgroundCircle:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setInvisibleButton:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setType:(int)arg1;
- (void)tintColorDidChange;
- (int)type;

@end
