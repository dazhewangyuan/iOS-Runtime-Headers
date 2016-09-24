/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABKeyboardAdjuster : NSObject {
    BOOL  _active;
    NSMutableSet * _adjustmentRecords;
}

@property (nonatomic) BOOL active;

+ (id)sharedAdjuster;

- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)active;
- (void)addScrollView:(id)arg1;
- (void)cancelDelayedAdjustmentsForView:(id)arg1;
- (BOOL)containsScrollView:(id)arg1;
- (void)dateFieldDateDidBeginEditingNotification:(id)arg1;
- (void)dateFieldDateDidEndEditingNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)manuallyAdjustEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 force:(BOOL)arg2;
- (id)recordForScrollView:(id)arg1;
- (void)removeScrollView:(id)arg1;
- (void)resetAdjustment;
- (void)setActive:(BOOL)arg1;
- (BOOL)shouldForceAutomaticKeyboardForView:(id)arg1;
- (void)textFieldTextDidBeginEditingNotification:(id)arg1;
- (void)textFieldTextDidEndEditingNotification:(id)arg1;
- (void)textViewTextDidBeginEditingNotification:(id)arg1;
- (void)textViewTextDidEndEditingNotification:(id)arg1;

@end
