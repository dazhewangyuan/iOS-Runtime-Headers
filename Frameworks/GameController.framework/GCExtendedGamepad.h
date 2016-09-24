/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCExtendedGamepad : NSObject

@property (nonatomic, readonly) GCControllerButtonInput *buttonA;
@property (nonatomic, readonly) GCControllerButtonInput *buttonB;
@property (nonatomic, readonly) GCControllerButtonInput *buttonX;
@property (nonatomic, readonly) GCControllerButtonInput *buttonY;
@property (nonatomic, readonly) GCController *controller;
@property (nonatomic, readonly) GCControllerDirectionPad *dpad;
@property (nonatomic, readonly) GCControllerButtonInput *leftShoulder;
@property (nonatomic, readonly) GCControllerDirectionPad *leftThumbstick;
@property (nonatomic, readonly) GCControllerButtonInput *leftTrigger;
@property (nonatomic, readonly) GCControllerButtonInput *rightShoulder;
@property (nonatomic, readonly) GCControllerDirectionPad *rightThumbstick;
@property (nonatomic, readonly) GCControllerButtonInput *rightTrigger;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

+ (BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1;

- (BOOL)allowsRotation;
- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (id)dpad;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)leftShoulder;
- (id)leftThumbstick;
- (id)leftTrigger;
- (BOOL)reportsAbsoluteDpadValues;
- (id)rightShoulder;
- (id)rightThumbstick;
- (id)rightTrigger;
- (id)saveSnapshot;
- (void)setAllowsRotation:(BOOL)arg1;
- (void)setButton:(id)arg1 pressed:(BOOL)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setReportsAbsoluteDpadValues:(BOOL)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (id /* block */)valueChangedHandler;

@end
