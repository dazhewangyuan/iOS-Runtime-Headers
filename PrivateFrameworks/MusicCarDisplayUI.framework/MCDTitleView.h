/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDTitleView : UIView {
    UIImageView * _explicitImageView;
    NSLayoutConstraint * _explicitImageViewWidthConstraint;
    BOOL  _explicitTrack;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titlePaddingConstraint;
}

@property (getter=isExplicitTrack, nonatomic) BOOL explicitTrack;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)_addLabelWithFont:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isExplicitTrack;
- (void)setExplicitTrack:(BOOL)arg1;
- (id)titleLabel;

@end
