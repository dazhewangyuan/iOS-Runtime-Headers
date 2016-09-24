/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIItemArtworkContext * _artworkContext;
    UICollectionView * _collectionView;
    struct SKUILockupStyle { 
        int artworkSize; 
        int layoutStyle; 
        unsigned int visibleFields; 
    }  _defaultLockupStyle;
    BOOL  _delegateWantsWillDisplay;
    BOOL  _didInitialReload;
    struct CGSize { 
        double width; 
        double height; 
    }  _expectedImageSize;
    NSMutableIndexSet * _hiddenIconIndexSet;
    NSArray * _lockups;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxCellSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxImageSize;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } iconSize; 
        struct CGSize { 
            double width; 
            double height; 
        } newsstandSize; 
        struct CGSize { 
            double width; 
            double height; 
        } newsstandSwooshSize; 
        struct CGSize { 
            double width; 
            double height; 
        } videoLockupIconSize; 
        struct CGSize { 
            double width; 
            double height; 
        } videoThumbnailSize; 
        double horizontalPadding; 
        double interItemSpacingMixed; 
        double interItemSpacingNewsstand; 
        double interItemSpacingVideoLockup; 
    }  _metrics;
    BOOL  _seeAllHidden;
    int  _seeAllStyle;
    NSString * _seeAllTitle;
    NSURL * _seeAllURL;
    int  _swooshType;
    SKUISwooshView * _swooshView;
    SKUIVideoImageDataConsumer * _videoImageConsumer;
}

@property (nonatomic, readonly) SKUIItemArtworkContext *artworkContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, copy) NSArray *lockups;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } seeAllButtonFrame;
@property (getter=isSeeAllHidden, nonatomic) BOOL seeAllHidden;
@property (nonatomic, readonly) NSURL *seeAllURL;
@property (readonly) Class superclass;
@property (nonatomic) int swooshType;
@property (nonatomic, readonly) SKUIVideoImageDataConsumer *videoImageConsumer;

+ (int)_swooshTypeForLockups:(id)arg1;

- (void).cxx_destruct;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; double x7; double x8; double x9; })_lockupSwooshMetrics;
- (struct CGSize { double x1; double x2; })_maximumCellSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_newArtworkContextForSwooshType:(int)arg1;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;
- (void)_reloadSizes;
- (void)_seeAllAction:(id)arg1;
- (void)_setExpectedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)artworkContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;
- (void)deselectAllItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(int)arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithItemList:(id)arg1;
- (id)initWithSwoosh:(id)arg1;
- (BOOL)isSeeAllHidden;
- (id)items;
- (void)loadView;
- (id)lockups;
- (id)popImageViewForItemAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })seeAllButtonFrame;
- (id)seeAllURL;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setItemsWithLockups:(id)arg1;
- (void)setLockups:(id)arg1;
- (void)setSeeAllHidden:(BOOL)arg1;
- (void)setSwooshType:(int)arg1;
- (void)setVideoThumbnail:(id)arg1 forItemAtIndex:(int)arg2;
- (int)swooshType;
- (void)unhideImages;
- (id)videoImageConsumer;
- (void)viewWillAppear:(BOOL)arg1;

@end
