/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListController : UITableViewController <CKConversationListCellDelegate, CKConversationResultsControllerDelegate, CKTranscriptPreviewControllerDelegate, UIActionSheetDelegate, UISearchBarDelegate, UISearchControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private> {
    double  _conversationCellHeight;
    CKConversationList * _conversationList;
    UIBarButtonItem * _currentEditButtonItem;
    int  _filterMode;
    NSArray * _filteredContactsAndSMSConversations;
    unsigned int  _filteredConversationCount;
    NSArray * _filteredJunkConversations;
    NSArray * _frozenConversations;
    BOOL  _isInitialLoad;
    BOOL  _isShowingSwipeDeleteConfirmation;
    unsigned int  _isVisible;
    CKMessagesController * _messagesController;
    UIView * _noMessagesDialogView;
    NSArray * _nonPlaceholderConversations;
    NSIndexPath * _previouslySelectedIndexPath;
    id /* block */  _searchCompletion;
    UISearchController * _searchController;
    CKConversationSearchResultsController * _searchResultsController;
    UITableView * _table;
    CKScheduledUpdater * _updater;
    unsigned int  _willBeMarkedReadCount;
    unsigned int  _willRotate;
}

@property (nonatomic) double conversationCellHeight;
@property (nonatomic) CKConversationList *conversationList;
@property (nonatomic, retain) UIBarButtonItem *currentEditButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int filterMode;
@property (nonatomic, retain) NSArray *filteredContactsAndSMSConversations;
@property (nonatomic) unsigned int filteredConversationCount;
@property (nonatomic, retain) NSArray *filteredJunkConversations;
@property (nonatomic, copy) NSArray *frozenConversations;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isShowingSwipeDeleteConfirmation;
@property (nonatomic) CKMessagesController *messagesController;
@property (nonatomic, retain) UIView *noMessagesDialogView;
@property (nonatomic, retain) NSArray *nonPlaceholderConversations;
@property (nonatomic, retain) NSIndexPath *previouslySelectedIndexPath;
@property (nonatomic, copy) id /* block */ searchCompletion;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) CKConversationSearchResultsController *searchResultsController;
@property (nonatomic, readonly) BOOL shouldShowPendingCell;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKScheduledUpdater *updater;

- (void).cxx_destruct;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_conversationContactPhotosEnabledChangedNotification:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_conversationIsFilteredChangedNotification:(id)arg1;
- (void)_conversationKeepMessagesChangedNotification:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_dismissDetailsController:(id)arg1;
- (void)_filterCellSelectionChanged:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; int x7; }*)arg1;
- (void)_groupsChanged:(id)arg1;
- (unsigned int)_indexOfConverationClosestToDeletedIndex:(unsigned int)arg1;
- (unsigned int)_indexOfDefaultConversation;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_selectConversationAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldKeepSelection;
- (BOOL)_shouldOnlyShowNonPlaceholderConversationLists;
- (void)_updateConversationFilteredFlagsAndReportSpam;
- (void)_updateFilteredConversationLists;
- (void)_updateInsets;
- (void)_updateNonPlaceholderConverationLists;
- (void)_updateToolbarItems;
- (void)accessibilityLargeTextDidChange;
- (id)actionsForTranscriptPreviewController:(id)arg1;
- (id)activeConversations;
- (void)applicationWillSuspend;
- (void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (void)composeButtonClicked:(id)arg1;
- (float)conversationCellHeight;
- (id)conversationList;
- (Class)conversationListCellClass;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (id)currentEditButtonItem;
- (void)dealloc;
- (void)deleteButtonTappedForIndexPath:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (int)filterMode;
- (id)filteredContactsAndSMSConversations;
- (unsigned int)filteredConversationCount;
- (id)filteredJunkConversations;
- (id)frozenConversations;
- (id)init;
- (id)inputAccessoryView;
- (void)invalidateCellLayout;
- (BOOL)isShowingSwipeDeleteConfirmation;
- (void)loadView;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (id)messagesController;
- (id)noMessagesDialogView;
- (id)nonPlaceholderConversations;
- (void)noteUnreadCountsChanged;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)performResumeDeferredSetup;
- (void)performSearch:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)previouslySelectedIndexPath;
- (void)scrollToTop;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id /* block */)searchCompletion;
- (id)searchController;
- (id)searchResultsController;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (void)searcherDidComplete:(id)arg1;
- (void)selectConversationClosestToDeletedIndex:(unsigned int)arg1;
- (void)selectDefaultConversationAnimated:(BOOL)arg1;
- (void)selectNextSequentialConversation:(BOOL)arg1;
- (void)setConversationCellHeight:(float)arg1;
- (void)setConversationList:(id)arg1;
- (void)setCurrentEditButtonItem:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFilterMode:(int)arg1;
- (void)setFilteredContactsAndSMSConversations:(id)arg1;
- (void)setFilteredConversationCount:(unsigned int)arg1;
- (void)setFilteredJunkConversations:(id)arg1;
- (void)setFrozenConversations:(id)arg1;
- (void)setIsShowingSwipeDeleteConfirmation:(BOOL)arg1;
- (void)setMessagesController:(id)arg1;
- (void)setNoMessagesDialogView:(id)arg1;
- (void)setNonPlaceholderConversations:(id)arg1;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (void)setSearchCompletion:(id /* block */)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setUpdater:(id)arg1;
- (BOOL)shouldShowPendingCell;
- (void)significantTimeChange;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)updateConversationList;
- (void)updateConversationSelection;
- (void)updateCurrentEditButton;
- (void)updateFilterControl:(id)arg1;
- (void)updateNavigationItems;
- (void)updateNoMessagesDialog;
- (void)updateTitle;
- (id)updater;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willDismissSearchController:(id)arg1;

@end
