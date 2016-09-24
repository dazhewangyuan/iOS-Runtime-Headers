/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCommentsTableDataController : NSObject <PLCloudCommentsChangeObserver, PUPhotoCommentEntryViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    PHAsset * _asset;
    NSCache * _commentsHeightCache;
    <PUCommentsTableDataControllerDelegate> * _delegate;
    BOOL  _editing;
    PUPhotoCommentEntryView * _entryView;
    PLCloudSharedComment * _justInsertedComment;
    PLManagedAsset * _managedAsset;
    BOOL  _shouldUseCompactCommentSeparators;
    UITableView * _tableView;
}

@property (nonatomic, retain) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUCommentsTableDataControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PLCloudSharedComment *justInsertedComment;
@property (nonatomic, retain) PLManagedAsset *managedAsset;
@property (nonatomic, readonly) double minimumHeight;
@property (nonatomic) BOOL shouldUseCompactCommentSeparators;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (int)_assetOwnerCommentSection;
- (BOOL)_canPostCommentWithText:(id)arg1 localizedFailureDescription:(id*)arg2;
- (id)_commentText;
- (id)_currentEntryView;
- (void)_fontCacheDidChange:(id)arg1;
- (float)_heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
- (BOOL)_isAssetOwnerSectionVisible;
- (BOOL)_isEditingAllowed;
- (int)_postCommentSection;
- (void)_postCommentWithText:(id)arg1;
- (void)_scrollToComment:(id)arg1 animated:(BOOL)arg2;
- (int)_smileCommentSection;
- (int)_textCommentSection;
- (void)_updateFirstResponder;
- (void)_validateAndPostComment:(id)arg1;
- (id)asset;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithTableView:(id)arg1;
- (BOOL)isEditing;
- (id)justInsertedComment;
- (id)managedAsset;
- (float)minimumHeight;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)photoCommentEntryViewDidBeginEditing:(id)arg1;
- (void)photoCommentEntryViewDidEndEditing:(id)arg1;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (BOOL)photoCommentEntryViewShouldEndEditing:(id)arg1;
- (void)photoCommentEntryViewWillBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setJustInsertedComment:(id)arg1;
- (void)setManagedAsset:(id)arg1;
- (void)setShouldUseCompactCommentSeparators:(BOOL)arg1;
- (BOOL)shouldUseCompactCommentSeparators;
- (id)tableView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
