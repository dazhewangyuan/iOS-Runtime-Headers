/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem

- (struct CGSize { double x1; double x2; })calcMinSize;
- (id)initWithParent:(id)arg1;
- (id)labelStringForAxis:(id)arg1 index:(unsigned int)arg2;
- (unsigned int)numberOfLabelsForAxis:(id)arg1;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg1 axis:(id)arg2;
- (id)selectionPathLabelType;
- (BOOL)showLabelsForAxis:(id)arg1;
- (unsigned int)strideInLayoutArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned int)arg2;

@end
