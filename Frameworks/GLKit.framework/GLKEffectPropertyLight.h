/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyLight : GLKEffectProperty {
    struct GLKBigInt_s { 
        unsigned int n0; 
        unsigned int n1; 
    }  _allFshMasks;
    struct GLKBigInt_s { 
        unsigned int n0; 
        unsigned int n1; 
    }  _allVshMasks;
    union _GLKVector4 { 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } ; 
        struct { 
            double s; 
            double t; 
            double p; 
            double q; 
        } ; 
        double v[4]; 
    }  _ambientColor;
    int  _ambientLoc;
    int  _ambientTermLoc;
    double  _constantAttenuation;
    int  _constantAttenuationLoc;
    union _GLKVector4 { 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } ; 
        struct { 
            double s; 
            double t; 
            double p; 
            double q; 
        } ; 
        double v[4]; 
    }  _diffuseColor;
    int  _diffuseLoc;
    unsigned int * _effectDirtyUniforms;
    unsigned char  _enabled;
    unsigned char  _firstLight;
    int  _lightIndex;
    int  _lightingType;
    double  _linearAttenuation;
    int  _linearAttenuationLoc;
    int  _normalizeLoc;
    union _GLKVector3 { 
        struct { 
            double x; 
            double y; 
            double z; 
        } ; 
        struct { 
            double r; 
            double g; 
            double b; 
        } ; 
        struct { 
            double s; 
            double t; 
            double p; 
        } ; 
        double v[3]; 
    }  _normalizedSpotDirectionEye;
    int  _normalizedSpotDirectionEyeLoc;
    union _GLKVector4 { 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } ; 
        struct { 
            double s; 
            double t; 
            double p; 
            double q; 
        } ; 
        double v[4]; 
    }  _position;
    union _GLKVector4 { 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } ; 
        struct { 
            double s; 
            double t; 
            double p; 
            double q; 
        } ; 
        double v[4]; 
    }  _positionEye;
    int  _positionEyeLoc;
    unsigned char  _positionEyeStale;
    double  _quadraticAttenuation;
    int  _quadraticAttenuationLoc;
    union _GLKVector4 { 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } ; 
        struct { 
            double s; 
            double t; 
            double p; 
            double q; 
        } ; 
        double v[4]; 
    }  _specularColor;
    int  _specularLoc;
    double  _spotCutoff;
    double  _spotCutoffDegrees;
    int  _spotCutoffLoc;
    union _GLKVector3 { 
        struct { 
            double x; 
            double y; 
            double z; 
        } ; 
        struct { 
            double r; 
            double g; 
            double b; 
        } ; 
        struct { 
            double s; 
            double t; 
            double p; 
        } ; 
        double v[3]; 
    }  _spotDirection;
    double  _spotExponent;
    int  _spotExponentLoc;
    GLKEffectPropertyTransform * _transform;
}

@property (nonatomic, readonly) struct GLKBigInt_s { unsigned int x1; unsigned int x2; } allFshMasks;
@property (nonatomic, readonly) struct GLKBigInt_s { unsigned int x1; unsigned int x2; } allVshMasks;
@property (nonatomic) union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; } ambientColor;
@property (nonatomic) int ambientLoc;
@property (nonatomic) int ambientTermLoc;
@property (nonatomic) double constantAttenuation;
@property (nonatomic) int constantAttenuationLoc;
@property (nonatomic) union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; } diffuseColor;
@property (nonatomic) int diffuseLoc;
@property (nonatomic) unsigned int*effectDirtyUniforms;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) unsigned char firstLight;
@property (nonatomic, readonly) unsigned char isAttenuated;
@property (nonatomic, readonly) unsigned char isSpot;
@property (nonatomic) int lightIndex;
@property (nonatomic) int lightingType;
@property (nonatomic) double linearAttenuation;
@property (nonatomic) int linearAttenuationLoc;
@property (nonatomic) int normalizeLoc;
@property (nonatomic) union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; } normalizedSpotDirectionEye;
@property (nonatomic) int normalizedSpotDirectionEyeLoc;
@property (nonatomic) union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; } position;
@property (nonatomic) union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; } positionEye;
@property (nonatomic) int positionEyeLoc;
@property (nonatomic) unsigned char positionEyeStale;
@property (nonatomic) double quadraticAttenuation;
@property (nonatomic) int quadraticAttenuationLoc;
@property (nonatomic) union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; } specularColor;
@property (nonatomic) int specularLoc;
@property (nonatomic) double spotCutoff;
@property (nonatomic) double spotCutoffDegrees;
@property (nonatomic) int spotCutoffLoc;
@property (nonatomic) union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; } spotDirection;
@property (nonatomic) double spotExponent;
@property (nonatomic) int spotExponentLoc;
@property (nonatomic, retain) GLKEffectPropertyTransform *transform;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (struct GLKBigInt_s { unsigned int x1; unsigned int x2; })allFshMasks;
- (struct GLKBigInt_s { unsigned int x1; unsigned int x2; })allVshMasks;
- (union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })ambientColor;
- (int)ambientLoc;
- (int)ambientTermLoc;
- (void)bind;
- (float)constantAttenuation;
- (int)constantAttenuationLoc;
- (void)dealloc;
- (id)description;
- (union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })diffuseColor;
- (int)diffuseLoc;
- (void)dirtyAllUniforms;
- (unsigned int*)effectDirtyUniforms;
- (unsigned char)enabled;
- (unsigned char)firstLight;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (id)initWithTransform:(id)arg1 lightingType:(int)arg2 firstLight:(unsigned char)arg3;
- (void)initializeMasks;
- (unsigned char)isAttenuated;
- (unsigned char)isSpot;
- (int)lightIndex;
- (int)lightingType;
- (float)linearAttenuation;
- (int)linearAttenuationLoc;
- (int)normalizeLoc;
- (union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; })normalizedSpotDirectionEye;
- (int)normalizedSpotDirectionEyeLoc;
- (union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })position;
- (union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })positionEye;
- (int)positionEyeLoc;
- (unsigned char)positionEyeStale;
- (float)quadraticAttenuation;
- (int)quadraticAttenuationLoc;
- (void)setAmbientColor:(union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })arg1;
- (void)setAmbientLoc:(int)arg1;
- (void)setAmbientTermLoc:(int)arg1;
- (void)setConstantAttenuation:(float)arg1;
- (void)setConstantAttenuationLoc:(int)arg1;
- (void)setDiffuseColor:(union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })arg1;
- (void)setDiffuseLoc:(int)arg1;
- (void)setEffectDirtyUniforms:(unsigned int*)arg1;
- (void)setEnabled:(unsigned char)arg1;
- (void)setFirstLight:(unsigned char)arg1;
- (void)setGLDefaults;
- (void)setLightIndex:(int)arg1;
- (void)setLightingType:(int)arg1;
- (void)setLinearAttenuation:(float)arg1;
- (void)setLinearAttenuationLoc:(int)arg1;
- (void)setNormalize:(unsigned char)arg1;
- (void)setNormalizeLoc:(int)arg1;
- (void)setNormalizedSpotDirectionEye:(union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; })arg1;
- (void)setNormalizedSpotDirectionEyeLoc:(int)arg1;
- (void)setPosition:(union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })arg1;
- (void)setPositionEye:(union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })arg1;
- (void)setPositionEyeLoc:(int)arg1;
- (void)setPositionEyeStale:(unsigned char)arg1;
- (void)setQuadraticAttenuation:(float)arg1;
- (void)setQuadraticAttenuationLoc:(int)arg1;
- (void)setShaderBindings;
- (void)setSpecularColor:(union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })arg1;
- (void)setSpecularLoc:(int)arg1;
- (void)setSpotCutoff:(float)arg1;
- (void)setSpotCutoffDegrees:(float)arg1;
- (void)setSpotCutoffLoc:(int)arg1;
- (void)setSpotDirection:(union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; })arg1;
- (void)setSpotExponent:(float)arg1;
- (void)setSpotExponentLoc:(int)arg1;
- (void)setTransform:(id)arg1;
- (union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })specularColor;
- (int)specularLoc;
- (float)spotCutoff;
- (float)spotCutoffDegrees;
- (int)spotCutoffLoc;
- (union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; })spotDirection;
- (float)spotExponent;
- (int)spotExponentLoc;
- (id)transform;

@end
