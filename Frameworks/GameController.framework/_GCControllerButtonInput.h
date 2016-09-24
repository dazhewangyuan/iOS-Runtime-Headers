/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCControllerButtonInput : GCControllerButtonInput {
    NSString * _descriptionName;
    id /* block */  _pressedChangedHandler;
    double  _value;
    id /* block */  _valueChangedHandler;
}

- (void).cxx_destruct;
- (BOOL)_setValue:(float)arg1;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (id)description;
- (id)initWithDescriptionName:(id)arg1;
- (id /* block */)pressedChangedHandler;
- (void)setPressedChangedHandler:(id /* block */)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (float)value;
- (id /* block */)valueChangedHandler;

@end
