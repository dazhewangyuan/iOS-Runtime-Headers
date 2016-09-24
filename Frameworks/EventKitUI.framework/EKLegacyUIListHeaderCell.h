/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKLegacyUIListHeaderCell : UIView {
    EKLegacyUIListHeaderCellContentView * _contentView;
    BOOL  _showWeekNumber;
}

@property (nonatomic) double date;
@property (nonatomic) BOOL indentsForDots;
@property (nonatomic, readonly) BOOL reusable;
@property (nonatomic) BOOL showWeekNumber;

- (void).cxx_destruct;
- (id)_backgroundImage;
- (double)date;
- (BOOL)indentsForDots;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 date:(double)arg2;
- (BOOL)reusable;
- (void)setDate:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndentsForDots:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setOpaque:(BOOL)arg1;
- (void)setShowWeekNumber:(BOOL)arg1;
- (BOOL)showWeekNumber;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
