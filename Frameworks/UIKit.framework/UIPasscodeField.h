/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
    BOOL  _centerHorizontally;
    id  _delegate;
    int  _emptyContentReturnKeyType;
    NSMutableArray * _entryBackgrounds;
    NSMutableArray * _entryFields;
    int  _keyboardAppearance;
    int  _keyboardType;
    UIButton * _okButton;
    BOOL  _opaqueBackground;
    NSMutableString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (float)defaultHeight;
+ (Class)textFieldClass;

- (void).cxx_destruct;
- (void)_textDidChange;
- (void)_updateFields;
- (void)appendString:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)deleteLastCharacter;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isFirstResponder;
- (int)numberOfEntryFields;
- (void)okButtonClicked:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setKeyboardType:(int)arg1 appearance:(int)arg2;
- (void)setKeyboardType:(int)arg1 appearance:(int)arg2 emptyContentReturnKeyType:(int)arg3;
- (void)setNumberOfEntryFields:(int)arg1;
- (void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(BOOL)arg2;
- (void)setShowsOKButton:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (BOOL)showsOKButton;
- (id)stringValue;
- (BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (BOOL)textFieldShouldStartEditing:(id)arg1;

@end
