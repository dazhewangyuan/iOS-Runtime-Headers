/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueInMemory : SGDHarvestQueue {
    int  _itemIdCounter;
    NSMutableArray * _items;
    unsigned int  _limit;
    SGDHarvestQueue * _other;
    NSObject<OS_dispatch_queue> * _queue;
    double  _ttl;
}

@property (nonatomic, readonly) SGDHarvestQueue *other;

- (void).cxx_destruct;
- (void)_deleteWithItemId:(int)arg1;
- (void)_flushWithIndexLockedAsync:(unsigned int)arg1;
- (void)_flushWithItemIdLockedAsync:(int)arg1;
- (int)_indexOfItemWithIdLocked:(int)arg1;
- (void)_popCallback:(id /* block */)arg1 where:(id /* block */)arg2 or:(id /* block */)arg3;
- (void)_sortLocked;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 item:(id)arg4 callback:(id /* block */)arg5;
- (void)close;
- (unsigned int)count;
- (void)countHighPriorityItems:(unsigned int*)arg1 lowPriorityItems:(unsigned int*)arg2;
- (void)deleteAllItemsDangerously;
- (id)initWithLimit:(unsigned int)arg1 ttl:(double)arg2 flushingToQueue:(id)arg3;
- (id)other;
- (void)pop:(id /* block */)arg1;
- (void)popByItemId:(int)arg1 callback:(id /* block */)arg2;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* block */)arg3;
- (void)popHighPriority:(id /* block */)arg1;
- (void)writePermafail:(id)arg1;

@end
