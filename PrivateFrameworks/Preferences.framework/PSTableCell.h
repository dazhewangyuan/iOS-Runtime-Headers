/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTableCell : UITableViewCell {
    int  _alignment;
    BOOL  _cellEnabled;
    BOOL  _checked;
    UIImageView * _checkedImageView;
    PSTableCellHighlightContext * _customHighlightContext;
    BOOL  _forceHideDisclosureIndicator;
    NSString * _hiddenTitle;
    BOOL  _isCopyable;
    BOOL  _lazyIcon;
    NSString * _lazyIconAppID;
    BOOL  _lazyIconDontUnload;
    BOOL  _lazyIconForceSynchronous;
    UILongPressGestureRecognizer * _longTapRecognizer;
    SEL  _pAction;
    id  _pTarget;
    BOOL  _reusedCell;
    BOOL  _shouldHideTitle;
    PSSpecifier * _specifier;
    int  _type;
    id  _value;
}

@property (nonatomic) BOOL forceHideDisclosureIndicator;
@property (nonatomic) BOOL isCopyable;
@property (nonatomic, retain) UILongPressGestureRecognizer *longTapRecognizer;
@property (nonatomic) BOOL reusedCell;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic) int type;

+ (Class)cellClassForSpecifier:(id)arg1;
+ (int)cellStyle;
+ (int)cellTypeFromString:(id)arg1;
+ (float)defaultCellHeight;
+ (id)reuseIdentifierForBasicCellTypes:(int)arg1;
+ (id)reuseIdentifierForClassAndType:(int)arg1;
+ (id)reuseIdentifierForSpecifier:(id)arg1;
+ (id)stringFromCellType:(int)arg1;

- (void).cxx_destruct;
- (id)_automationID;
- (id)_checkmarkImage:(BOOL)arg1;
- (id)_contentString;
- (id)_copyableText;
- (id)_disclosureChevronImage:(BOOL)arg1;
- (void)_invalidateHighlightContext;
- (void)_updateAccessoryTypeForSpecifier:(id)arg1;
- (SEL)action;
- (id)blankIcon;
- (BOOL)canBeChecked;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canReload;
- (SEL)cellAction;
- (BOOL)cellEnabled;
- (void)cellRemovedFromView;
- (id)cellTarget;
- (void)copy:(id)arg1;
- (void)dealloc;
- (BOOL)forceHideDisclosureIndicator;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (id)getIcon;
- (id)getLazyIcon;
- (id)getLazyIconID;
- (void)highlightCellForDuration:(double)arg1 animateUnighlight:(BOOL)arg2;
- (id)iconImageView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (BOOL)isChecked;
- (BOOL)isCopyable;
- (void)layoutSubviews;
- (id)lazyIconQueue:(id)arg1;
- (void)longPressed:(id)arg1;
- (id)longTapRecognizer;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2;
- (BOOL)reusedCell;
- (id)scriptingInfoWithChildren;
- (void)setAction:(SEL)arg1;
- (void)setAlignment:(int)arg1;
- (void)setCellAction:(SEL)arg1;
- (void)setCellEnabled:(BOOL)arg1;
- (void)setCellTarget:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)setForceHideDisclosureIndicator:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIcon:(id)arg1;
- (void)setIsCopyable:(BOOL)arg1;
- (void)setLongTapRecognizer:(id)arg1;
- (void)setReusedCell:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldHideTitle:(BOOL)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (id)specifier;
- (id)target;
- (float)textFieldOffset;
- (id)title;
- (id)titleLabel;
- (id)titleTextLabel;
- (int)type;
- (id)value;
- (id)valueLabel;

@end
