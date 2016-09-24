/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerMode_Time : _UIDatePickerMode {
    NSString * _hourFormat;
    NSString * _minuteFormat;
    double  _timeAMPMWidth;
    double  _timeHourWidth;
    double  _timeMinuteWidth;
}

+ (int)datePickerMode;
+ (unsigned int)extractableCalendarUnits;

- (void).cxx_destruct;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (void)_shouldReset:(id)arg1;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (int)displayedCalendarUnits;
- (id)font;
- (id)localizedFormatString;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (void)noteCalendarChanged;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (void)resetComponentWidths;
- (float)rowHeight;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;

@end
