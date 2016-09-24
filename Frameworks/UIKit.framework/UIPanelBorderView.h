/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPanelBorderView : UIView {
    NSString * _backdropGroupName;
    BOOL  _observesTime;
    UIPanelBorderReplicatingView * _replicatingView;
    int  _statusBarAvoidance;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (nonatomic) BOOL observesTime;
@property (nonatomic, retain) UIPanelBorderReplicatingView *replicatingView;
@property (nonatomic) int statusBarAvoidance;

- (void).cxx_destruct;
- (id)_cachedBackdropGroupName;
- (void)_statusBarTimeDidChange:(id)arg1;
- (void)_updateObservationOfTime;
- (id)backdropGroupName;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (BOOL)observesTime;
- (id)replicatingView;
- (void)setBackdropGroupName:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setObservesTime:(BOOL)arg1;
- (void)setReplicatingView:(id)arg1;
- (void)setStatusBarAvoidance:(int)arg1;
- (int)statusBarAvoidance;

@end
