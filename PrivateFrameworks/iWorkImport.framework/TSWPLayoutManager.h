/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver> {
    struct TSWPTopicNumberHints { 
        struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { 
            struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { 
                struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __first_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { 
                    unsigned long __first_; 
                } __pair3_; 
            } __tree_; 
        } _numbersForListStyle; 
        unsigned int _charIndex; 
        unsigned int _validThroughCharIndex; 
    }  _cachedTopicNumbers;
    struct TSWPDirtyRangeVector { 
        struct TSWPDirtyRange {} *__begin_; 
        struct TSWPDirtyRange {} *__end_; 
        struct __compressed_pair<TSWPDirtyRange *, std::__1::allocator<TSWPDirtyRange> > { 
            struct TSWPDirtyRange {} *__first_; 
        } __end_cap_; 
    }  _dirtyRanges;
    BOOL  _isObservingStorage;
    <TSWPLayoutOwner> * _owner;
    TSWPStorage * _storage;
    TSWPCTTypesetterCache * _typesetterCache;
    BOOL  _useLigatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const struct TSWPDirtyRangeVector { struct TSWPDirtyRange {} *x1; struct TSWPDirtyRange {} *x2; /* Warning: unhandled struct encoding: '{__compressed_pair<TSWPDirtyRange *' */ struct x3; }*dirtyRanges; /* unknown property attribute:  std::__1::allocator<TSWPDirtyRange> >=^{TSWPDirtyRange}}} */
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <TSWPLayoutOwner> *owner;
@property (nonatomic, readonly, retain) TSWPStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) TSWPCTTypesetterCache *typesetterCache;

+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned int)arg3 firstColumnIndex:(unsigned int)arg4 precedingHeight:(float)arg5 height:(float)arg6 alreadyHasMargins:(BOOL)arg7 styleProvider:(id)arg8 vertical:(BOOL)arg9;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearOwner;
- (void)clearTypesetterCache;
- (void)dealloc;
- (void)deflateTarget:(id)arg1 intoHints:(struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > { struct TSWPTargetHint {} *x1; struct TSWPTargetHint {} *x2; struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> > { struct TSWPTargetHint {} *x_3_1_1; } x3; }*)arg2 childHints:(inout id)arg3 anchoredDrawablePositions:(id*)arg4 topicNumbers:(struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg5 layoutState:(void*)arg6;
- (void)destroyLayoutState:(void*)arg1;
- (const struct TSWPDirtyRangeVector { struct TSWPDirtyRange {} *x1; struct TSWPDirtyRange {} *x2; struct __compressed_pair<TSWPDirtyRange *, std::__1::allocator<TSWPDirtyRange> > { struct TSWPDirtyRange {} *x_3_1_1; } x3; }*)dirtyRanges;
- (void)inflateTarget:(id)arg1 fromHints:(const struct vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> > { struct TSWPTargetHint {} *x1; struct TSWPTargetHint {} *x2; struct __compressed_pair<TSWPTargetHint *, std::__1::allocator<TSWPTargetHint> > { struct TSWPTargetHint {} *x_3_1_1; } x3; }*)arg2 childHint:(id)arg3 anchoredDrawablePositions:(id)arg4 topicNumbers:(const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg5;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;
- (void*)layoutIntoTarget:(id)arg1 withLayoutState:(void*)arg2 outSync:(BOOL*)arg3;
- (id)layoutMetricsCache;
- (void*)layoutStateForLayoutAfterHint:(const struct TSWPTargetHint { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; struct _NSRange { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; unsigned int x5; unsigned int x6; bool x7; }*)arg1 childHint:(id)arg2 topicNumbers:(const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg3 textIsVertical:(BOOL)arg4;
- (BOOL)needsLayoutInColumn:(id)arg1;
- (id)owner;
- (int)p_layoutConfigFlagsForTarget:(id)arg1;
- (void)resetDirtyRange;
- (id)storage;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 delta:(int)arg3 broadcastKind:(int)arg4;
- (id)styleProvider;
- (id)typesetterCache;
- (void)willRemoveAttachmentLayout:(id)arg1;

@end
