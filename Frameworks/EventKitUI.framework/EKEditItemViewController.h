/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol> {
    <EKEditItemViewControllerDelegate> * _editDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    BOOL  _modal;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    BOOL  _showsDoneButton;
    <EKStyleProvider> * _styleProvider;
    unsigned int  _subitem;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL modal;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) unsigned int subitem;
@property (nonatomic) BOOL useCustomBackButton;

- (void).cxx_destruct;
- (void)_saveAndDismissWithForce:(BOOL)arg1;
- (void)cancel;
- (void)didReceiveMemoryWarning;
- (id)editDelegate;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (float)marginForTableView:(id)arg1;
- (BOOL)modal;
- (void)popIfNonModal;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)saveAndDismiss;
- (void)saveAndDismissWithExtremePrejudice;
- (void)setCell:(id)arg1 checked:(BOOL)arg2;
- (void)setEditDelegate:(id)arg1;
- (void)setModal:(BOOL)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (void)setSubitem:(unsigned int)arg1;
- (BOOL)showsDoneButton;
- (unsigned int)subitem;
- (unsigned int)supportedInterfaceOrientations;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
