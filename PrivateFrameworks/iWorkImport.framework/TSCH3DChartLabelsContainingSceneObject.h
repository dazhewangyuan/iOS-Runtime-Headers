/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartLabelsContainingSceneObject : TSCH3DSceneObject {
    TSCH3DLabelsRenderer * mLabelsRenderer;
}

- (void)dealloc;
- (void)dispatchElementLabelHandler:(id /* block */)arg1;
- (void)getBounds:(id)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (id)init;
- (int)knobsModeForLabelType:(int)arg1 scene:(id)arg2;
- (id)labelsRenderer;
- (void)p_render:(id)arg1 selector:(SEL)arg2;
- (void)postGetBounds:(id)arg1;
- (void)postRenderBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)primeRenderCaches:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)render:(id)arg1;
- (void)renderAnnotatedLabels:(id)arg1;
- (void)renderLabelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { id x1; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x2; void x3; void*x4; BOOL x5; void*x6; void*x7; int x8; in void*x9; void*x10; void*x11; union { int x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; }*)arg1;
- (void)renderLabels:(id)arg1;
- (void)renderLabelsResourcesSessionWithResources:(id)arg1 expectedSize:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 pipeline:(id)arg3 renderBlock:(id /* block */)arg4;

@end
