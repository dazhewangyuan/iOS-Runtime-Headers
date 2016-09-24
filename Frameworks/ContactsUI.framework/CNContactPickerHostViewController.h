/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol> {
    void * _addressBook;
    <NSCopying> * _currentRequestIdentifier;
    <CNContactPickerContentDelegate> * _delegate;
    NSExtension * _extension;
}

@property (nonatomic, retain) <NSCopying> *currentRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactPickerContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (readonly) Class superclass;

+ (id)contactPickerExtension;
+ (id)contextForIdentifier:(id)arg1;
+ (BOOL)getViewController:(id /* block */)arg1;

- (void).cxx_destruct;
- (void*)addressBook;
- (id)currentRequestIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)extension;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(BOOL)arg1;
- (id)navigationController;
- (void)pickerDidCancel;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)setAddressBook:(void*)arg1;
- (void)setCurrentRequestIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;

@end
