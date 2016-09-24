/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBRTDecayingOffset : _UIKBRTDecayingObject {
    BOOL  _limitMovement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } originalOffset;

- (id)initWithTimeoutDuration:(double)arg1 limitMovement:(BOOL)arg2;
- (struct CGPoint { double x1; double x2; })offset;
- (struct CGPoint { double x1; double x2; })originalOffset;
- (void)reset;
- (void)updateOffsetTo:(struct CGPoint { double x1; double x2; })arg1;

@end
