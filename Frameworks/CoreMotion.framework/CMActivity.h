/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivity : CMLogItem {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int mountedState; 
        int mountedConfidence; 
        bool isStanding; 
        double tilt; 
        double timestamp; 
        bool isVehicleConnected; 
        int exitState; 
        double estExitTime; 
        double startTime; 
    }  fActivity;
}

@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) BOOL hasExitedVehicle;
@property (nonatomic, readonly) BOOL isDriving;
@property (nonatomic, readonly) BOOL isMoving;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic, readonly) BOOL isWalking;
@property (nonatomic, readonly) BOOL maybeExitingVehicle;

+ (BOOL)supportsSecureCoding;

- (struct CLMotionActivity { int x1; int x2; int x3; int x4; bool x5; double x6; double x7; bool x8; int x9; double x10; double x11; })activity;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasExitedVehicle;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; bool x5; double x6; double x7; bool x8; int x9; double x10; double x11; })arg1;
- (BOOL)isDriving;
- (BOOL)isMoving;
- (BOOL)isRunning;
- (BOOL)isWalking;
- (BOOL)maybeExitingVehicle;

@end
