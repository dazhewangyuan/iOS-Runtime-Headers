/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKMedicalIDMultilineStringCell : UITableViewCell {
    NSString * _stringValue;
    UITextView * _textLabel;
    UILabel * _titleLabel;
}

@property (getter=isBodyTextInteractive, nonatomic) BOOL bodyTextInteractive;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isBodyTextInteractive;
- (void)layoutSubviews;
- (void)setBodyTextInteractive:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stringValue;
- (id)title;

@end
