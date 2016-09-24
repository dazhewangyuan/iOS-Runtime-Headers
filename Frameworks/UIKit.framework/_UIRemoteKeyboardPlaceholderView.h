/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedSize;
    UIView * _mirroredView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } fixedSize;
@property (readonly) unsigned int hash;
@property (readonly, retain) UIView *placeheldView;
@property (readonly) Class superclass;

+ (id)placeholderForView:(id)arg1;
+ (id)placeholderWithWidth:(float)arg1 height:(float)arg2;

- (void)_beginSplitTransitionIfNeeded:(float)arg1 gapWidth:(float)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_compatibleBounds;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (void)_setLeftOffset:(float)arg1 gapWidth:(float)arg2;
- (void)_setProgress:(float)arg1 boundedBy:(float)arg2;
- (void)dealloc;
- (id)description;
- (void)didEndSplitTransition;
- (struct CGSize { double x1; double x2; })fixedSize;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutMergedSubviews;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { double x1; double x2; })arg1 rightContentSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })leftContentViewSize;
- (id)placeheldView;
- (BOOL)refreshPlaceholder;
- (struct CGSize { double x1; double x2; })rightContentViewSize;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateMergedSubviewConstraints;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { double x1; double x2; })arg1 rightContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)willBeginSplitTransition;

@end
