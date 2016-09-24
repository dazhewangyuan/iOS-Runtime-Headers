/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKHighlightAnnotationRenderer : AKAnnotationRenderer

+ (struct CGSize { double x1; double x2; })_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(float)arg3;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext { }*)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (void)_enumerateQuadPathsOfAnnotation:(id)arg1 applyStyle:(BOOL)arg2 handler:(id /* block */)arg3;
+ (float)_highlightOutsetFactor;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForQuad:(struct AKQuadrilateral { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg1 rotationAngle:(float*)arg2;

@end
