/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedDataSourceManager : PXMemoriesFeedDataSourceManagerBase <PXPhotoLibraryUIChangeObserver> {
    unsigned int  __firstUngroupedMemoryIndex;
    BOOL  __generatingAdditionalEntries;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    unsigned int  _workTag;
}

@property (setter=_setFirstUngroupedMemoryIndex:, nonatomic) unsigned int _firstUngroupedMemoryIndex;
@property (getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:, nonatomic) BOOL _generatingAdditionalEntries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)_firstUngroupedMemoryIndex;
- (void)_generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned int)arg2 sync:(BOOL)arg3;
- (void)_handleFinishedGeneratingAdditionalEntriesWithNewDataSource:(id)arg1 changeDetails:(id)arg2 firstUngroupedMemoryIndex:(unsigned int)arg3;
- (unsigned int)_indexOfEntry:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned int)arg3;
- (unsigned int)_indexOfEntryForMemory:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned int)arg3;
- (BOOL)_isGeneratingAdditionalEntries;
- (void)_setFirstUngroupedMemoryIndex:(unsigned int)arg1;
- (void)_setGeneratingAdditionalEntries:(BOOL)arg1;
- (void)generateAdditionalEntriesIfPossible;
- (void)generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned int)arg2 sync:(BOOL)arg3;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)objectReferenceForMemory:(id)arg1;
- (void)startGeneratingMemories;

@end
