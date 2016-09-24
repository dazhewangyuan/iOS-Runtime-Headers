/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxisLabelStyle : NSObject <NSCopying> {
    UIFont * _font;
    int  _horizontalAlignment;
    UIColor * _textColor;
    int  _verticalAlignment;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) int horizontalAlignment;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic) int verticalAlignment;

+ (id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(int)arg3 verticalAlignment:(int)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)font;
- (int)horizontalAlignment;
- (void)setFont:(id)arg1;
- (void)setHorizontalAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (id)textColor;
- (int)verticalAlignment;

@end
