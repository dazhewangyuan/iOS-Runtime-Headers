/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    MFMailComposeRecipientView * _recipientView;
    NSMutableArray * _recipients;
    NSMutableIndexSet * _selectedIndexes;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MFMailComposeRecipientView *recipientView;
@property (nonatomic, readonly) NSArray *recipients;
@property (readonly) Class superclass;

- (void)_didTapDoneButton:(id)arg1;
- (void)_dismissAndAddSelectedContacts;
- (void)dealloc;
- (id)initWithRecentComposeRecipients:(id)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)recipientView;
- (id)recipients;
- (void)setRecipientView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
