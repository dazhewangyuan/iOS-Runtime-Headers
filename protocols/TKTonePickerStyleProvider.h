/* Generated by RuntimeBrowser.
 */

@protocol TKTonePickerStyleProvider <NSObject>

@required

- (UIView *)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (UIView *)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1;
- (UIColor *)tonePickerCellBackgroundColor;
- (UIColor *)tonePickerCellHighlightedTextColor;
- (UIColor *)tonePickerCellTextColor;
- (UIFont *)tonePickerCellTextFont;
- (UIColor *)tonePickerHeaderTextColor;
- (UIFont *)tonePickerHeaderTextFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tonePickerHeaderTextPaddingInsets;
- (UIColor *)tonePickerHeaderTextShadowColor;
- (struct UIOffset { double x1; double x2; })tonePickerHeaderTextShadowOffset;
- (int)tonePickerTableViewSeparatorStyle;
- (BOOL)tonePickerUsesOpaqueBackground;
- (BOOL)wantsCustomTonePickerHeaderView;

@optional

- (int)tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
- (UIColor *)tonePickerCustomTableSeparatorColor;
- (BOOL)tonePickerHeaderTextShouldBeUppercase;

@end
