/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDatePickerCell : UITableViewCell <HUCellProtocol> {
    UIDatePicker * _datePicker;
    HFItem * _item;
}

@property (nonatomic, retain) UIDatePicker *datePicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HFItem *item;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)datePicker;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)setDatePicker:(id)arg1;
- (void)setItem:(id)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end
