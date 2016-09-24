/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRotatingAlertController : UIAlertController {
    unsigned int  _arrowDirections;
    BOOL  _isRotating;
    <UIPopoverPresentationControllerDelegate> * _popoverPresentationControllerDelegateWhileRotating;
    UIViewController * _presentedViewControllerWhileRotating;
    BOOL  _readyToPresentAfterRotation;
    <_UIRotatingAlertControllerDelegate> * _rotatingSheetDelegate;
}

@property (nonatomic) unsigned int arrowDirections;
@property (nonatomic) <_UIRotatingAlertControllerDelegate> *rotatingSheetDelegate;

- (void).cxx_destruct;
- (void)_didRotateAndLayout;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (BOOL)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_updateSheetPositionAfterRotation;
- (unsigned int)arrowDirections;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)doneWithSheet;
- (id)init;
- (BOOL)presentSheet;
- (BOOL)presentSheetFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)rotatingSheetDelegate;
- (void)setArrowDirections:(unsigned int)arg1;
- (void)setRotatingSheetDelegate:(id)arg1;
- (void)willRotate:(id)arg1;

@end
