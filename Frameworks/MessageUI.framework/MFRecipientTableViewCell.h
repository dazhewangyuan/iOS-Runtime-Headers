/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecipientTableViewCell : UITableViewCell {
    UIImageView * _cellImageView;
    MFRecipientTableViewCellDetailView * _detailView;
    MFComposeRecipient * _recipient;
    BOOL  _shouldDimIrrelevantInformation;
    BOOL  _shouldHighlightCompleteMatches;
    BOOL  _shouldVerticallyCenterTitleLabel;
    UIColor * _tintColor;
    MFRecipientTableViewCellTitleView * _titleView;
}

@property (nonatomic) BOOL shouldDimIrrelevantInformation;
@property (nonatomic) BOOL shouldHighlightCompleteMatches;

+ (id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg1 constrainedToWidth:(float)arg2 overflowRecipients:(out id*)arg3 useHighlighting:(BOOL)arg4;
+ (id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg1 useHighlighting:(BOOL)arg2;
+ (float)_constrainedWidthForDetailViewWithAccessoryWidth:(float)arg1 containerWidth:(float)arg2;
+ (float)_constrainedWidthForTitleViewWithAccessoryWidth:(float)arg1 containerWidth:(float)arg2;
+ (id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg1 withSortedRecipientList:(id)arg2;
+ (id)_defaultTintColor;
+ (float)_deviceSpecificLayoutMargin;
+ (float)_realDetailButtonAccessoryMargin;
+ (id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(BOOL)arg3;
+ (id)cellForRecipient:(id)arg1;
+ (float)height;
+ (float)heightWithRecipient:(id)arg1 width:(float)arg2;
+ (id)identifier;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForDetailView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTitleView;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)recipient;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setOpaque:(BOOL)arg1;
- (void)setRecipient:(id)arg1;
- (void)setShouldDimIrrelevantInformation:(BOOL)arg1;
- (void)setShouldHighlightCompleteMatches:(BOOL)arg1;
- (void)setTintColor:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldDimIrrelevantInformation;
- (BOOL)shouldHighlightCompleteMatches;
- (id)tintColor;

@end
