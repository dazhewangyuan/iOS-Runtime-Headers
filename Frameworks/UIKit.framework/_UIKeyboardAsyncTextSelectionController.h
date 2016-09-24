/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardAsyncTextSelectionController : _UIKeyboardTextSelectionController {
    BOOL  _shouldDelayShowSelectionCommands;
}

- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(int)arg1 initialExtentPoint:(struct CGPoint { double x1; double x2; })arg2 executionContext:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForLeftmostSelectedPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForRightmostSelectedPosition;
- (BOOL)cursorPositionIsContainedByRange:(id)arg1;
- (void)endFloatingCursor;
- (void)selectPositionAtBoundary:(int)arg1 inDirection:(int)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)selectPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)selectTextWithGranularity:(int)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)selectTextWithGranularity:(int)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 executionContext:(id)arg3;
- (void)showSelectionCommands;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionWithExtentAtBoundary:(int)arg1 inDirection:(int)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 withBoundary:(int)arg2 executionContext:(id)arg3;

@end
