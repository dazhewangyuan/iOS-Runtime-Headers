/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedPlayerCell : PUFeedCell {
    UIButton * __commentButton;
    BOOL  __isPerformingIrisPlayerChanges;
    BOOL  __needsUpdatePlayerItem;
    BOOL  __needsUpdateVitality;
    ISLivePhotoPlayer * __player;
    ISLivePhotoUIView * __playerView;
    BOOL  __shouldHideCommentButton;
    int  _commentCount;
    UICollectionView * _containingCollectionView;
    int  _currentImageRequestID;
    BOOL  _isPhotoImageDegraded;
    UIImage * _photoImage;
    double  _photoTime;
    BOOL  _playerHidden;
    AVAsset * _videoAsset;
}

@property (setter=_setCommentButton:, nonatomic, retain) UIButton *_commentButton;
@property (setter=_setPerformingIrisPlayerChanges:, nonatomic) BOOL _isPerformingIrisPlayerChanges;
@property (setter=_setNeedsUpdatePlayerItem:, nonatomic) BOOL _needsUpdatePlayerItem;
@property (setter=_setNeedsUpdateVitality:, nonatomic) BOOL _needsUpdateVitality;
@property (nonatomic, readonly) ISLivePhotoPlayer *_player;
@property (nonatomic, readonly) ISLivePhotoUIView *_playerView;
@property (setter=_setShouldHideCommentButton:, nonatomic) BOOL _shouldHideCommentButton;
@property (nonatomic) int commentCount;
@property (nonatomic) UICollectionView *containingCollectionView;
@property (nonatomic) int currentImageRequestID;
@property (setter=setPhotoImageDegraded:, nonatomic) BOOL isPhotoImageDegraded;
@property (nonatomic, retain) UIImage *photoImage;
@property (nonatomic) double photoTime;
@property (getter=isPlayerHidden, nonatomic) BOOL playerHidden;
@property (nonatomic, retain) AVAsset *videoAsset;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)_assertInsideIrisPlayerChanges;
- (id)_commentButton;
- (void)_handleCommentButton:(id)arg1;
- (void)_invalidatePlayerItem;
- (void)_invalidateVitality;
- (BOOL)_isPerformingIrisPlayerChanges;
- (void)_layoutPlayerView;
- (BOOL)_needsUpdateIris;
- (BOOL)_needsUpdatePlayerItem;
- (BOOL)_needsUpdateVitality;
- (id)_player;
- (id)_playerCellDelegate;
- (id)_playerView;
- (void)_setCommentButton:(id)arg1;
- (void)_setNeedsUpdateIris;
- (void)_setNeedsUpdatePlayerItem:(BOOL)arg1;
- (void)_setNeedsUpdateVitality:(BOOL)arg1;
- (void)_setPerformingIrisPlayerChanges:(BOOL)arg1;
- (void)_setShouldHideCommentButton:(BOOL)arg1;
- (BOOL)_shouldHideCommentButton;
- (void)_updateCommentButton;
- (void)_updateIrisIfNeeded;
- (void)_updatePlayerItemIfNeeded;
- (void)_updateVitalityIfNeeded;
- (int)commentCount;
- (id)containingCollectionView;
- (int)currentImageRequestID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isPhotoImageDegraded;
- (BOOL)isPlayerHidden;
- (void)layoutSubviews;
- (void)performIrisPlayerChanges:(id /* block */)arg1;
- (id)photoImage;
- (double)photoTime;
- (void)prepareForReuse;
- (void)setCommentCount:(int)arg1;
- (void)setContainingCollectionView:(id)arg1;
- (void)setCurrentImageRequestID:(int)arg1;
- (void)setParallaxOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhotoImage:(id)arg1;
- (void)setPhotoImageDegraded:(BOOL)arg1;
- (void)setPhotoTime:(double)arg1;
- (void)setPlayerHidden:(BOOL)arg1;
- (void)setVideoAsset:(id)arg1;
- (id)videoAsset;

@end
