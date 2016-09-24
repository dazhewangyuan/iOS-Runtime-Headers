/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINSetupController : PSSetupController {
    BOOL  _allowOptionsButton;
    BOOL  _success;
}

@property (nonatomic) BOOL allowOptionsButton;

- (BOOL)allowOptionsButton;
- (BOOL)canBeShownFromSuspendedState;
- (id)init;
- (BOOL)popupStyleIsModal;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAllowOptionsButton:(BOOL)arg1;
- (void)showController:(id)arg1 animate:(BOOL)arg2;
- (BOOL)success;
- (BOOL)usePopupStyle;

@end
