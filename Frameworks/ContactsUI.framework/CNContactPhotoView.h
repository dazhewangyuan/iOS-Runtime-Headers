/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPhotoView : UIControl <CNAvatarViewDelegate, QLPreviewControllerDataSource, QLPreviewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UIButton * _addPhotoButton;
    UIImageView * _attributionImageView;
    CNAvatarView * _avatarView;
    NSArray * _contacts;
    PRLikeness * _currentLikeness;
    <CNPresenterDelegate> * _delegate;
    UIButton * _editPhotoButton;
    BOOL  _editing;
    BOOL  _isAnimatingBounce;
    CNUIPRLikenessLookup * _likenessResolver;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    BOOL  _modified;
    PRLikeness * _originalLikeness;
    CNMutableContact * _pendingEditContact;
    <CNContactPhotoViewDelegate> * _photoViewDelegate;
    NSArray * _variableConstraints;
}

@property (nonatomic, retain) UIButton *addPhotoButton;
@property (nonatomic, retain) UIImageView *attributionImageView;
@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, retain) PRLikeness *currentLikeness;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *editPhotoButton;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isAnimatingBounce;
@property (nonatomic, retain) CNUIPRLikenessLookup *likenessResolver;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) BOOL modified;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (nonatomic, retain) PRLikeness *originalLikeness;
@property (nonatomic, retain) CNMutableContact *pendingEditContact;
@property (nonatomic) <CNContactPhotoViewDelegate> *photoViewDelegate;
@property (nonatomic) BOOL prohibitsPersonaFetch;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *variableConstraints;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)supportedPasteboardTypes;

- (void).cxx_destruct;
- (void)_bounceSmallPhoto;
- (id)_createImagePicker;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)_isUsingCuratedPhoto;
- (id)_localizedStringForProfileAction:(id)arg1 type:(unsigned int)arg2;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_presentPhotoEditingSheet;
- (void)_zoomContactPhoto;
- (id)addPhotoButton;
- (id)attributionImageView;
- (void)avatarTapped:(id)arg1;
- (id)avatarView;
- (void)avatarView:(id)arg1 willShowActions:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contact;
- (id)contacts;
- (void)copy:(id)arg1;
- (id)currentImageData;
- (id)currentImageDataAndCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (id)currentLikeness;
- (void)dealloc;
- (id)delegate;
- (void)disablePhotoTapGesture;
- (id)editPhotoButton;
- (BOOL)hasPhoto;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 monogrammerStyle:(int)arg2;
- (BOOL)isAnimatingBounce;
- (BOOL)isEditing;
- (BOOL)isMeContact;
- (id)likenessResolver;
- (void)longPressGesture:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)menuWillHide:(id)arg1;
- (BOOL)modified;
- (id)mutableContact;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)originalLikeness;
- (void)paste:(id)arg1;
- (id)pendingEditContact;
- (id)photoViewDelegate;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewPath;
- (BOOL)prohibitsPersonaFetch;
- (void)resetPhoto;
- (void)saveEdits;
- (void)setAddPhotoButton:(id)arg1;
- (void)setAttributionImageView:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setCurrentLikeness:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditPhotoButton:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setHighlightedFrame:(BOOL)arg1;
- (void)setIsAnimatingBounce:(BOOL)arg1;
- (void)setLikenessResolver:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setModified:(BOOL)arg1;
- (void)setOriginalLikeness:(id)arg1;
- (void)setPendingEditContact:(id)arg1;
- (void)setPhotoViewDelegate:(id)arg1;
- (void)setProhibitsPersonaFetch:(BOOL)arg1;
- (void)setVariableConstraints:(id)arg1;
- (void)updateAttributionBadge;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updatePhoto;
- (id)variableConstraints;

@end
