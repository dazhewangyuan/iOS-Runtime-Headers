/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationControllerPalette : UIView {
    NSArray * __backgroundConstraints;
    NSArray * __constraints;
    BOOL  __paletteOverridesPinningBar;
    BOOL  __palettePinningBarHidden;
    id  __pinningBar;
    struct CGSize { 
        double width; 
        double height; 
    }  __size;
    UIViewController * __unpinnedController;
    _UIBarBackground * _backgroundView;
    unsigned int  _boundaryEdge;
    UINavigationController * _navController;
    struct { 
        unsigned int isAttached : 1; 
        unsigned int attachmentIsChanging : 1; 
        unsigned int restartPaletteTransitionIfNecessary : 1; 
        unsigned int pinned : 1; 
        unsigned int pinningBarShadowIsHidden : 1; 
        unsigned int paletteShadowIsHidden : 1; 
    }  _paletteFlags;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredContentInsets;
    BOOL  _visibleWhenPinningBarIsHidden;
}

@property (getter=_attachmentIsChanging, nonatomic, readonly) BOOL _attachmentIsChanging;
@property (setter=_setBackgroundConstraints:, nonatomic, retain) NSArray *_backgroundConstraints;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setConstraints:, nonatomic, retain) NSArray *_constraints;
@property (setter=_setPaletteOverridesPinningBar:, nonatomic) BOOL _paletteOverridesPinningBar;
@property (getter=_isPalettePinningBarHidden, setter=_setPalettePinningBarHidden:, nonatomic) BOOL _palettePinningBarHidden;
@property (setter=_setPinningBar:, nonatomic) id _pinningBar;
@property (setter=_setRestartPaletteTransitionIfNecessary:, nonatomic) BOOL _restartPaletteTransitionIfNecessary;
@property (setter=_setSize:, nonatomic) struct CGSize { double x1; double x2; } _size;
@property (nonatomic) UIViewController *_unpinnedController;
@property (nonatomic, readonly) unsigned int boundaryEdge;
@property (nonatomic, readonly) UINavigationController *navController;
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (getter=isPinned, nonatomic) BOOL pinned;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredContentInsets;
@property (getter=isVisibleWhenPinningBarIsHidden, nonatomic) BOOL visibleWhenPinningBarIsHidden;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (BOOL)_attachmentIsChanging;
- (id)_backgroundConstraints;
- (id)_backgroundView;
- (void)_configureConstraintsForBackground:(id)arg1;
- (void)_configurePaletteConstraintsForBoundary;
- (id)_constraints;
- (void)_disableConstraints;
- (void)_enableConstraints;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned int)arg2;
- (BOOL)_isPalettePinningBarHidden;
- (BOOL)_paletteOverridesPinningBar;
- (id)_pinningBar;
- (void)_resetConstraintConstants:(float)arg1;
- (void)_resetHeightConstraintConstant;
- (BOOL)_restartPaletteTransitionIfNecessary;
- (void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)_setAttachmentIsChanging:(BOOL)arg1;
- (void)_setBackgroundConstraints:(id)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setConstraints:(id)arg1;
- (void)_setLeftConstraintConstant:(float)arg1;
- (void)_setPaletteOverridesPinningBar:(BOOL)arg1;
- (void)_setPalettePinningBarHidden:(BOOL)arg1;
- (void)_setPinningBar:(id)arg1;
- (void)_setRestartPaletteTransitionIfNecessary:(BOOL)arg1;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTopConstraintConstant:(float)arg1;
- (void)_setVisualAltitude:(float)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupBackgroundViewIfNecessary;
- (struct CGSize { double x1; double x2; })_size;
- (id)_unpinnedController;
- (void)_updateBackgroundView;
- (unsigned int)boundaryEdge;
- (void)dealloc;
- (void)didMoveToSuperview;
- (BOOL)isAttached;
- (BOOL)isPinned;
- (BOOL)isVisibleWhenPinningBarIsHidden;
- (id)navController;
- (BOOL)paletteIsHidden;
- (BOOL)paletteShadowIsHidden;
- (BOOL)pinningBarShadowIsHidden;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredContentInsets;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isAnimating:(BOOL)arg2;
- (void)setPaletteShadowIsHidden:(BOOL)arg1;
- (void)setPinned:(BOOL)arg1;
- (void)setPinningBarShadowIsHidden:(BOOL)arg1;
- (void)setPreferredContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1;
- (void)set_unpinnedController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void)__ck_setPaletteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (void)SKUI_beginHidingPaletteShadow;
- (void)SKUI_endHidingPaletteShadow;
- (void)resetBackgroundConstraints;

@end
