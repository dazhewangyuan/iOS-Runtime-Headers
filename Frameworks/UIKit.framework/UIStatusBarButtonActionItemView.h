/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {
    UIButton * _button;
    UIButton * _externalButton;
    CALayer * _ringLayer;
    BOOL  _selected;
}

@property (nonatomic, readonly) BOOL extendsHitTestingFrame;
@property (nonatomic, retain) CALayer *ringLayer;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentsImageFrame;
- (id)_createButton;
- (void)_doubleTapButton:(id)arg1;
- (void)_pressAndHoldButton:(id)arg1;
- (void)_pressButton:(id)arg1;
- (void)_triggerButtonWithAction:(int)arg1;
- (int)buttonType;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)extendsHitTestingFrame;
- (id)highlightImage;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)ringLayer;
- (BOOL)selected;
- (void)setLayerHighlightImage:(id)arg1;
- (void)setRingLayer:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (float)updateContentsAndWidth;
- (BOOL)usesAdvancedActions;

@end
