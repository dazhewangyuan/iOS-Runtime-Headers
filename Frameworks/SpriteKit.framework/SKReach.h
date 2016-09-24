/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKReach : SKAction {
    struct CGPoint { 
        double x; 
        double y; 
    }  _goalPosition;
    NSMutableArray * _ikChain;
    SKNode * _ikRoot;
    BOOL  _timeConstrained;
    double  _velocity;
    double  _zRotationSpeed;
}

+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(float)arg4;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 velocity:(float)arg3;
+ (id)reachTo:(struct CGPoint { double x1; double x2; })arg1 rootNode:(id)arg2 zRotationSpeed:(float)arg3 maxDuration:(double)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)solveIKWithTarget:(id)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
