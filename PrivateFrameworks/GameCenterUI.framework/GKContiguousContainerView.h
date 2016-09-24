/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKContiguousContainerView : UIView {
    BOOL  _applyOrthogonalConstraints;
    UIView * _baselineView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    double  _overlap;
    NSArray * _replaceableConstraints;
    BOOL  _vertical;
}

@property (nonatomic) BOOL applyOrthogonalConstraints;
@property (nonatomic) UIView *baselineView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) double overlap;
@property (nonatomic, retain) NSArray *replaceableConstraints;
@property (nonatomic) BOOL vertical;

+ (id)containerForViewsFontsLeadings:(id)arg1 options:(int)arg2;
+ (id)containerViewForViews:(id)arg1 overlap:(float)arg2 vertical:(BOOL)arg3;
+ (id)containerViewForViews:(id)arg1 overlap:(float)arg2 vertical:(BOOL)arg3 applyOrthogonalConstraints:(BOOL)arg4;

- (void)_addContiguousSubviews:(id)arg1;
- (BOOL)applyOrthogonalConstraints;
- (id)baselineView;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (float)overlap;
- (void)replaceSubviews:(id)arg1;
- (id)replaceableConstraints;
- (void)setApplyOrthogonalConstraints:(BOOL)arg1;
- (void)setBaselineView:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOverlap:(float)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (void)setVertical:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)vertical;
- (id)viewForBaselineLayout;

@end
