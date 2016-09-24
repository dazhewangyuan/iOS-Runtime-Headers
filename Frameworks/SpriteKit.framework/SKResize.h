/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKResize : SKAction {
    struct SKCResize { int (**x1)(); unsigned int x2; double x3; id /* block */ x4; id x5; double x6; double x7; double x8; double x9; double x10; bool x11; bool x12; id /* block */ x13; int x14; double x15; double x16; double x17; double x18; double x19; struct { double x_20_1_1; double x_20_1_2; } x20; struct { double x_21_1_1; double x_21_1_2; } x21; struct { double x_22_1_1; double x_22_1_2; } x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; } * _mycaction;
}

+ (id)resizeByWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;
+ (id)resizeToHeight:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
