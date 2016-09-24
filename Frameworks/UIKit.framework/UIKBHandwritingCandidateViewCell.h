/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell {
    TIKeyboardCandidate * _candidate;
    UILabel * _label;
    int  _leftBorderEdge;
    UIKeyboardCandidatePocketShadow * _leftHardBorder;
    int  _rightBorderEdge;
    UIKeyboardCandidatePocketShadow * _rightHardBorder;
    UILabel * _secondaryLabel;
    UIKBThemedView * _themedView;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    }  _visualStyling;
}

@property (nonatomic, copy) TIKeyboardCandidate *candidate;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) int leftBorderEdge;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *leftHardBorder;
@property (nonatomic) int rightBorderEdge;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *rightHardBorder;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIKBThemedView *themedView;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;

+ (id)labelFontForText:(id)arg1;
+ (BOOL)needsThemedView;
+ (id)secondaryLabelFont;
+ (float)systemFontSize;
+ (float)widthForCandidate:(id)arg1 visualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2;

- (void).cxx_destruct;
- (BOOL)_canDrawContent;
- (void)_setRenderConfig:(id)arg1;
- (void)_updateBorders;
- (id)candidate;
- (void)didMoveToWindow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (int)leftBorderEdge;
- (id)leftHardBorder;
- (void)reloadData;
- (int)rightBorderEdge;
- (id)rightHardBorder;
- (id)secondaryLabel;
- (void)setCandidate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLeftBorderEdge:(int)arg1;
- (void)setLeftHardBorder:(id)arg1;
- (void)setRightBorderEdge:(int)arg1;
- (void)setRightHardBorder:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setThemedView:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (id)textLabelColor;
- (id)themedView;
- (void)updateLabels;
- (void)updateThemedView;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;

@end
