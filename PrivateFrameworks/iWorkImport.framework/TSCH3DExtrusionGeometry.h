/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry {
    BOOL  mBeginCap;
    int  mBeginCapCount;
    unsigned int  mBeginCapOffset;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__first_; 
        } __end_cap_; 
    }  mCrossSection;
    double  mCrossSectionCreaseAngle;
    BOOL  mEndCap;
    int  mEndCapCount;
    unsigned int  mEndCapOffset;
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
    }  mNormalBias;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__first_; 
        } __end_cap_; 
    }  mScale;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__first_; 
        } __end_cap_; 
    }  mSpine;
    double  mSpineCreaseAngle;
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
    }  mSpineDirectionBias;
}

@property (nonatomic) BOOL beginCap;
@property (nonatomic, readonly) int capCount;
@property (nonatomic, readonly) unsigned int capOffset;
@property (nonatomic) double crossSectionCreaseAngle;
@property (nonatomic) BOOL endCap;
@property (nonatomic) struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; } normalBias;
@property (nonatomic) double spineCreaseAngle;
@property (nonatomic) struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; } spineDirectionBias;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)beginCap;
- (int)capCount;
- (unsigned int)capOffset;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)crossSection;
- (float)crossSectionCreaseAngle;
- (void)dealloc;
- (void)debug_dumpGeometryBounds;
- (BOOL)endCap;
- (void)generateArrays;
- (id)init;
- (struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; })normalBias;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)scale;
- (void)setBeginCap:(BOOL)arg1;
- (void)setCrossSection:(const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)arg1;
- (void)setCrossSectionCreaseAngle:(float)arg1;
- (void)setEndCap:(BOOL)arg1;
- (void)setNormalBias:(struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; })arg1;
- (void)setScale:(const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)arg1;
- (void)setSpine:(const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)arg1;
- (void)setSpineCreaseAngle:(float)arg1;
- (void)setSpineDirectionBias:(struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; })arg1;
- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)spine;
- (float)spineCreaseAngle;
- (struct tvec3<float> { union { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; union { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; union { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; })spineDirectionBias;

@end
