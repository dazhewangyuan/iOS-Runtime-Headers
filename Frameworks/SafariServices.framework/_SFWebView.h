/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebView : WBUFormAutoFillWebView <_SFDialogPresenting> {
    _SFDialogView * _dialogView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setObscuredInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)dismissDialogView:(id)arg1 forDialogController:(id)arg2;
- (void)layoutSubviews;
- (void)presentDialogView:(id)arg1 forDialogController:(id)arg2;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)arg1;
- (int)webProcessIdentifierForDialogController:(id)arg1;

@end
