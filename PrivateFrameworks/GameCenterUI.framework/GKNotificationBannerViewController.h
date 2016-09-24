/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKNotificationBannerViewController : UIViewController {
    BOOL  _bannerAnimating;
    GKNotificationBannerView * _bannerView;
    BOOL  _bannerVisible;
    NSLayoutConstraint * _bannerWidthConstraint;
    NSLayoutConstraint * _bannerYPositionConstraint;
}

@property (nonatomic) BOOL bannerAnimating;
@property (nonatomic, retain) GKNotificationBannerView *bannerView;
@property (nonatomic) BOOL bannerVisible;
@property (nonatomic, retain) NSLayoutConstraint *bannerWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *bannerYPositionConstraint;

- (struct CGPoint { double x1; double x2; })_hiddenBannerPosition:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_visibleBannerCenterPosition:(struct CGSize { double x1; double x2; })arg1;
- (void)addBannerView:(id)arg1;
- (void)addConstraintsForBannerView;
- (BOOL)bannerAnimating;
- (id)bannerView;
- (BOOL)bannerVisible;
- (id)bannerWidthConstraint;
- (float)bannerWidthForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bannerYPositionConstraint;
- (void)dealloc;
- (void)handleWindowPan:(id)arg1;
- (void)handleWindowSingleTap:(id)arg1;
- (void)hideBannerQuickly:(BOOL)arg1;
- (void)layoutBanner;
- (void)setBannerAnimating:(BOOL)arg1;
- (void)setBannerView:(id)arg1;
- (void)setBannerVisible:(BOOL)arg1;
- (void)setBannerWidthConstraint:(id)arg1;
- (void)setBannerYPositionConstraint:(id)arg1;
- (void)showCurrentBanner;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)windowPointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)windowTouchesEnded:(id)arg1 withEvent:(id)arg2;

@end
