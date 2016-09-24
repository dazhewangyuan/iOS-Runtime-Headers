/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackCollectionBannerUIViewController : UIViewController <UIGestureRecognizerDelegate> {
    BOOL  _alreadyShowingBanner;
    UIDynamicAnimator * _animator;
    double  _autoDismissDuration;
    UIView * _bannerContentView;
    double  _bannerHeight;
    NSString * _bannerMessage;
    NSString * _bannerTitle;
    BOOL  _bounce;
    unsigned int  _feedbackCollectionContext;
    double  _hideBannerAnimationDuration;
    BOOL  _isMSGOnlyBanner;
    double  _showBannerAnimationDuration;
}

@property (nonatomic) double autoDismissDuration;
@property (nonatomic, copy) NSString *bannerMessage;
@property (nonatomic, copy) NSString *bannerTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int feedbackCollectionContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedFeedbackCollectionBanner;

- (void).cxx_destruct;
- (float)autoDismissDuration;
- (void)autoDismissFeedbackBanner:(id)arg1;
- (id)bannerMessage;
- (id)bannerTitle;
- (void)didReceiveMemoryWarning;
- (unsigned int)feedbackCollectionContext;
- (void)handleTap:(id)arg1;
- (void)hideBanner;
- (void)hideBanner:(BOOL)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 inContext:(unsigned int)arg2;
- (id)initWithTitle:(id)arg1 msg:(id)arg2 inContext:(unsigned int)arg3;
- (void)setAutoDismissDuration:(float)arg1;
- (void)setBannerMessage:(id)arg1;
- (void)setBannerTitle:(id)arg1;
- (void)setFeedbackCollectionContext:(unsigned int)arg1;
- (void)setupUIIfNeeded;
- (void)showBanner;
- (void)showBannerWithDelay:(double)arg1;
- (void)showBannerWithDelay:(double)arg1 forDuration:(double)arg2;
- (void)showFeedbackCollectionUI;
- (void)upSwipe:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
