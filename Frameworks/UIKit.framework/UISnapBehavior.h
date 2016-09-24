/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISnapBehavior : UIDynamicBehavior {
    PKPhysicsBody * _anchorBody;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    double  _damping;
    double  _distance;
    double  _frequency;
    NSMutableArray * _joints;
    struct { 
        unsigned int attachedToView : 1; 
        unsigned int dampingSet : 1; 
        unsigned int frequencySet : 1; 
        unsigned int lengthSet : 1; 
    }  _stateFlags;
}

@property (nonatomic) double damping;
@property (nonatomic) struct CGPoint { double x1; double x2; } snapPoint;

+ (BOOL)_isPrimitiveBehavior;

- (void).cxx_destruct;
- (void)_associate;
- (void)_dissociate;
- (float)_distance;
- (float)_frequency;
- (void)_setDistance:(float)arg1;
- (void)_setFrequency:(float)arg1;
- (float)damping;
- (id)description;
- (id)init;
- (id)initWithItem:(id)arg1 snapToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setDamping:(float)arg1;
- (void)setSnapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })snapPoint;

@end
