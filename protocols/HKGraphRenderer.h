/* Generated by RuntimeBrowser.
 */

@protocol HKGraphRenderer <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axisRect;
- (void)drawPath:(UIBezierPath *)arg1 strokeColor:(UIColor *)arg2 fillColor:(UIColor *)arg3 markerImage:(UIImage *)arg4 useGradientFill:(BOOL)arg5 clipToAxes:(BOOL)arg6;
- (void)drawText:(NSString *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 horizontalAlignment:(int)arg3 verticalAlignment:(int)arg4 textColor:(UIColor *)arg5 font:(UIFont *)arg6 clipToAxis:(BOOL)arg7;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTexture:(UIImage *)arg2;
- (<HKGraphRenderDelegate> *)renderDelegate;
- (void)setAxisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsRender;
- (void)setRenderDelegate:(id <HKGraphRenderDelegate>)arg1;

@end
