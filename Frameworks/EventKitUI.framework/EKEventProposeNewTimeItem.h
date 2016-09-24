/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventProposeNewTimeItem : EKEventDetailItem {
    UITableViewCell * _cell;
    BOOL  _cellNeedsUpdate;
}

- (void).cxx_destruct;
- (void)_updateCellIfNeededForWidth:(float)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (void)reset;
- (void)setCellPosition:(int)arg1;

@end
