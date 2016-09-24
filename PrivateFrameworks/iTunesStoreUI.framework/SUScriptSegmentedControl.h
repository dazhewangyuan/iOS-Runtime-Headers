/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSegmentedControl : SUScriptObject {
    NSArray * _segments;
    int  _style;
}

@property (nonatomic, readonly) SUSegmentedControl *activeSegmentedControl;
@property (copy) NSString *cancelButtonTitle;
@property (readonly) unsigned int controlStateDisabled;
@property (readonly) unsigned int controlStateHighlighted;
@property (readonly) unsigned int controlStateNormal;
@property (readonly) unsigned int controlStateSelected;
@property int maximumNumberOfItems;
@property double maximumWidth;
@property (copy) NSString *moreListTitle;
@property (nonatomic, retain) SUSegmentedControl *nativeSegmentedControl;
@property (nonatomic, readonly) int nativeSelectedIndex;
@property (readonly) NSNumber *noSegmentIndex;
@property (nonatomic, readonly) NSArray *rawSegments;
@property (retain) id segments;
@property (retain) NSNumber *selectedIndex;
@property (readonly) NSNumber *selectedSegmentIndex;
@property (copy) id showsMoreListAutomatically;
@property (nonatomic, readonly) SUStorePageViewController *storePageViewController;
@property (retain) NSString *style;
@property (copy) id tintColor;
@property int tintStyle;
@property (readonly) int tintStyleDark;
@property (readonly) int tintStyleDefault;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_newNativeSegmentedControl;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
- (int)_sectionsStyleForString:(id)arg1;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned int)arg3;
- (void)_setRawSegments:(id)arg1;
- (id)activeSegmentedControl;
- (id)attributeKeys;
- (id)cancelButtonTitle;
- (unsigned int)controlStateDisabled;
- (unsigned int)controlStateHighlighted;
- (unsigned int)controlStateNormal;
- (unsigned int)controlStateSelected;
- (void)dealloc;
- (void)hideMoreListAnimated:(BOOL)arg1;
- (id)initWithPageSectionGroup:(id)arg1;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (int)maximumNumberOfItems;
- (float)maximumWidth;
- (id)moreListTitle;
- (id)nativeSegmentedControl;
- (int)nativeSelectedIndex;
- (id)newPageSectionGroup;
- (id)noSegmentIndex;
- (id)rawSegments;
- (id)scriptAttributeKeys;
- (id)segments;
- (id)selectedIndex;
- (id)selectedSegmentIndex;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setMaximumNumberOfItems:(int)arg1;
- (void)setMaximumWidth:(float)arg1;
- (void)setMoreListTitle:(id)arg1;
- (void)setNativeSegmentedControl:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)setShowsMoreListAutomatically:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintStyle:(int)arg1;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned int)arg2;
- (void)showMoreListAnimated:(BOOL)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(int)arg2 animated:(BOOL)arg3;
- (id)showsMoreListAutomatically;
- (id)storePageViewController;
- (id)style;
- (id)tintColor;
- (int)tintStyle;
- (int)tintStyleDark;
- (int)tintStyleDefault;
- (id)titleColorForControlState:(unsigned int)arg1;
- (id)titleShadowColorForControlState:(unsigned int)arg1;

@end
