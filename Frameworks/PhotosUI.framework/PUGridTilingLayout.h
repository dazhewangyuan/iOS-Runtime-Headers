/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridTilingLayout : PUSectionedTilingLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _interItemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    int  _numberOfColumns;
}

@property (nonatomic) struct CGSize { double x1; double x2; } interItemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemAtIndexPath:(id)arg1;
- (int)_numberOfColumns;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 section:(int)arg2 toSet:(id)arg3;
- (struct CGSize { double x1; double x2; })estimatedSectionSize;
- (id)init;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)preferredScrollInfo;
- (void)prepareLayout;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForSection:(int)arg1 numberOfItems:(int)arg2;

@end
