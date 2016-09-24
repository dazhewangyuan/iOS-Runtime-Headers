/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCollectionViewLayoutCache : UICollectionViewLayout {
    BOOL  _cachesResults;
    NSMutableDictionary * _decorationViewLayoutAttributesByKind;
    NSMutableDictionary * _itemLayoutAttributesByIndexPath;
    <PUCollectionViewLayoutProvider> * _layoutProvider;
    struct { 
        unsigned int hasSupplementaryLayoutAttributes : 1; 
        unsigned int hasDecorationLayoutAttributes : 1; 
    }  _layoutProviderFlags;
    NSMutableDictionary * _supplementaryViewLayoutAttributesByKind;
}

@property (nonatomic) BOOL cachesResults;
@property (nonatomic, readonly) <PUCollectionViewLayoutProvider> *layoutProvider;

- (void).cxx_destruct;
- (BOOL)cachesResults;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (id)initWithProvider:(id)arg1;
- (void)invalidateLayoutCache;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutProvider;
- (void)setCachesResults:(BOOL)arg1;

@end
