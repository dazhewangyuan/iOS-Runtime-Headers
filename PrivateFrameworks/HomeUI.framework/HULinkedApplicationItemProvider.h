/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULinkedApplicationItemProvider : HFItemProvider {
    NSSet * _accessories;
    NSSet * _linkedApplicationItems;
}

@property (nonatomic, retain) NSSet *accessories;
@property (nonatomic, retain) NSSet *linkedApplicationItems;

+ (BOOL)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)_generateItemsFromStoreResult:(id)arg1;
- (int)_iconVariantForScale:(float)arg1;
- (id)_imageForSize:(struct CGSize { double x1; double x2; })arg1 fromArtwork:(id)arg2;
- (id)_itemForLibraryItem:(id)arg1;
- (id)_itemForStoreItem:(id)arg1;
- (id)_loadStoreIconWithArtwork:(id)arg1 results:(id)arg2;
- (id)_performLibraryLookup;
- (id)_performStoreLookupWithLibraryResult:(id)arg1;
- (id)accessories;
- (id)initWithHome:(id)arg1 accessories:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)linkedApplicationItems;
- (id)reloadItems;
- (void)setAccessories:(id)arg1;
- (void)setLinkedApplicationItems:(id)arg1;

@end
