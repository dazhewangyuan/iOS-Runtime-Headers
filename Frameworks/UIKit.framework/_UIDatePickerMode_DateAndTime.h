/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerMode_DateAndTime : _UIDatePickerMode {
    NSString * _hourFormat;
    NSString * _minuteFormat;
    NSString * _monthDayFormat;
    NSDateFormatter * _relativeFormatter;
    NSString * _weekdayFormat;
    NSDateFormatter * _weekdayFormatter;
    BOOL  _weekdayLast;
    double  _wmdAMPMWidth;
    double  _wmdHourWidth;
    double  _wmdMinuteWidth;
    double  _wmdWeekMonthDayWidth;
    double  _wmdWeekdayWidth;
}

+ (int)datePickerMode;
+ (unsigned int)extractableCalendarUnits;

- (void).cxx_destruct;
- (id)_dateForWeekMonthDayRow:(int)arg1;
- (void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (BOOL)_shouldEnableWeekMonthDayForRow:(int)arg1;
- (void)_shouldReset:(id)arg1;
- (void)_takeBaseDateComponentsFromDate:(id)arg1;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 usingSelectionBarValue:(BOOL)arg2;
- (id)baseDateComponents;
- (float)componentWidthForDateTimeCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (id)dateForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (int)displayedCalendarUnits;
- (unsigned int*)elements;
- (BOOL)isWeekdayLast;
- (void)loadDate:(id)arg1 animated:(BOOL)arg2;
- (id)localizedFormatString;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (void)noteCalendarChanged;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (id)relativeFormatter;
- (void)resetComponentWidths;
- (int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4;
- (id)titleForRow:(int)arg1 inComponent:(int)arg2;
- (void)updateEnabledStateOfViewForRow:(int)arg1 inComponent:(int)arg2;
- (id)viewForRow:(int)arg1 inComponent:(int)arg2 reusingView:(id)arg3;
- (id)weekdayFormatter;
- (float)weekdayWidth;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;

@end
