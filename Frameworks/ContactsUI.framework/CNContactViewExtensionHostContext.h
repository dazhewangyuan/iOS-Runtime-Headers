/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactViewExtensionHostContext : NSExtensionContext <CNContactViewHostAsyncProtocol, CNContactViewHostProtocol, CNContactViewServiceProtocol> {
    CNContactViewHostViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) CNContactViewHostViewController *viewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)didChangePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didChangeToEditMode:(BOOL)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)editCancel;
- (void)isPresentingFullscreen:(BOOL)arg1;
- (id)protocolService;
- (void)setViewController:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;
- (BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)toggleEditing;
- (void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3;
- (id)viewController;

@end
