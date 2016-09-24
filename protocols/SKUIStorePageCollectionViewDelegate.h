/* Generated by RuntimeBrowser.
 */

@protocol SKUIStorePageCollectionViewDelegate <UICollectionViewDelegateFlowLayout>

@optional

- (IKColor *)backgroundColorForSection:(int)arg1;
- (BOOL)collectionView:(UICollectionView *)arg1 canScrollCellAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndEditingItemAtIndexPath:(NSIndexPath *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningContentInsetForItemAtIndexPath:(NSIndexPath *)arg3;
- (int)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningStyleForItemAtIndexPath:(NSIndexPath *)arg3;
- (int)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningTransitionStyleForItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 willApplyLayoutAttributes:(SKUICollectionViewLayoutAttributes *)arg3;
- (void)collectionView:(UICollectionView *)arg1 willBeginEditingItemAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)indexPathsForGradientItemsInCollectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2;
- (NSArray *)indexPathsForPinningItemsInCollectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2;

@end
