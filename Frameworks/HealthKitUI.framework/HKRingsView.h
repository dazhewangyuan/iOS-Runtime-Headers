/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKRingsView : HKGLView <HKRingGroupAnimationStatusDelegate> {
    BOOL  _buffersCreated;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cachedGroupCenter;
    double  _cachedPointSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cachedPosition;
    double  _cachedThickness;
    unsigned int  _color1Attribute;
    unsigned int  _color2Attribute;
    unsigned int  _coordPercentAttribute;
    unsigned int  _coordPercentBuffer;
    unsigned int  _coordinateAttribute;
    unsigned int  _coordinateBuffer;
    BOOL  _didSetup;
    unsigned int  _endCapShadowDistanceUniform;
    unsigned int  _flatColorProgram;
    unsigned int  _iconSpriteColorAttribute;
    unsigned int  _iconSpriteIconsPerDimensionUniform;
    UIImage * _iconSpriteImage;
    unsigned int  _iconSpritePositionAttribute;
    unsigned int  _iconSpriteProgram;
    unsigned int  _iconSpriteSamplerUniform;
    unsigned int  _iconSpriteSizeAttribute;
    GLKTextureInfo * _iconSpriteTexture;
    unsigned int  _iconSpriteTextureOffsetAttribute;
    unsigned int  _iconSpriteTransformUniform;
    unsigned int  _iconSpriteVertexBuffer;
    struct { union _GLKVector2 { struct { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct { double x_2_2_1; double x_2_2_2; } x_1_1_2; double x_1_1_3[2]; } x1; double x2; double x3; union _GLKVector4 { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_4_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_4_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_4_1_3; double x_4_1_4[4]; } x4; union _GLKVector2 { struct { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct { double x_2_2_1; double x_2_2_2; } x_5_1_2; double x_5_1_3[2]; } x5; } * _iconSpriteVertices;
    unsigned int  _iconTextureColumns;
    unsigned int  _iconTextureRows;
    BOOL  _iconVAOinit;
    unsigned int  _iconsVAO;
    int  _numRingsPerGroup;
    unsigned int  _percentagesAttribute;
    unsigned int  _positionAttribute;
    unsigned int  _positionBuffer;
    BOOL  _prevRingsAreEmpty;
    union _GLKMatrix4 { 
        struct { 
            double m00; 
            double m01; 
            double m02; 
            double m03; 
            double m10; 
            double m11; 
            double m12; 
            double m13; 
            double m20; 
            double m21; 
            double m22; 
            double m23; 
            double m30; 
            double m31; 
            double m32; 
            double m33; 
        } ; 
        double m[16]; 
    }  _projectionMatrix;
    unsigned int  _ringEmptyProgram;
    unsigned int  _ringEndCapProgram;
    NSArray * _ringGroups;
    int  _ringGroupsPerRow;
    unsigned int  _ringProgram;
    double  _ringSpacing;
    BOOL  _ringVAOinit;
    union _GLKVector2 { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3[2]; } * _ringVertexCoordinates;
    union _GLKVector2 { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3[2]; } * _ringVertexPositions;
    struct { union _GLKVector4 { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_1_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_1_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_1_1_3; double x_1_1_4[4]; } x1; union _GLKVector4 { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_2_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_2_1_3; double x_2_1_4[4]; } x2; union _GLKVector4 { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_3_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_3_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_3_1_3; double x_3_1_4[4]; } x3; union _GLKVector2 { struct { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct { double x_2_2_1; double x_2_2_2; } x_4_1_2; double x_4_1_3[2]; } x4; union _GLKVector2 { struct { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct { double x_2_2_1; double x_2_2_2; } x_5_1_2; double x_5_1_3[2]; } x5; } * _ringVertices;
    unsigned int  _ringsVAO;
    double  _screenScale;
    unsigned int  _sizesAttribute;
    unsigned int  _transformUniform;
    unsigned int  _trigResultsAttribute;
}

@property (nonatomic, retain) UIImage *iconSpriteImage;
@property (nonatomic) unsigned int iconTextureColumns;
@property (nonatomic) unsigned int iconTextureRows;
@property (nonatomic, readonly) NSArray *ringGroups;
@property (nonatomic) int ringGroupsPerRow;
@property (nonatomic) double ringSpacing;

+ (id)_iconSpriteImage;
+ (id)_ringsViewConfiguredForCompanionWithNumberOfRings:(int)arg1 ringType:(int)arg2;
+ (id)_ringsViewConfiguredForGizmoWithNumberOfRings:(int)arg1 ringType:(int)arg2 withIcons:(BOOL)arg3;
+ (void)clearSharedCaches;
+ (id)ringsViewConfiguredForOneRingOnCompanionOfType:(int)arg1;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(int)arg1;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(int)arg1 withIcon:(BOOL)arg2;
+ (id)ringsViewConfiguredForThreeRingsOnCompanion;
+ (id)ringsViewConfiguredForThreeRingsOnWatch;

- (void).cxx_destruct;
- (void)_context_checkAndRepairFramebuffer;
- (void)_context_createBuffers;
- (void)_context_loadFlatColorProgramIfNeeded;
- (void)_context_loadRingDataForGroupAtIndex:(int)arg1;
- (void)_context_loadRingEmptyProgramIfNeeded;
- (void)_context_loadUniformsAndAttributes;
- (void)_context_prepareForIconDraw;
- (void)_context_prepareForRingDraw:(BOOL)arg1;
- (void)_destroyBuffers;
- (void)_loadIconDataForGroupAtIndex:(int)arg1;
- (void)_setRingGroups:(id)arg1;
- (void)_setupIfNecessary;
- (void)_updateProjectionMatrix;
- (void)dealloc;
- (void)didMoveToWindow;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)iconSpriteImage;
- (unsigned int)iconTextureColumns;
- (unsigned int)iconTextureRows;
- (id)initWithRingGroups:(id)arg1 numberOfRingsPerGroup:(int)arg2;
- (void)layoutSubviews;
- (void)ringGroupDidBeginAnimations:(id)arg1;
- (id)ringGroups;
- (int)ringGroupsPerRow;
- (float)ringSpacing;
- (void)setActiveEnergyPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setActiveEnergyPercentage:(float)arg1 briskPercentage:(float)arg2 movingHoursPercentage:(float)arg3 animated:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)setBriskPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setIconSpriteImage:(id)arg1;
- (void)setIconTextureColumns:(unsigned int)arg1;
- (void)setIconTextureRows:(unsigned int)arg1;
- (void)setMovingHoursPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setRingGroupsPerRow:(int)arg1;
- (void)setRingSpacing:(float)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)update;

@end
