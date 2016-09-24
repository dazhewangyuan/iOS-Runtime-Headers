/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIBackgroundDarkeningWithPlatterCutoutView : UIView {
    UIView * _above;
    UIView * _below;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cutOutRect;
    UIColor * _darkeningColor;
    UIImageView * _imageView;
    UIView * _left;
    double  _platterContinuousCornerRadius;
    UIView * _right;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cutOutRect;
@property (nonatomic, copy) UIColor *darkeningColor;
@property (nonatomic) double platterContinuousCornerRadius;

- (void).cxx_destruct;
- (void)_updateMaskImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cutOutRect;
- (id)darkeningColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 darkeningColor:(id)arg2 platterCornerRadius:(float)arg3;
- (void)layoutSubviews;
- (float)platterContinuousCornerRadius;
- (void)setCutOutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDarkeningColor:(id)arg1;
- (void)setPlatterContinuousCornerRadius:(float)arg1;

@end
