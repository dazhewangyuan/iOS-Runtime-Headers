/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewCompositionLayout : UICollectionViewLayout {
    NSMutableDictionary * _sublayoutsDict;
}

@property (nonatomic, readonly) NSArray *sublayouts;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLayout:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 relativeToEdges:(unsigned int)arg3 fromSiblingLayout:(id)arg4;
- (id)_originConvertedSublayoutAttributesForAttributes:(id)arg1 inLayout:(id)arg2;
- (void)_prepareLayout:(id)arg1;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(int)arg3 offset:(struct CGPoint { double x1; double x2; })arg4 relativeToEdges:(unsigned int)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 relativeToEdges:(unsigned int)arg4 fromSiblingLayout:(id)arg5;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (void)invalidateLayoutWithContext:(/* Warning: unhandled struct encoding: '{_UICollectionViewCompositionLayoutInvalidationContext=#@}' */ struct _UICollectionViewCompositionLayoutInvalidationContext { Class x1; id x2; }*)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (void)removeSublayout:(id)arg1;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)sublayouts;

@end
