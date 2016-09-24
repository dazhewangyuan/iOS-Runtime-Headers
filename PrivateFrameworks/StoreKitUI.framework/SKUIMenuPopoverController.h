/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuPopoverController : NSObject <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    <SKUIMenuPopoverDelegate> * _delegate;
    SKUIMenuViewController * _menuViewController;
    UIPopoverController * _popoverController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIMenuPopoverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *menuTitles;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_destroyPopoverController;
- (void)dealloc;
- (id)delegate;
- (void)dismissAnimated:(BOOL)arg1;
- (id)initWithMenuTitles:(id)arg1;
- (id)initWithMenuTitles:(id)arg1 selectedIndex:(int)arg2;
- (id)menuTitles;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4;
- (void)setDelegate:(id)arg1;

@end
