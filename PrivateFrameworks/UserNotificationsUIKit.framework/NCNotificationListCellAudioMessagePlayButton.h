/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCellAudioMessagePlayButton : NCNotificationListCellActionButton <NCNotificationViewControllerAudioAccessoryViewObserver> {
    UIView * _audioAccessoryView;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic, retain) UIView *audioAccessoryView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;
@property (readonly) Class superclass;

+ (BOOL)isAudioMessagePlayAction:(id)arg1;

- (void).cxx_destruct;
- (void)_configureSpinnerView;
- (void)_layoutAudioAccessoryView;
- (void)_layoutSpinnerView;
- (void)_setAudioAccessoryView:(id)arg1;
- (id)audioAccessoryView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)notificationViewController:(id)arg1 loadedAudioAccessoryView:(id)arg2;
- (void)setAudioAccessoryView:(id)arg1;
- (void)setSpinnerView:(id)arg1;
- (id)spinnerView;

@end
