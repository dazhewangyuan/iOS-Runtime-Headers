/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardTouchInfo : NSObject {
    BOOL  _dragged;
    int  _fingerID;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDragPoint;
    int  _initialKeyState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPoint;
    UIKBTree * _key;
    UIKBTree * _keyplane;
    BOOL  _maySuppressUpAction;
    UIKBTree * _slidOffKey;
    int  _stage;
    UIKBTouchState * _touch;
}

@property (nonatomic) BOOL dragged;
@property (nonatomic) int fingerID;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialDragPoint;
@property (nonatomic) int initialKeyState;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPoint;
@property (nonatomic, retain) UIKBTree *key;
@property (nonatomic, retain) UIKBTree *keyplane;
@property (nonatomic) BOOL maySuppressUpAction;
@property (nonatomic, retain) UIKBTree *slidOffKey;
@property (nonatomic) int stage;
@property (nonatomic, retain) UIKBTouchState *touch;

- (void)dealloc;
- (BOOL)dragged;
- (int)fingerID;
- (struct CGPoint { double x1; double x2; })initialDragPoint;
- (int)initialKeyState;
- (struct CGPoint { double x1; double x2; })initialPoint;
- (id)key;
- (id)keyplane;
- (BOOL)maySuppressUpAction;
- (void)setDragged:(BOOL)arg1;
- (void)setFingerID:(int)arg1;
- (void)setInitialDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialKeyState:(int)arg1;
- (void)setInitialPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKey:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setMaySuppressUpAction:(BOOL)arg1;
- (void)setSlidOffKey:(id)arg1;
- (void)setStage:(int)arg1;
- (void)setTouch:(id)arg1;
- (id)slidOffKey;
- (int)stage;
- (id)touch;

@end
