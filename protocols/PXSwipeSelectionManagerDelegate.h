/* Generated by RuntimeBrowser.
 */

@protocol PXSwipeSelectionManagerDelegate <NSObject>

@required

- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;

@optional

- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
