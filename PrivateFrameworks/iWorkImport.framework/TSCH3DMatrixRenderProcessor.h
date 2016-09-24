/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor {
    struct tmat4x4<float> { 
        struct tvec4<float> { 
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
            union { 
                double z; 
                double b; 
                double p; 
            } ; 
            union { 
                double w; 
                double a; 
                double q; 
            } ; 
        } value[4]; 
    }  mProjection;
    BOOL  mProjectionChanged;
    BOOL  mTransformChanged;
    struct StateStack<glm::detail::tmat4x4<float>, 8> { 
        unsigned int mIndex; 
        struct tmat4x4<float> { 
            struct tvec4<float> { 
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
                union { 
                    double z; 
                    double b; 
                    double p; 
                } ; 
                union { 
                    double w; 
                    double a; 
                    double q; 
                } ; 
            } value[4]; 
        } mCurrent; 
        struct tmat4x4<float> { 
            struct tvec4<float> { 
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
                union { 
                    double z; 
                    double b; 
                    double p; 
                } ; 
                union { 
                    double w; 
                    double a; 
                    double q; 
                } ; 
            } value[4]; 
        } mStack[8]; 
    }  mTransformStack;
}

@property (nonatomic, readonly) const struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*current;
@property (nonatomic, readonly) const struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*projection;
@property (nonatomic, readonly) BOOL projectionChanged;
@property (nonatomic, readonly) BOOL transformChanged;

- (id).cxx_construct;
- (void)copyProjectionInto:(struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)copyTransformInto:(struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)current;
- (void)multiply:(struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (id)normalizedViewAll;
- (void)popMatrix;
- (struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)projection;
- (void)projection:(struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (BOOL)projectionChanged;
- (void)pushMatrix;
- (void)replace:(struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)resetChangeFlags;
- (void)scale:(struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; }*)arg1;
- (BOOL)transformChanged;
- (void)translate:(struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; }*)arg1;

@end
