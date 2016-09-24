/* Generated by RuntimeBrowser.
 */

@protocol TSCHSupportsTextEditing <NSObject>

@required

- (BOOL)canEditTextForSelectionPath:(TSCHSelectionPath *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEditingTextForSelectionPath:(TSCHSelectionPath *)arg1;
- (float)frameHeightChangeForPath:(TSCHSelectionPath *)arg1;
- (TSCHTextEditing *)textEditorForSelectionPath:(TSCHSelectionPath *)arg1 chartEditor:(TSCHChartEditor *)arg2;
- (void)useEditedString:(NSString *)arg1;

@end
