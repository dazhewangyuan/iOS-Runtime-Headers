/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDatePickerContentView : UIView {
    struct { 
        unsigned int isAmPm : 1; 
    }  _datePickerContentViewFlags;
    BOOL  _isModern;
    _UIDatePickerMode * _mode;
    int  _titleAlignment;
    UILabel * _titleLabel;
    double  _titleLabelMaxX;
}

@property (nonatomic) BOOL isAmPm;
@property (nonatomic) BOOL isModern;
@property (nonatomic, retain) _UIDatePickerMode *mode;
@property (nonatomic) int titleAlignment;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double titleLabelMaxX;

- (void).cxx_destruct;
- (BOOL)_canBeReusedInPickerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMode:(id)arg1;
- (BOOL)isAmPm;
- (BOOL)isModern;
- (void)layoutSubviews;
- (id)mode;
- (void)setIsAmPm:(BOOL)arg1;
- (void)setIsModern:(BOOL)arg1;
- (void)setMode:(id)arg1;
- (void)setTitleAlignment:(int)arg1;
- (void)setTitleLabelMaxX:(float)arg1;
- (int)titleAlignment;
- (id)titleLabel;
- (float)titleLabelMaxX;

@end
