/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPickedPoint : NSObject <NSCopying> {
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
    }  mCenterProjectionPoint;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  mElement;
    struct tvec3<float> { 
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
    }  mObjectSpacePoint;
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
    TSCH3DSceneObject * mSceneObject;
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
    }  mTransform;
}

@property (nonatomic, readonly) struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; } cameraSpacePoint;
@property (nonatomic, readonly) struct tvec2<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } centerProjectionPoint;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } element;
@property (nonatomic, readonly) struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; } objectSpacePoint;
@property (nonatomic, readonly) struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; } projection;
@property (nonatomic, readonly, retain) TSCH3DSceneObject *sceneObject;
@property (nonatomic, readonly) struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; } transform;

+ (id)pickedPointWithSceneObject:(id)arg1 element:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 projection:(const struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg3 transform:(const struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg4 objectSpacePoint:(const struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; }*)arg5 centerProjectionPoint:(const struct tvec2<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; }*)arg6;

- (id).cxx_construct;
- (struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; })cameraSpacePoint;
- (struct tvec2<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })centerProjectionPoint;
- (void)clearParent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })element;
- (id)initWithSceneObject:(id)arg1 element:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 projection:(const struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg3 transform:(const struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; }*)arg4 objectSpacePoint:(const struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; }*)arg5 centerProjectionPoint:(const struct tvec2<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; }*)arg6;
- (struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; })objectSpacePoint;
- (struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; })projection;
- (id)sceneObject;
- (struct tmat4x4<float> { struct tvec4<float> { union { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; union { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_1_1_2; union { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_1_1_3; union { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_1_1_4; } x1[4]; })transform;

@end
