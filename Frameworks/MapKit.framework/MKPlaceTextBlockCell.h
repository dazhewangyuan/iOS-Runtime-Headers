/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceTextBlockCell : MKPlaceSectionRowView {
    BOOL  _constraintsAdded;
    NSArray * _marginConstraints;
    MKExpandingLabel * _textBlock;
    NSString * _textBlockText;
}

@property (nonatomic) BOOL constraintsAdded;
@property (nonatomic, retain) NSArray *marginConstraints;
@property (nonatomic, retain) MKExpandingLabel *textBlock;
@property (getter=isTextBlockExpanded, nonatomic) BOOL textBlockExpanded;
@property (nonatomic, copy) id /* block */ textBlockResizedBlock;
@property (nonatomic, copy) NSString *textBlockText;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_refreshLayoutMargins;
- (BOOL)constraintsAdded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isTextBlockExpanded;
- (void)layoutMarginsDidChange;
- (id)marginConstraints;
- (void)setConstraintsAdded:(BOOL)arg1;
- (void)setMarginConstraints:(id)arg1;
- (void)setTextBlock:(id)arg1;
- (void)setTextBlockExpanded:(BOOL)arg1;
- (void)setTextBlockResizedBlock:(id /* block */)arg1;
- (void)setTextBlockText:(id)arg1;
- (id)textBlock;
- (id /* block */)textBlockResizedBlock;
- (id)textBlockText;
- (void)updateConstraints;

@end
