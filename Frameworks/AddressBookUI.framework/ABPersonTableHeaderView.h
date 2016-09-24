/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableHeaderView : UIView <UITableViewDataSource, UITableViewDelegate> {
    <ABPersonTableHeaderViewDelegate> * _delegate;
    ABPersonNameDisplayView * _displayView;
    BOOL  _editing;
    ABMultiCellContentView * _editingView;
    ABMultiCell * _editingViewCell;
    UITableView * _editingViewContainer;
    UIView * _extraHeaderView;
    BOOL  _extraHeaderViewAlignsToImage;
    UIImageView * _imageShadowView;
    ABPersonImageView * _imageView;
    ABNamePropertyGroup * _namePropertyGroup;
    BOOL  _representsLinkedPeople;
    BOOL  _showsMultiplePhotoBackdropView;
    <ABStyleProvider> * _styleProvider;
}

@property (nonatomic, copy) NSString *alternateName;
@property (nonatomic, retain) UIView *customMessageView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABPersonTableHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ABPersonNameDisplayView *displayView;
@property (nonatomic, readonly) ABMultiCellContentView *editingView;
@property (nonatomic, retain) UIView *extraHeaderView;
@property (nonatomic) BOOL extraHeaderViewAlignsToImage;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) ABPersonImageView *imageView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *messageDetail;
@property (nonatomic, retain) UIFont *messageDetailFont;
@property (nonatomic, retain) UIFont *messageFont;
@property (nonatomic, retain) ABNamePropertyGroup *namePropertyGroup;
@property (nonatomic, retain) ABUIPerson *personForImageView;
@property (nonatomic) BOOL representsLinkedPeople;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (id)_displayView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_displayViewFrameForWidth:(float)arg1;
- (struct CGPoint { double x1; double x2; })_displayViewOrigin;
- (float)_displayViewWidthForWidth:(float)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editingViewContainerFrameForWidth:(float)arg1;
- (struct CGPoint { double x1; double x2; })_editingViewOrigin;
- (float)_editingViewWidthForWidth:(float)arg1;
- (float)_extraHeaderViewAvailableWidthForWidth:(float)arg1 whenEditing:(BOOL)arg2;
- (struct CGPoint { double x1; double x2; })_extraHeaderViewOriginForWidth:(float)arg1 whenEditing:(BOOL)arg2;
- (id)_imageShadowView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageViewFrameWhenEditing:(BOOL)arg1;
- (BOOL)_isSpecialInternalHeaderView;
- (void)_layoutExtraHeaderView;
- (void)_recreateEditingViewContainer;
- (void)_updateRecordIfNeeded;
- (void)_updateShowsMultiplePhotoBackdrop;
- (id)alternateName;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)customMessageView;
- (void)dealloc;
- (id)delegate;
- (void)deselectAnimated:(BOOL)arg1;
- (id)displayView;
- (id)editingView;
- (id)entryFieldForRow:(unsigned int)arg1;
- (id)extraHeaderView;
- (BOOL)extraHeaderViewAlignsToImage;
- (float)extraHeaderViewHorizontalPaddingWhenEditing:(BOOL)arg1;
- (struct CGPoint { double x1; double x2; })extraHeaderViewOrigin;
- (id)imageView;
- (void)imageViewSelected:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (float)marginForTableView:(id)arg1;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)namePropertyGroup;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)personForImageView;
- (void)reloadData;
- (void)reloadImageData;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)reloadNameDataButNotModelAnimated:(BOOL)arg1;
- (BOOL)representsLinkedPeople;
- (BOOL)resignFirstResponder;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setExtraHeaderView:(id)arg1;
- (void)setExtraHeaderViewAlignsToImage:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setNamePropertyGroup:(id)arg1;
- (void)setPersonForImageView:(id)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setRepresentsLinkedPeople:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
