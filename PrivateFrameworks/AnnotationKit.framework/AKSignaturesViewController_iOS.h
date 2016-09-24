/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignaturesViewController_iOS : UIViewController <AKSignatureCreationControllerDelegate, UINavigationBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    BOOL  _allowsEdits;
    AKController * _controller;
    <AKSignaturesViewControllerDelegate> * _delegate;
    NSArray * _editingLeftBarItems;
    NSArray * _leftBarItems;
    UINavigationBar * _navBar;
    BOOL  _presentedInAlert;
    NSArray * _rightBarItems;
    BOOL  _showAddEditButtonRow;
    BOOL  _showsNavigationBar;
    UIColor * _tableBackgroundColor;
    UITableView * _tableView;
}

@property (nonatomic) BOOL allowsEdits;
@property (nonatomic) AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKSignaturesViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *editingLeftBarItems;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) double idealHeight;
@property (nonatomic, retain) NSArray *leftBarItems;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (nonatomic) BOOL presentedInAlert;
@property (nonatomic, retain) NSArray *rightBarItems;
@property (nonatomic) BOOL showAddEditButtonRow;
@property (nonatomic) BOOL showsNavigationBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tableBackgroundColor;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_cancelPicker:(id)arg1;
- (void)_configureUI;
- (void)_continueToCreateSignature:(id)arg1;
- (void)_deleteSignature:(id)arg1;
- (id)_signatures;
- (BOOL)allowsEdits;
- (id)controller;
- (id)delegate;
- (id)editingLeftBarItems;
- (float)idealHeight;
- (id)initWithController:(id)arg1;
- (id)leftBarItems;
- (id)navBar;
- (int)positionForBar:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (BOOL)presentedInAlert;
- (id)rightBarItems;
- (void)setAllowsEdits:(BOOL)arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingLeftBarItems:(id)arg1;
- (void)setLeftBarItems:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setPresentedInAlert:(BOOL)arg1;
- (void)setRightBarItems:(id)arg1;
- (void)setShowAddEditButtonRow:(BOOL)arg1;
- (void)setShowsNavigationBar:(BOOL)arg1;
- (void)setTableBackgroundColor:(id)arg1;
- (void)setTableView:(id)arg1;
- (BOOL)showAddEditButtonRow;
- (BOOL)showsNavigationBar;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (id)tableBackgroundColor;
- (id)tableView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
