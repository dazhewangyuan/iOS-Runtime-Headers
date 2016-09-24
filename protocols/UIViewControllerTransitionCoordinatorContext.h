/* Generated by RuntimeBrowser.
 */

@protocol UIViewControllerTransitionCoordinatorContext <NSObject>

@required

- (int)completionCurve;
- (float)completionVelocity;
- (UIView *)containerView;
- (BOOL)initiallyInteractive;
- (BOOL)isAnimated;
- (BOOL)isCancelled;
- (BOOL)isInteractive;
- (BOOL)isInterruptible;
- (float)percentComplete;
- (int)presentationStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (double)transitionDuration;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
- (UIView *)viewForKey:(NSString *)arg1;

@end
