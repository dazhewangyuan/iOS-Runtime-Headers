/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKUniform : NSObject <NSCoding, NSCopying> {
    NSString * _name;
    unsigned int  _seed;
    NSMutableArray * _targetShaders;
    SKTexture * _textureValue;
    int  _type;
    union { 
        double _floatValue; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*_floatVector2Value; 
    }  _value;
}

@property unsigned int _seed;
@property union _GLKMatrix2 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; double x2[2][2]; double x3[4]; } floatMatrix2Value;
@property union _GLKMatrix3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; double x2[9]; } floatMatrix3Value;
@property union _GLKMatrix4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; double x_1_1_10; double x_1_1_11; double x_1_1_12; double x_1_1_13; double x_1_1_14; double x_1_1_15; double x_1_1_16; } x1; double x2[16]; } floatMatrix4Value;
@property (nonatomic) double floatValue;
@property union _GLKVector2 { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3[2]; } floatVector2Value;
@property union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; } floatVector3Value;
@property union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; } floatVector4Value;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; } matrixFloat2x2Value;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } matrixFloat3x3Value;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } matrixFloat4x4Value;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) SKTexture *textureValue;
@property (nonatomic, readonly) int uniformType;
@property (nonatomic) void vectorFloat2Value;
@property (nonatomic) void vectorFloat3Value;
@property (nonatomic) void vectorFloat4Value;

+ (id)uniformWithName:(id)arg1;
+ (id)uniformWithName:(id)arg1 float:(float)arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; double x2[2][2]; double x3[4]; })arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; double x2[9]; })arg2;
+ (id)uniformWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; double x_1_1_10; double x_1_1_11; double x_1_1_12; double x_1_1_13; double x_1_1_14; double x_1_1_15; double x_1_1_16; } x1; double x2[16]; })arg2;
+ (id)uniformWithName:(id)arg1 floatVector2:(union _GLKVector2 { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3[2]; })arg2;
+ (id)uniformWithName:(id)arg1 floatVector3:(union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; })arg2;
+ (id)uniformWithName:(id)arg1 floatVector4:(union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })arg2;
+ (id)uniformWithName:(id)arg1 matrixFloat2x2:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg2;
+ (id)uniformWithName:(id)arg1 matrixFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2;
+ (id)uniformWithName:(id)arg1 matrixFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
+ (id)uniformWithName:(id)arg1 texture:(id)arg2;
+ (id)uniformWithName:(void *)arg1 vectorFloat2:(void *)arg2; // needs 2 arg types, found 1: id
+ (id)uniformWithName:(void *)arg1 vectorFloat3:(void *)arg2; // needs 2 arg types, found 1: id
+ (id)uniformWithName:(void *)arg1 vectorFloat4:(void *)arg2; // needs 2 arg types, found 1: id

- (void).cxx_destruct;
- (void)_addTargetShader:(id)arg1;
- (void)_propagateChange;
- (void)_removeTargetShader:(id)arg1;
- (unsigned int)_seed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (union _GLKMatrix2 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; double x2[2][2]; double x3[4]; })floatMatrix2Value;
- (union _GLKMatrix3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; double x2[9]; })floatMatrix3Value;
- (union _GLKMatrix4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; double x_1_1_10; double x_1_1_11; double x_1_1_12; double x_1_1_13; double x_1_1_14; double x_1_1_15; double x_1_1_16; } x1; double x2[16]; })floatMatrix4Value;
- (float)floatValue;
- (union _GLKVector2 { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3[2]; })floatVector2Value;
- (union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; })floatVector3Value;
- (union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })floatVector4Value;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 float:(float)arg2;
- (id)initWithName:(id)arg1 floatMatrix2:(union _GLKMatrix2 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; double x2[2][2]; double x3[4]; })arg2;
- (id)initWithName:(id)arg1 floatMatrix3:(union _GLKMatrix3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; double x2[9]; })arg2;
- (id)initWithName:(id)arg1 floatMatrix4:(union _GLKMatrix4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; double x_1_1_10; double x_1_1_11; double x_1_1_12; double x_1_1_13; double x_1_1_14; double x_1_1_15; double x_1_1_16; } x1; double x2[16]; })arg2;
- (id)initWithName:(id)arg1 floatVector2:(union _GLKVector2 { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3[2]; })arg2;
- (id)initWithName:(id)arg1 floatVector3:(union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; })arg2;
- (id)initWithName:(id)arg1 floatVector4:(union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })arg2;
- (id)initWithName:(id)arg1 matrixFloat2x2:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg2;
- (id)initWithName:(id)arg1 matrixFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2;
- (id)initWithName:(id)arg1 matrixFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithName:(id)arg1 texture:(id)arg2;
- (id)initWithName:(void *)arg1 vectorFloat2:(void *)arg2; // needs 2 arg types, found 1: id
- (id)initWithName:(void *)arg1 vectorFloat3:(void *)arg2; // needs 2 arg types, found 1: id
- (id)initWithName:(void *)arg1 vectorFloat4:(void *)arg2; // needs 2 arg types, found 1: id
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })matrixFloat2x2Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })matrixFloat3x3Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })matrixFloat4x4Value;
- (id)name;
- (void)setFloatMatrix2Value:(union _GLKMatrix2 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; double x2[2][2]; double x3[4]; })arg1;
- (void)setFloatMatrix3Value:(union _GLKMatrix3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; } x1; double x2[9]; })arg1;
- (void)setFloatMatrix4Value:(union _GLKMatrix4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; double x_1_1_10; double x_1_1_11; double x_1_1_12; double x_1_1_13; double x_1_1_14; double x_1_1_15; double x_1_1_16; } x1; double x2[16]; })arg1;
- (void)setFloatValue:(float)arg1;
- (void)setFloatVector2Value:(union _GLKVector2 { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3[2]; })arg1;
- (void)setFloatVector3Value:(union _GLKVector3 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; double x4[3]; })arg1;
- (void)setFloatVector4Value:(union _GLKVector4 { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4[4]; })arg1;
- (void)setMatrixFloat2x2Value:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg1;
- (void)setMatrixFloat3x3Value:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setMatrixFloat4x4Value:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTextureValue:(id)arg1;
- (void)setVectorFloat2Value;
- (void)setVectorFloat3Value;
- (void)setVectorFloat4Value;
- (void)set_seed:(unsigned int)arg1;
- (id)textureValue;
- (int)uniformType;
- (void)vectorFloat2Value;
- (void)vectorFloat3Value;
- (void)vectorFloat4Value;

@end
