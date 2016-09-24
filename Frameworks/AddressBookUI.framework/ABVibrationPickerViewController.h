/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABVibrationPickerViewController : ABPickerViewController {
    BOOL  _canEnterEditingMode;
    UIBarButtonItem * _saveButton;
    TKVibrationPickerViewController * _vibrationPickerViewController;
}

@property (setter=_setSaveButton:, nonatomic, retain) UIBarButtonItem *_saveButton;
@property (nonatomic, readonly, retain) TKVibrationPickerViewController *vibrationPickerViewController;

- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; int x7; }*)arg1;
- (id)_saveButton;
- (void)_setSaveButton:(id)arg1;
- (void)_vibrationSaveButtonClicked:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1;
- (void)loadView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStyleProvider:(id)arg1;
- (id)vibrationPickerViewController;

@end
