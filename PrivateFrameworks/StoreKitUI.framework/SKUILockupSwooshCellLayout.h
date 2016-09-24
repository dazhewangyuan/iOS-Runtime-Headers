/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout {
    UILabel * _artistNameLabel;
    UILabel * _categoryLabel;
    UIImageView * _iconHighlightImageView;
    UILabel * _itemCountLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxImageSize;
    UILabel * _priceLabel;
    UIColor * _primaryTextColor;
    UIColor * _titleColor;
    UILabel * _titleLabel;
    UIImageView * _videoHighlightImageView;
    UIImageView * _videoImageView;
    UIImageView * _videoPlayButtonImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoSize;
    unsigned int  _visibleFields;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *itemCountString;
@property (nonatomic) struct CGSize { double x1; double x2; } maxImageSize;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct CGSize { double x1; double x2; } videoSize;
@property (nonatomic, retain) UIImage *videoThumbnailImage;
@property (nonatomic) unsigned int visibleFields;

- (void).cxx_destruct;
- (void)_layoutFieldsHorizontal;
- (void)_layoutFieldsVertical;
- (id)_newDefaultLabel;
- (void)_reloadHighlight;
- (void)_reloadPriceLabel;
- (void)_removeHighlightViews;
- (id)artistName;
- (id)category;
- (struct CGSize { double x1; double x2; })cellSizeForImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)itemCountString;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxImageSize;
- (id)price;
- (void)setArtistName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItemCountString:(id)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)setMaxImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrice:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoThumbnailImage:(id)arg1;
- (void)setVisibleFields:(unsigned int)arg1;
- (id)title;
- (struct CGSize { double x1; double x2; })videoSize;
- (id)videoThumbnailImage;
- (unsigned int)visibleFields;

@end
