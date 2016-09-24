/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate> {
    BOOL  _hasImpendingCursorLocation;
    unsigned int  _impendingCursorLocation;
    UITextInputTraits * m_defaultTraits;
    BOOL  m_disableTouchInput;
    NSMutableDictionary * m_focusGuides;
    BOOL  m_hasExplicitOrientation;
    int  m_idiom;
    BOOL  m_minimized;
    int  m_orientation;
    BOOL  m_respondingToImplGeometryChange;
    UIView * m_snapshot;
    BOOL  m_typingDisabled;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  m_unfocusedFocusGuideOutsets;
    BOOL  m_useRecentsAlert;
}

@property (nonatomic) BOOL caretBlinks;
@property (nonatomic) BOOL caretVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasImpendingCursorLocation;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int impendingCursorLocation;
@property (nonatomic) int keyboardIdiom;
@property (getter=isMinimized, nonatomic) BOOL minimized;
@property (nonatomic) BOOL showsCandidatesInline;
@property (readonly) Class superclass;
@property (nonatomic) BOOL typingEnabled;

+ (void)_clearActiveKeyboard;
+ (id)activeKeyboard;
+ (id)activeKeyboardForScreen:(id)arg1;
+ (void)clearActiveForScreen:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrameForInterfaceOrientation:(int)arg1;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct CGSize { double x1; double x2; })defaultSizeForInterfaceOrientation:(int)arg1;
+ (void)initImplementationNow;
+ (BOOL)isInHardwareKeyboardMode;
+ (BOOL)isOnScreen;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInterfaceOrientation:(int)arg1;
+ (void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2;
+ (void)removeAllDynamicDictionaries;
+ (BOOL)respondsToProxGesture;
+ (BOOL)shouldMinimizeForHardwareKeyboard;
+ (struct CGSize { double x1; double x2; })sizeForInterfaceOrientation:(int)arg1;
+ (BOOL)splitKeyboardEnabled;

- (void)_acceptCurrentCandidate;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (void)_changeToKeyplane:(id)arg1;
- (void)_deactivateForBackgrounding;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (BOOL)_disableTouchInput;
- (int)_focusedSound;
- (id)_getAutocorrection;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_getLocalizedInputMode;
- (BOOL)_hasCandidates;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lazily:(BOOL)arg2;
- (BOOL)_isAutomaticKeyboard;
- (id)_keyplaneForKey:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (BOOL)_mayRemainFocused;
- (int)_positionInCandidateList:(id)arg1;
- (struct CGSize { double x1; double x2; })_sensitivitySize;
- (void)_setAutocorrects:(BOOL)arg1;
- (void)_setDisableTouchInput:(BOOL)arg1;
- (void)_setInputMode:(id)arg1;
- (void)_setPasscodeOutlineAlpha:(float)arg1;
- (void)_setPreferredHeight:(float)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSplit:(BOOL)arg1;
- (void)_setUndocked:(BOOL)arg1;
- (void)_setUseRecentsAlert:(BOOL)arg1;
- (id)_touchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint { double x1; double x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (BOOL)_useRecentsAlert;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)acceptAutocorrection;
- (void)activate;
- (BOOL)allowExternalChangeForFocusHeading:(unsigned int)arg1 cursorLocation:(unsigned int)arg2;
- (void)autoAdjustOrientation;
- (BOOL)canBecomeFocused;
- (BOOL)canDismiss;
- (BOOL)canHandleEvent:(id)arg1;
- (BOOL)caretBlinks;
- (BOOL)caretVisible;
- (void)clearActivePerScreenIfNeeded;
- (void)clearSnapshot;
- (unsigned int)cursorLocation;
- (void)deactivate;
- (void)dealloc;
- (id)defaultTextInputTraits;
- (id)delegate;
- (void)didFocusGuideWithHeading:(unsigned int)arg1;
- (void)didMoveToWindow;
- (BOOL)disableInteraction;
- (void)displayLayer:(id)arg1;
- (void)focusedViewDidChange;
- (void)geometryChangeDone:(BOOL)arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })geometryForImplHeightDelta:(float)arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })geometryForMinimize:(BOOL)arg1;
- (BOOL)hasAutocorrectPrompt;
- (BOOL)hasImpendingCursorLocation;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (unsigned int)impendingCursorLocation;
- (void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(BOOL)arg2;
- (id)initLazily;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isActive;
- (BOOL)isActivePerScreen;
- (BOOL)isAutomatic;
- (BOOL)isMinimized;
- (int)keyboardIdiom;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedIn;
- (void)manualKeyboardWillBeOrderedOut;
- (void)maximize;
- (void)minimize;
- (BOOL)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForGeometryChange;
- (void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)removeAutocorrectPrompt;
- (void)responseContextDidChange;
- (BOOL)returnKeyEnabled;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (void)setCursorLocation:(unsigned int)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setDisableInteraction:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasImpendingCursorLocation:(BOOL)arg1;
- (void)setImpendingCursorLocation:(unsigned int)arg1;
- (void)setKeyboardIdiom:(int)arg1;
- (void)setMinimized:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setOrientation:(int)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)setShowPredictionBar:(BOOL)arg1;
- (void)setShowsCandidatesInline:(BOOL)arg1;
- (void)setTypingEnabled:(BOOL)arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 fromView:(id)arg2;
- (void)setupKeyFocusGuides;
- (BOOL)shouldChangeFocusedItem:(id)arg1 heading:(unsigned int)arg2;
- (BOOL)shouldSaveMinimizationState;
- (BOOL)showPredictionBar;
- (BOOL)showsCandidatesInline;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (void)takeSnapshot;
- (id)targetWindow;
- (int)textEffectsVisibilityLevel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)typingEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })unfocusedFocusGuideOutsets;
- (void)updateFocusMarginsUpToView:(id)arg1;
- (void)updateKeyFocusGuides;
- (void)updateLayout;
- (void)willMoveToWindow:(id)arg1;

@end
