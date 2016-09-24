/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QueryResultSet : NSObject <NSCopying> {
    ML3QueryResultSet_BackingStore * _backingStore;
    NSObject<OS_dispatch_queue> * _fixedPriorityQueue;
    int  _localRevision;
    ML3Query * _query;
    NSObject<OS_dispatch_queue> * _queue;
    int  _revision;
    BOOL  _supportsIncrementalUpdate;
    NSMutableArray * _updateToLibraryCurrentRevisionCompletionBlocks;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) int localRevision;
@property (nonatomic, readonly) ML3Query *query;
@property (nonatomic, readonly) int revision;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void).cxx_destruct;
- (id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(BOOL)arg2;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(const struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; }*)arg1 changedPIDs:(struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg2;
- (void)_onQueueAddUpdateFinishedBlock:(id /* block */)arg1;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)arg1;
- (BOOL)_updateToLibraryCurrentRevision;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)initWithQuery:(id)arg1;
- (int)localRevision;
- (int)persistentIDAtIndex:(unsigned int)arg1;
- (id)query;
- (int)revision;
- (BOOL)updateToLibraryCurrentRevision;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void)enumerateSectionHeadersUsingBlock:(id /* block */)arg1;
- (id)sectionIndexTitles;

@end
