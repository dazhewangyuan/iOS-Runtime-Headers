/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate> {
    HKMedicalIDEditorMultilineStringCell * _editableCell;
    _HKMedicalIDMultilineStringCell * _labelCell;
    <HKEmergencyCardRowHeightChangeDelegate> * _rowHeightChangeDelegate;
}

@property (nonatomic) <HKEmergencyCardRowHeightChangeDelegate> *rowHeightChangeDelegate;

- (void).cxx_destruct;
- (id)_cell;
- (float)_cellFittedHeightWithWidth:(float)arg1;
- (void)_configureEditableCell:(id)arg1;
- (id)_editableCell;
- (id)_labelCell;
- (id)_multilineStringValue;
- (id)_placeholderText;
- (void)_updateMultilineStringValueWithValue:(id)arg1;
- (void)commitEditing;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(float)arg2 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (id)rowHeightChangeDelegate;
- (void)setData:(id)arg1;
- (void)setRowHeightChangeDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;

@end
