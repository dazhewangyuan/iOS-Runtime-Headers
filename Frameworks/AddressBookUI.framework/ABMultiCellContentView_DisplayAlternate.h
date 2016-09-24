/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows {
    UILabel * _displayLabel;
}

@property (nonatomic, readonly) NSString *displayText;

+ (id)displayLabelForReuse;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayLabelFrameForValueViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 whenEditing:(BOOL)arg3;
+ (struct CGSize { double x1; double x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { double x1; double x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (struct CGSize { double x1; double x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { double x1; double x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 includeRows:(BOOL)arg7;
+ (void)numberOfLines:(int*)arg1 lineBreakMode:(int*)arg2 forDisplayLabelWithPropertyGroup:(id)arg3 styleProvider:(id)arg4;
+ (void)setupDisplayLabel:(id)arg1 withPropertyGroup:(id)arg2 styleProvider:(id)arg3;

- (id)displayText;
- (void)reload;
- (void)reloadDisplayText;
- (void)reloadFromModel;
- (void)reloadFromModelIncludingRows:(BOOL)arg1;
- (void)reloadIncludingRows:(BOOL)arg1 includingDisplayView:(BOOL)arg2;
- (void)setAbCellStyle:(int)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueTextRect;

@end
