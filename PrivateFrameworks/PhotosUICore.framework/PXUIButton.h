/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestOutset;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestOutset;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestOutset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitTestOutset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
