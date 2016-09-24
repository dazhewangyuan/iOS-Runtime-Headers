/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate> {
    UITableViewCell * _cell;
    EKRecurrenceOrdinalPickerViewController * _pickerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForRow:(int)arg1;
- (int)frequency;
- (void)frequencyPickerUpdated:(id)arg1;
- (float)heightForRow:(int)arg1;
- (id)initWithDate:(id)arg1;
- (int)numberOfRows;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end
