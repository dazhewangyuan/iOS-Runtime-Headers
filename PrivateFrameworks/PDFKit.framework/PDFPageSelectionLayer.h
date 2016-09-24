/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageSelectionLayer : CALayer {
    PDFPageSelectionLayerPrivate * _private;
}

- (void).cxx_destruct;
- (id)_activeColor;
- (id)_createMagnifier;
- (struct CGImage { }*)_createMagnifierContentsImage:(struct CGSize { double x1; double x2; })arg1;
- (id)_createSelectionLollipop:(float)arg1 isLeftSide:(bool)arg2;
- (void)_generateRects;
- (void)_generateSelectionIsFirstPage:(bool)arg1 isLastPage:(bool)arg2;
- (id)_hashRectTransformPair:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGAffineTransform { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; double x_2_1_5; double x_2_1_6; } x2; }*)arg1;
- (id)_inactiveColor;
- (bool)_isTouchingHandle:(id)arg1 forPagePoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateGraphics;
- (void)_updateHandleGraphics;
- (void)_updateMagnifierGraphics;
- (void)dealloc;
- (id)init;
- (bool)isTouchingLeftHandle:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isTouchingRightHandle:(struct CGPoint { double x1; double x2; })arg1;
- (void)magnificationDidChange;
- (void)magnificationWillChange;
- (id)page;
- (void)setDisplayBox:(int)arg1;
- (void)setPage:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)updateRotation;
- (void)updateSelectionHandleGeometry;

@end
