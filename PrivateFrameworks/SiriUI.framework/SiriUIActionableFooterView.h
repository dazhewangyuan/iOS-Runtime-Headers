/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIActionableFooterView : SiriUIReusableFooterView {
    UIButton * _button;
    <SiriUIActionableFooterViewDelegate> * _delegate;
    BOOL  _hasKeyline;
    SiriUIKeyline * _keyline;
    SiriUISnippetViewController * _snippetViewController;
}

@property (nonatomic) <SiriUIActionableFooterViewDelegate> *delegate;
@property (nonatomic) BOOL hasKeyline;
@property (nonatomic, copy) NSString *title;

+ (float)defaultHeight;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (BOOL)hasKeyline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setHasKeyline:(BOOL)arg1;
- (void)setSnippetViewController:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)snippetViewController;
- (id)title;

@end
