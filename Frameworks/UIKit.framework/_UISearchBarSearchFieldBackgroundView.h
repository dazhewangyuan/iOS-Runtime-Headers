/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue {
    BOOL  _backgroundContainer;
    int  _barStyle;
    unsigned int  _searchBarStyle;
}

@property (nonatomic) BOOL backgroundContainer;
@property (nonatomic) int barStyle;
@property (nonatomic) unsigned int searchBarStyle;

- (id)_fillColor:(BOOL)arg1;
- (id)_strokeColor:(BOOL)arg1;
- (BOOL)backgroundContainer;
- (int)barStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(BOOL)arg2 updateView:(BOOL)arg3;
- (unsigned int)searchBarStyle;
- (void)setBackgroundContainer:(BOOL)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setSearchBarStyle:(unsigned int)arg1;
- (void)updateView;

@end
