/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDatePickerImpl_CCExpiryPickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {
    NSCalendar * _calendar;
    unsigned int  _calendarUnit;
    SEL  _changeAction;
    id  _changeTarget;
    NSDateFormatter * _dateFormatter;
    UIFont * _font;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _possibleRange;
    NSNumber * _useDoubleMonthStyle;
    double  _width;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)_calculateWidthForComponent:(int)arg1 usingFont:(id)arg2;
- (id)_dateForComponent:(int)arg1 index:(unsigned int)arg2;
- (id)_dateFormatForCalendarUnit:(unsigned int)arg1;
- (id)_dateWithCalendarUnit:(unsigned int)arg1 value:(int)arg2;
- (unsigned int)_defaultIndexForComponent:(int)arg1;
- (int)_numberOfItemsForComponent:(int)arg1;
- (id)_stringForComponent:(int)arg1 index:(unsigned int)arg2;
- (BOOL)_useDoubleMonthStyle;
- (float)_widthForComponent:(int)arg1;
- (id)date;
- (id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (void)prepareToDie;
- (void)setDate:(id)arg1;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end
