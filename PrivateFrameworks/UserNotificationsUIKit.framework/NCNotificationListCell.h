/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCell : UICollectionViewCell <NCContentSizeCategoryAdjusting, UIScrollViewDelegate> {
    BOOL  _actionButtonsFullyRevealed;
    NCNotificationListCellActionButtonsView * _actionButtonsView;
    BOOL  _adjustsFontForContentSizeCategory;
    BOOL  _backgroundBlurred;
    NCNotificationListCellScrollView * _cellScrollView;
    UIView * _clippingRevealView;
    BOOL  _configured;
    NCNotificationViewController * _contentViewController;
    <NCNotificationListCellDelegate> * _delegate;
    BOOL  _executingDefaultAction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _fullActionsRevealContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialContentOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetMargins;
    BOOL  _supportsSwipeToDefaultAction;
}

@property (getter=isActionButtonsFullyRevealed, nonatomic) BOOL actionButtonsFullyRevealed;
@property (nonatomic, retain) NCNotificationListCellActionButtonsView *actionButtonsView;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) BOOL backgroundBlurred;
@property (nonatomic, retain) NCNotificationListCellScrollView *cellScrollView;
@property (nonatomic, retain) UIView *clippingRevealView;
@property (getter=isConfigured, nonatomic) BOOL configured;
@property (nonatomic, retain) NCNotificationViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExecutingDefaultAction, nonatomic) BOOL executingDefaultAction;
@property (nonatomic) struct CGPoint { double x1; double x2; } fullActionsRevealContentOffset;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialContentOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetMargins;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSwipeToDefaultAction;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_absoluteContentOffsetForLogicalOffset:(float)arg1;
- (float)_actionButtonsViewAlphaForPercentRevealed:(float)arg1;
- (float)_actionButtonsViewPercentRevealedForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (float)_actionButtonsViewWidthWithMargin;
- (void)_adjustCellScrollViewAfterLayout;
- (float)_cellWidth;
- (void)_configureActionButtonsViewHierarchyForPercentRevealed:(float)arg1;
- (void)_configureActionButtonsViewIfNecessary;
- (void)_configureCellScrollViewIfNecessary;
- (void)_configureClippingRevealViewIfNecessary;
- (void)_configureContentOffsets;
- (void)_configureFullActionsRevealContentOffset;
- (void)_configureInitialContentOffset;
- (float)_defaultActionExecuteThreshold;
- (float)_defaultActionOvershootContentOffset;
- (float)_defaultActionTriggerThreshold;
- (BOOL)_disableRasterizeInAnimations;
- (void)_executeDefaultActionIfCompleted;
- (void)_layoutActionButtonsView;
- (void)_layoutClippingRevealView;
- (void)_layoutContentView;
- (void)_layoutScrollView;
- (float)_logicalContentOffsetForAbsoluteOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_revealActionButtonsViewForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_scrollViewDidFinishScrolling:(id)arg1;
- (id)actionButtonsView;
- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)adjustsFontForContentSizeCategory;
- (void)cellActionButtonPressed:(id)arg1;
- (void)cellClearButtonPressed:(id)arg1;
- (void)cellOpenButtonPressed:(id)arg1;
- (id)cellScrollView;
- (id)clippingRevealView;
- (id)contentViewController;
- (void)dealloc;
- (id)delegate;
- (struct CGPoint { double x1; double x2; })fullActionsRevealContentOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })initialContentOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetMargins;
- (BOOL)isActionButtonsFullyRevealed;
- (BOOL)isBackgroundBlurred;
- (BOOL)isConfigured;
- (BOOL)isExecutingDefaultAction;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetCellScrollPositionAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setActionButtonsFullyRevealed:(BOOL)arg1;
- (void)setActionButtonsView:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)arg1;
- (void)setBackgroundBlurred:(BOOL)arg1;
- (void)setCellScrollView:(id)arg1;
- (void)setClippingRevealView:(id)arg1;
- (void)setConfigured:(BOOL)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutingDefaultAction:(BOOL)arg1;
- (void)setFullActionsRevealContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInsetMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSupportsSwipeToDefaultAction:(BOOL)arg1;
- (BOOL)supportsSwipeToDefaultAction;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCellForContentViewController:(id)arg1;

@end
