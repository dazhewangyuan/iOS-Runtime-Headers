/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRayPickRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DDataBuffer * mBuffer;
    NSMutableArray * mPickedPoints;
    struct tvec2<float> { 
        union { 
            double x; 
            double r; 
            double s; 
        } ; 
        union { 
            double y; 
            double g; 
            double t; 
        } ; 
    }  mPosition;
    TSCH3DRayPickPipelineDelegate * mSceneObjectDelegate;
    double  mSlack;
}

@property (nonatomic, readonly) NSArray *pickedPoints;
@property (nonatomic) struct tvec2<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } position;
@property (nonatomic, retain) TSCH3DRayPickPipelineDelegate *sceneObjectDelegate;
@property (nonatomic) double slack;

- (id).cxx_construct;
- (void)dealloc;
- (void)geometry:(id)arg1;
- (id)init;
- (id)matrix;
- (id)pickedPoints;
- (struct tvec2<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })position;
- (id)sceneObjectDelegate;
- (void)setPosition:(struct tvec2<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg1;
- (void)setSceneObjectDelegate:(id)arg1;
- (void)setSlack:(float)arg1;
- (float)slack;
- (void)submit:(const /* Warning: unhandled struct encoding: '{PrimitiveInfo=iii@}' */ struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;

@end
