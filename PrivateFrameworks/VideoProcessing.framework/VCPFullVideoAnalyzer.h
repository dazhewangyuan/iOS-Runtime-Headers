/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer {
    struct EncodeAnalysis { int x1; int x2; char *x3; struct __CVBuffer {} *x4; struct Translation { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; int *x6; int *x7; int *x8; int *x9; int *x10; struct Translation {} *x11; struct FrameBuffer {} *x12; struct EncodeStats {} *x13; double x14; double x15; struct MotionFieldAnalysis { struct EncodeStats {} *x_16_1_1; double *x_16_1_2; double *x_16_1_3; char *x_16_1_4; int x_16_1_5; int x_16_1_6; int x_16_1_7; int x_16_1_8; double x_16_1_9; double x_16_1_10; double x_16_1_11; bool x_16_1_12; int *x_16_1_13[2]; double *x_16_1_14[2]; short *x_16_1_15[2]; int x_16_1_16[2]; int *x_16_1_17[2]; double *x_16_1_18[2]; double *x_16_1_19[2]; struct ObjectDetection { struct Vector<ma::Object *> { struct __CFArray {} *x_1_3_1; } x_20_2_1; struct MotionVector {} *x_20_2_2; double *x_20_2_3; int *x_20_2_4; int *x_20_2_5; int *x_20_2_6; int x_20_2_7; int x_20_2_8; bool x_20_2_9; } x_16_1_20; struct ObjectTracking { struct Object { int x_1_3_1; struct CGRect { struct CGPoint { double x_1_5_1; double x_1_5_2; } x_2_4_1; struct CGSize { double x_2_5_1; double x_2_5_2; } x_2_4_2; } x_1_3_2; struct CGPoint { double x_3_4_1; double x_3_4_2; } x_1_3_3; struct CGPoint { double x_4_4_1; double x_4_4_2; } x_1_3_4; bool x_1_3_5; double x_1_3_6; double x_1_3_7; double x_1_3_8; double x_1_3_9; bool x_1_3_10; } x_21_2_1; struct Object { int x_2_3_1; struct CGRect { struct CGPoint { double x_1_5_1; double x_1_5_2; } x_2_4_1; struct CGSize { double x_2_5_1; double x_2_5_2; } x_2_4_2; } x_2_3_2; struct CGPoint { double x_3_4_1; double x_3_4_2; } x_2_3_3; struct CGPoint { double x_4_4_1; double x_4_4_2; } x_2_3_4; bool x_2_3_5; double x_2_3_6; double x_2_3_7; double x_2_3_8; double x_2_3_9; bool x_2_3_10; } x_21_2_2; bool x_21_2_3; int x_21_2_4; int x_21_2_5; double *x_21_2_6; double *x_21_2_7; double *x_21_2_8; double *x_21_2_9; double *x_21_2_10; double *x_21_2_11; double *x_21_2_12; int x_21_2_13; int x_21_2_14; double *x_21_2_15; int x_21_2_16; int x_21_2_17; int x_21_2_18; } x_16_1_21; } x16; } * _encodeAnalysis;
    BOOL  _finalized;
    struct FrameBuffer { 
        int frame_count_; 
        struct Frame { 
            int frame_idx_; 
            struct { 
                int value; 
                int timescale; 
                unsigned int flags; 
                int epoch; 
            } timestamp_; 
            struct { 
                int value; 
                int timescale; 
                unsigned int flags; 
                int epoch; 
            } duration_; 
            struct Translation { 
                double x_; 
                double y_; 
                double z_; 
            } ave_motion_; 
            struct Translation { 
                double x_; 
                double y_; 
                double z_; 
            } org_motion_; 
            unsigned int distortion_; 
            double distortion_norm_; 
            struct Translation { 
                double x_; 
                double y_; 
                double z_; 
            } motion_change_; 
            unsigned int compressed_bytes_; 
            bool blur_; 
            struct Translation { 
                double x_; 
                double y_; 
                double z_; 
            } acc_var_; 
            double texture_; 
            struct MotionResult { 
                double significant_values_[6]; 
                double confidence_[6]; 
                double fine_action_score_; 
                double action_score_; 
                double track_score_; 
                double rotation_angle_; 
                int action_blocks_; 
                double action_motion_; 
                bool valid_mb_; 
                bool valid_submb_; 
                int support_size_; 
                double residual_var_; 
                double gmv_[2]; 
                struct { 
                    int value; 
                    int timescale; 
                    unsigned int flags; 
                    int epoch; 
                } duration_; 
                double scene_delta_; 
                double scene_delta_ratio_; 
                struct Vector<ma::Object *> { 
                    struct __CFArray {} *vector_; 
                } objects_; 
                struct Vector<ma::Object *> { 
                    struct __CFArray {} *vector_; 
                } detect_objects_; 
            } motion_result_; 
            double interestingness_; 
            struct Histogram { 
                double extremities_; 
                double overexposes_; 
                int *histogram_[3]; 
                int *moments_hist_[2]; 
            } histogram_; 
        } buffer_[35]; 
    }  _frameBuffer;
    struct IrisAnalysis { double x1; double x2; int x3; int x4; bool x5; struct __CFArray {} *x6; } * _irisAnalysis;
    BOOL  _isIris;
    struct MetaDataAnalysis { bool x1; struct FrameBuffer {} *x2; struct Translation { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct Translation { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; } * _metadataAnalysis;
    struct MotionFilter { struct FrameBuffer {} *x1; bool x2; } * _motionFilter;
    struct ObstructionAnalysis { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct __CFArray {} *x2; int x3; int x4; struct { int x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; struct { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; } x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; int x_7_1_5; int x_7_1_6; } x7; double x8; int x9; struct { int x_10_1_1; int x_10_1_2; unsigned int x_10_1_3; int x_10_1_4; } x10; } * _obstructionAnalysis;
    int  _orientation;
    struct PreEncodeAnalysis { bool x1; bool x2; struct __CFData {} *x3; struct __CFArray {} *x4; bool x5; struct Vector<unsigned int> { struct __CFArray {} *x_6_1_1; } x6; struct Vector<unsigned short> { struct __CFArray {} *x_7_1_1; } x7; struct Vector<float> { struct __CFArray {} *x_8_1_1; } x8; struct Vector<float> { struct __CFArray {} *x_9_1_1; } x9; struct { int x_10_1_1; int x_10_1_2; unsigned int x_10_1_3; int x_10_1_4; } x10; int x11; unsigned int x12; unsigned int x13; struct EncodeParameters { int x_14_1_1; int x_14_1_2; unsigned int x_14_1_3; unsigned int x_14_1_4; unsigned int x_14_1_5; unsigned short x_14_1_6; unsigned short x_14_1_7; } x14; double x15; double x16; double x17; double x18; struct { int x_19_1_1; int x_19_1_2; unsigned int x_19_1_3; int x_19_1_4; } x19; double x20; unsigned int x21; } * _preencodeAnalysis;
    struct SceneAnalysis { struct Vector<ma::SceneSegment *> { struct __CFArray {} *x_1_1_1; } x1; struct SceneSegment {} *x2; struct __CFArray {} *x3; struct { int x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; int x_4_1_4; } x4; bool x5; bool x6; bool x7; bool x8; int x9; int x10; int x11; struct CameraMotionAnalysis { struct Vector<ma::CameraMotionSegment *> { struct __CFArray {} *x_1_2_1; } x_12_1_1; struct CameraMotionSegment {} *x_12_1_2; struct __CFArray {} *x_12_1_3; struct { int x_4_2_1; int x_4_2_2; unsigned int x_4_2_3; int x_4_2_4; } x_12_1_4; bool x_12_1_5; struct HinkleyDetector { double x_6_2_1; double x_6_2_2; int x_6_2_3; struct HinkleyStats { double x_4_3_1; double x_4_3_2; double x_4_3_3; double x_4_3_4; } x_6_2_4; } x_12_1_6[6]; int x_12_1_7; struct RotationAnalysis { struct Vector<ma::RotationSegment *> { struct __CFArray {} *x_1_3_1; } x_8_2_1; struct RotationSegment {} *x_8_2_2; struct __CFArray {} *x_8_2_3; struct { int x_4_3_1; int x_4_3_2; unsigned int x_4_3_3; int x_4_3_4; } x_8_2_4; bool x_8_2_5; struct HinkleyDetector { double x_6_3_1; double x_6_3_2; int x_6_3_3; struct HinkleyStats { double x_4_4_1; double x_4_4_2; double x_4_4_3; double x_4_4_4; } x_6_3_4; } x_8_2_6; int x_8_2_7; int x_8_2_8; } x_12_1_8; bool x_12_1_9; bool x_12_1_10; } x12; } * _sceneAnalysis;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long)addResult:(struct __CFArray { }*)arg1 to:(id)arg2 forKey:(id)arg3 optional:(BOOL)arg4;
- (long)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(BOOL)arg3;
- (long)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 andDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg3 flags:(unsigned int*)arg4;
- (void)dealloc;
- (long)finishAnalysisPass:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })arg1;
- (id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 isIris:(BOOL)arg3 irisPhotoOffsetSec:(float)arg4 irisPhotoExposureSec:(float)arg5 slowMoRate:(float)arg6;
- (long)process:(int)arg1;
- (id)results;
- (long)seedAnalyzersWithPixelBuffer:(struct __CVBuffer { }*)arg1 startTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2;

@end
