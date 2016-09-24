/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINPane : PSEditingPane <PSPINEntryViewDelegate, UIKeyInput, UITextInputTraits> {
    unsigned int  _PINLength;
    int  _autocapitalizationType;
    int  _autocorrectionType;
    BOOL  _isBlocked;
    int  _keyboardAppearance;
    int  _keyboardType;
    UIKeyboard * _keypad;
    BOOL  _keypadActive;
    BOOL  _numericKeyboard;
    id /* block */  _passcodeOptionsHandler;
    UIView<PINEntryView> * _pinView;
    BOOL  _playSound;
    BOOL  _simplePIN;
    UITransitionView * _transitionView;
    BOOL  _transitioning;
}

@property (nonatomic) unsigned int PINLength;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, readonly) BOOL hasText;
@property (readonly) unsigned int hash;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic, copy) id /* block */ passcodeOptionsHandler;
@property (nonatomic, retain) UIView<PINEntryView> *pinView;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

- (void).cxx_destruct;
- (unsigned int)PINLength;
- (void)_setKeypadState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setPlaysKeyboardClicks:(BOOL)arg1;
- (void)activateKeypadView;
- (int)autocapitalizationType;
- (int)autocorrectionType;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)clearPassword;
- (void)deactivateKeypadView;
- (void)dealloc;
- (void)delayForTextEntryAnimationsWithCompletion:(id /* block */)arg1;
- (void)deleteBackward;
- (void)dismissKeypad;
- (BOOL)hasText;
- (void)hideError;
- (void)hideFailedAttempts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (BOOL)isSecureTextEntry;
- (int)keyboardAppearance;
- (int)keyboardType;
- (void)layoutSubviews;
- (void)okButtonPressed;
- (id /* block */)passcodeOptionsHandler;
- (id)password;
- (id)pinView;
- (void)pinView:(id)arg1 pinEntered:(id)arg2;
- (void)pinView:(id)arg1 pinValueChanged:(id)arg2;
- (BOOL)requiresKeyboard;
- (BOOL)resignFirstResponder;
- (void)setAutocapitalizationType:(int)arg1;
- (void)setAutocorrectionType:(int)arg1;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setKeyboardIsNumeric:(BOOL)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setKeyboardUserInteractionEnabled:(BOOL)arg1;
- (void)setPINLength:(unsigned int)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)setPasscodeOptionsHandler:(id /* block */)arg1;
- (void)setPinView:(id)arg1;
- (void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2;
- (void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3;
- (void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 showsOptions:(BOOL)arg4;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showError:(id)arg1 error:(id)arg2 isBlocked:(BOOL)arg3 animate:(BOOL)arg4;
- (void)showFailedAttempts:(long)arg1;
- (BOOL)simplePIN;
- (void)slideToNewPasscodeField:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3;
- (void)slideToNewPasscodeField:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 transition:(int)arg4 showsOptionsButton:(BOOL)arg5;
- (void)slideToNewPasscodeField:(BOOL)arg1 withKeyboard:(BOOL)arg2;
- (id)specifierLabel;
- (id)text;
- (void)transitionToSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 showsOptions:(BOOL)arg4;
- (void)transitionViewDidComplete:(id)arg1;

@end
