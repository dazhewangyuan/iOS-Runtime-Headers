/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsBody : NSObject <NSCoding, NSCopying> {
    BOOL  _affectedByGravity;
    BOOL  _allowsRotation;
    double  _angularDamping;
    double  _angularVelocity;
    double  _area;
    unsigned int  _categoryBitMask;
    double  _charge;
    unsigned int  _collisionBitMask;
    unsigned int  _contactTestBitMask;
    double  _density;
    BOOL  _dynamic;
    unsigned int  _fieldBitMask;
    double  _friction;
    NSArray * _joints;
    double  _linearDamping;
    double  _mass;
    SKNode * _node;
    BOOL  _pinned;
    BOOL  _resting;
    double  _restitution;
    BOOL  _usesPreciseCollisionDetection;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _velocity;
}

@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) double angularDamping;
@property (nonatomic) double angularVelocity;
@property (nonatomic, readonly) double area;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) double charge;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (nonatomic) double density;
@property (getter=isDynamic, nonatomic) BOOL dynamic;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) double friction;
@property (nonatomic, readonly) NSArray *joints;
@property (nonatomic) double linearDamping;
@property (nonatomic) double mass;
@property (nonatomic, readonly) SKNode *node;
@property (nonatomic) BOOL pinned;
@property (getter=isResting, nonatomic) BOOL resting;
@property (nonatomic) double restitution;
@property (nonatomic) BOOL usesPreciseCollisionDetection;
@property (nonatomic) struct CGVector { double x1; double x2; } velocity;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithCircleOfRadius:(float)arg1;
+ (id)bodyWithCircleOfRadius:(float)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize { double x1; double x2; })arg3 accuracy:(float)arg4;
+ (id)bodyWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (BOOL)affectedByGravity;
- (id)allContactedBodies;
- (BOOL)allowsRotation;
- (float)angularDamping;
- (float)angularVelocity;
- (void)applyAngularImpulse:(float)arg1;
- (void)applyForce:(struct CGVector { double x1; double x2; })arg1;
- (void)applyForce:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyImpulse:(struct CGVector { double x1; double x2; })arg1;
- (void)applyImpulse:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyTorque:(float)arg1;
- (float)area;
- (unsigned int)categoryBitMask;
- (float)charge;
- (unsigned int)collisionBitMask;
- (unsigned int)contactTestBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)density;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fieldBitMask;
- (float)friction;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDynamic;
- (BOOL)isResting;
- (id)joints;
- (float)linearDamping;
- (float)mass;
- (id)node;
- (BOOL)pinned;
- (float)restitution;
- (void)setAffectedByGravity:(BOOL)arg1;
- (void)setAllowsRotation:(BOOL)arg1;
- (void)setAngularDamping:(float)arg1;
- (void)setAngularVelocity:(float)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setCharge:(float)arg1;
- (void)setCollisionBitMask:(unsigned int)arg1;
- (void)setContactTestBitMask:(unsigned int)arg1;
- (void)setDensity:(float)arg1;
- (void)setDynamic:(BOOL)arg1;
- (void)setFieldBitMask:(unsigned int)arg1;
- (void)setFriction:(float)arg1;
- (void)setLinearDamping:(float)arg1;
- (void)setMass:(float)arg1;
- (void)setPinned:(BOOL)arg1;
- (void)setResting:(BOOL)arg1;
- (void)setRestitution:(float)arg1;
- (void)setUsesPreciseCollisionDetection:(BOOL)arg1;
- (void)setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (BOOL)usesPreciseCollisionDetection;
- (struct CGVector { double x1; double x2; })velocity;

@end
