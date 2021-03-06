/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetExplorerReviewScreenActionManager : PUAssetActionManager {
    unsigned int  __sourceType;
    PUUUIDSelectionManager * _disableLivePhotosSelectionManager;
    <PUReviewAssetProvider> * _reviewAssetProvider;
    <PUAssetExplorerReviewScreenActionManagerDelegate> * _reviewScreenActionManagerDelegate;
    PUUUIDSelectionManager * _selectionManager;
}

@property (nonatomic, readonly) unsigned int _sourceType;
@property (nonatomic, readonly) PUUUIDSelectionManager *disableLivePhotosSelectionManager;
@property (nonatomic) <PUReviewAssetProvider> *reviewAssetProvider;
@property (nonatomic) <PUAssetExplorerReviewScreenActionManagerDelegate> *reviewScreenActionManagerDelegate;
@property (nonatomic, readonly) PUUUIDSelectionManager *selectionManager;

- (void).cxx_destruct;
- (Class)_actionPerformerClassForActionType:(unsigned int)arg1;
- (BOOL)_hasReviewScreenActionTypeForAssetActionType:(unsigned int)arg1;
- (unsigned int)_reviewScreenActionTypeForAssetActionType:(unsigned int)arg1;
- (unsigned int)_sourceType;
- (id)actionPerformerForSimpleActionType:(unsigned int)arg1 onAssetsByAssetCollection:(id)arg2;
- (BOOL)canPerformActionType:(unsigned int)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)disableLivePhotosSelectionManager;
- (id)initWithSourceType:(unsigned int)arg1;
- (id)reviewAssetProvider;
- (id)reviewScreenActionManagerDelegate;
- (id)selectionManager;
- (void)setReviewAssetProvider:(id)arg1;
- (void)setReviewScreenActionManagerDelegate:(id)arg1;
- (BOOL)shouldEnableActionType:(unsigned int)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;

@end
