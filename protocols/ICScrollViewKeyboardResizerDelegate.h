/* Generated by RuntimeBrowser.
 */

@protocol ICScrollViewKeyboardResizerDelegate <NSObject>

@required

- (float)consumedBottomAreaForResizer:(ICScrollViewKeyboardResizer *)arg1;
- (UIScrollView *)keyboardResizerScrollView;

@optional

- (void)keyboardResizerAdjustInsetsWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 duration:(double)arg2;
- (BOOL)keyboardResizerAutoscrollAboveKeyboard;
- (float)topInsetForResizer:(ICScrollViewKeyboardResizer *)arg1;

@end
