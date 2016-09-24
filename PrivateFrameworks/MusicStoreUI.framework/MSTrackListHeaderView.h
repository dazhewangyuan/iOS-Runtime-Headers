/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSTrackListHeaderView : UIView {
    UILabel * _albumLabel;
    UILabel * _artistLabel;
    UIImage * _artworkImage;
    SUReflectionImageView * _artworkView;
    <MSTrackListHeaderDelegate> * _delegate;
    UILabel * _disclaimerLabel;
    SUItem * _item;
    UILabel * _itemCountLabel;
    SUItemOfferButton * _offerButton;
    UILabel * _releaseDateLabel;
    SUTouchCaptureView * _touchCaptureView;
}

@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic) <MSTrackListHeaderDelegate> *delegate;
@property (nonatomic, retain) SUItem *item;

- (void)_hidePurchaseConfirmation;
- (id)_newGenericSmallFontLabel;
- (void)_offerButtonAction:(id)arg1;
- (void)_performPurchaseAnimation;
- (void)_purchasesChangedNotification:(id)arg1;
- (void)_reloadAlbumLabel;
- (void)_reloadArtistLabel;
- (void)_reloadArtworkView;
- (void)_reloadDisclaimerLabel;
- (void)_reloadItemCountLabel;
- (void)_reloadOfferButton;
- (void)_reloadReleaseDateLabel;
- (void)_setShowingPurchaseConfirmation:(BOOL)arg1;
- (void)_showPurchaseConfirmation;
- (struct CGSize { double x1; double x2; })_sizeThatFitsLabel:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 numberOfLines:(int)arg3;
- (void)_touchCaptureAction:(id)arg1;
- (id)artworkImage;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setArtworkImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)sizeToFit;

@end
