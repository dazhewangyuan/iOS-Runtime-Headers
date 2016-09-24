/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointRevolute : PKPhysicsJoint {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchor;
    struct b2RevoluteJoint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; struct b2Vec2 { double x_12_1_1; double x_12_1_2; } x12; struct b2Vec2 { double x_13_1_1; double x_13_1_2; } x13; struct b2Vec3 { double x_14_1_1; double x_14_1_2; double x_14_1_3; } x14; double x15; bool x16; double x17; double x18; bool x19; double x20; double x21; double x22; int x23; int x24; struct b2Vec2 { double x_25_1_1; double x_25_1_2; } x25; struct b2Vec2 { double x_26_1_1; double x_26_1_2; } x26; struct b2Vec2 { double x_27_1_1; double x_27_1_2; } x27; struct b2Vec2 { double x_28_1_1; double x_28_1_2; } x28; double x29; double x30; double x31; double x32; struct b2Mat33 { struct b2Vec3 { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_33_1_1; struct b2Vec3 { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_33_1_2; struct b2Vec3 { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_33_1_3; } x33; } * _joint;
    struct b2RevoluteJointDef { 
        int type; 
        void *userData; 
        struct b2Body {} *bodyA; 
        struct b2Body {} *bodyB; 
        bool collideConnected; 
        struct b2Vec2 { 
            double x; 
            double y; 
        } localAnchorA; 
        struct b2Vec2 { 
            double x; 
            double y; 
        } localAnchorB; 
        double referenceAngle; 
        bool enableLimit; 
        double lowerAngle; 
        double upperAngle; 
        bool enableMotor; 
        double motorSpeed; 
        double maxMotorTorque; 
    }  _jointDef;
}

@property (readonly) struct CGPoint { double x1; double x2; } anchor;
@property (nonatomic) double frictionTorque;
@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double rotationSpeed;
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) double upperAngleLimit;

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;

- (id).cxx_construct;
- (struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)_joint;
- (struct b2JointDef { int x1; void *x2; struct b2Body {} *x3; struct b2Body {} *x4; bool x5; }*)_jointDef;
- (struct CGPoint { double x1; double x2; })anchor;
- (void)create;
- (void)encodeWithCoder:(id)arg1;
- (float)frictionTorque;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (float)lowerAngleLimit;
- (float)rotationSpeed;
- (void)setFrictionTorque:(float)arg1;
- (void)setLowerAngleLimit:(float)arg1;
- (void)setRotationSpeed:(float)arg1;
- (void)setShouldEnableLimits:(BOOL)arg1;
- (void)setUpperAngleLimit:(float)arg1;
- (void)set_joint:(struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)arg1;
- (BOOL)shouldEnableLimits;
- (float)upperAngleLimit;

@end
