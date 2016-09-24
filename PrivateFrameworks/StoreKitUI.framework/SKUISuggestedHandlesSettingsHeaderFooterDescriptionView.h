/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISuggestedHandlesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    NSMutableArray * _buttons;
    SKUISuggestedHandlesSettingsHeaderFooterDescription * _description;
    UILabel * _label;
}

+ (id)_helpLabelWithDescription:(id)arg1 forWidth:(float)arg2;
+ (struct CGSize { double x1; double x2; })preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(float)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(float)arg2 context:(id)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;

@end
