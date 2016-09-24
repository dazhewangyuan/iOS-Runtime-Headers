/* Generated by RuntimeBrowser.
 */

@protocol MPSwipableViewDelegate <NSObject>

@optional

- (void)swipableView:(MPSwipableView *)arg1 didMoveToSuperview:(UIView *)arg2;
- (UIView *)swipableView:(MPSwipableView *)arg1 overrideHitTest:(struct CGPoint { double x1; double x2; })arg2 withEvent:(UIEvent *)arg3;
- (void)swipableView:(MPSwipableView *)arg1 pinchedToScale:(float)arg2 withVelocity:(float)arg3;
- (void)swipableView:(MPSwipableView *)arg1 swipedInDirection:(int)arg2;
- (void)swipableView:(MPSwipableView *)arg1 tappedWithCount:(unsigned int)arg2;
- (void)swipableView:(MPSwipableView *)arg1 tappedWithCount:(unsigned int)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)swipableView:(MPSwipableView *)arg1 willMoveToSuperview:(UIView *)arg2;
- (void)swipableView:(MPSwipableView *)arg1 willMoveToWindow:(UIWindow *)arg2;
- (void)swipableViewHadActivity:(MPSwipableView *)arg1;

@end
