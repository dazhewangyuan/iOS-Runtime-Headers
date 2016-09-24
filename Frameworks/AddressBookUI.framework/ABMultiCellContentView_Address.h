/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate {
    unsigned int  _entryFieldIndexOfFirstStreetField;
    NSArray * _lineInfos;
    NSMutableArray * _lineSubviews;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _streetRange;
    NSMutableArray * _verticalDividers;
}

+ (int)calculateStreetRowsForText:(id)arg1;
+ (struct CGSize { double x1; double x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { double x1; double x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (id)lineInfosForPropertyGroup:(id)arg1 info:(id)arg2;
+ (unsigned int)rowsForPropertyGroup:(id)arg1 info:(id)arg2;
+ (id)streetTextForPropertyGroup:(id)arg1 info:(id)arg2;

- (void)addStreetFieldAnimated:(BOOL)arg1;
- (void)dealloc;
- (unsigned int)lineIndexOfStreetField:(id)arg1;
- (id)pickerView;
- (id)propertyKeyForTag:(int)arg1;
- (void)reload;
- (void)reloadFromModel;
- (void)removeStreetFieldAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)removeTextFieldAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPropertyGroupInfo:(id)arg1;
- (id)streetFieldAtLineIndex:(unsigned int)arg1;
- (int)tagForPropertyKey:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;

@end
