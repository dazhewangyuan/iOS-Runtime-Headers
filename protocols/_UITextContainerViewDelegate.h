/* Generated by RuntimeBrowser.
 */

@protocol _UITextContainerViewDelegate

@required

- (BOOL)isEditableForTextContainerView:(_UITextContainerView *)arg1;
- (NSDictionary *)linkTextAttributesForTextContainerView:(_UITextContainerView *)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRangeForTextContainerView:(_UITextContainerView *)arg1;
- (CUICatalog *)textContainerView:(_UITextContainerView *)arg1 cuiCatalogForTextEffectName:(NSString *)arg2;
- (NSDictionary *)textContainerView:(_UITextContainerView *)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(unsigned int)arg3;
- (void)updateSelectionForTextContainerView:(_UITextContainerView *)arg1;

@end
