/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObjectInternal : NSObject {
    int  _faceID;
    BOOL  _hasLeftEyeBounds;
    BOOL  _hasLeftEyeClosedConfidence;
    BOOL  _hasRightEyeBounds;
    BOOL  _hasRightEyeClosedConfidence;
    BOOL  _hasRollAngle;
    BOOL  _hasSmileConfidence;
    BOOL  _hasYawAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _leftEyeBounds;
    int  _leftEyeClosedConfidence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rightEyeBounds;
    int  _rightEyeClosedConfidence;
    double  _rollAngle;
    int  _smileConfidence;
    double  _yawAngle;
}

@property (nonatomic) int faceID;
@property (nonatomic) BOOL hasLeftEyeBounds;
@property (nonatomic) BOOL hasLeftEyeClosedConfidence;
@property (nonatomic) BOOL hasRightEyeBounds;
@property (nonatomic) BOOL hasRightEyeClosedConfidence;
@property (nonatomic) BOOL hasRollAngle;
@property (nonatomic) BOOL hasSmileConfidence;
@property (nonatomic) BOOL hasYawAngle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftEyeBounds;
@property (nonatomic) int leftEyeClosedConfidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rightEyeBounds;
@property (nonatomic) int rightEyeClosedConfidence;
@property (nonatomic) double rollAngle;
@property (nonatomic) int smileConfidence;
@property (nonatomic) double yawAngle;

- (int)faceID;
- (BOOL)hasLeftEyeBounds;
- (BOOL)hasLeftEyeClosedConfidence;
- (BOOL)hasRightEyeBounds;
- (BOOL)hasRightEyeClosedConfidence;
- (BOOL)hasRollAngle;
- (BOOL)hasSmileConfidence;
- (BOOL)hasYawAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftEyeBounds;
- (int)leftEyeClosedConfidence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightEyeBounds;
- (int)rightEyeClosedConfidence;
- (float)rollAngle;
- (void)setFaceID:(int)arg1;
- (void)setHasLeftEyeBounds:(BOOL)arg1;
- (void)setHasLeftEyeClosedConfidence:(BOOL)arg1;
- (void)setHasRightEyeBounds:(BOOL)arg1;
- (void)setHasRightEyeClosedConfidence:(BOOL)arg1;
- (void)setHasRollAngle:(BOOL)arg1;
- (void)setHasSmileConfidence:(BOOL)arg1;
- (void)setHasYawAngle:(BOOL)arg1;
- (void)setLeftEyeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeftEyeClosedConfidence:(int)arg1;
- (void)setRightEyeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRightEyeClosedConfidence:(int)arg1;
- (void)setRollAngle:(float)arg1;
- (void)setSmileConfidence:(int)arg1;
- (void)setYawAngle:(float)arg1;
- (int)smileConfidence;
- (float)yawAngle;

@end
