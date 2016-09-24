/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABDatePickerViewController : UIViewController {
    void * _context;
    UIDatePicker * _datePicker;
    <ABDatePickerViewControllerDismissDelegate> * _dismissDelegate;
}

@property (nonatomic) void*context;
@property (nonatomic, retain) UIDatePicker *datePicker;
@property (nonatomic) <ABDatePickerViewControllerDismissDelegate> *dismissDelegate;

+ (struct CGSize { double x1; double x2; })datePickerSize;

- (float)ab_heightToFitForViewInPopoverView;
- (void*)context;
- (id)datePicker;
- (void)dealloc;
- (id)dismissDelegate;
- (void)loadView;
- (void)setContext:(void*)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDismissDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
