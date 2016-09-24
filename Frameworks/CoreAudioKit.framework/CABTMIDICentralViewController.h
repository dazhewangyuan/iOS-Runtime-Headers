/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CABTMIDICentralViewController : UITableViewController <BTLEConnectionTable, UITableViewDataSource, UITableViewDelegate> {
    UIBarButtonItem * cancelButton;
    AMSBTLEConnectionManager * connectionManager;
    NSTimer * connectionTimer;
    BOOL  didCleanup;
    UIBarButtonItem * editButton;
    UIBarButtonItem * forgetButton;
    BOOL  inEditingMode;
    UIActivityIndicatorView * indicator;
    NSMutableArray * peripheralList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)cancelAction:(id)arg1;
- (void)centralTimerFired:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)editAction:(id)arg1;
- (void)forgetAction:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)peripheralAtIndex:(unsigned int)arg1;
- (unsigned int)peripheralCount;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUIEnabled:(BOOL)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)title;
- (void)updateButtonsToMatchTableState;
- (void)updatePeripheralTable;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
