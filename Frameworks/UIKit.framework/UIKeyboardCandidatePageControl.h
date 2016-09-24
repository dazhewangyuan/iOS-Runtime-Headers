/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidatePageControl : UIView {
    UIKeyboardCandidateBarSegmentControl * _pageControl;
    BOOL  _usingVerticalArrows;
}

+ (id)imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void)_changePage:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setUseVerticalArrows:(BOOL)arg1;
- (void)updatePageControlWithStatus:(BOOL)arg1 rightControlButtonEnabled:(BOOL)arg2;

@end
