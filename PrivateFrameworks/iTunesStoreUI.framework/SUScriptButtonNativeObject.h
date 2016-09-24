/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptButtonNativeObject : SUScriptNativeObject {
    BOOL  _loading;
    NSString * _styleString;
    NSString * _subtitle;
    NSString * _systemItemString;
}

@property (getter=isBackButton, nonatomic, readonly) BOOL backButton;
@property (nonatomic, readonly) int buttonType;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property (getter=isLoading, nonatomic) BOOL loading;
@property (getter=isShowingConfirmation, nonatomic, readonly) BOOL showingConfirmation;
@property (nonatomic, readonly) NSString *styleString;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, readonly) NSString *systemItemString;
@property (nonatomic) int tag;
@property (nonatomic, retain) NSString *title;

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (void)buttonAction:(id)arg1;
- (int)buttonType;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
- (void)connectButtonAction;
- (void)dealloc;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(BOOL)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)initWithSystemItemString:(id)arg1;
- (BOOL)isBackButton;
- (BOOL)isEnabled;
- (BOOL)isLoading;
- (BOOL)isShowingConfirmation;
- (void)setEnabled:(BOOL)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setStyleFromString:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2;
- (id)styleString;
- (id)subtitle;
- (id)systemItemString;

@end
