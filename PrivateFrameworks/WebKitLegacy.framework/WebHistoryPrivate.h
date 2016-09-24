/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHistoryPrivate : NSObject {
    struct unique_ptr<WTF::HashMap<int, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >, std::__1::default_delete<WTF::HashMap<int, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > > { 
        struct __compressed_pair<WTF::HashMap<int, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *, std::__1::default_delete<WTF::HashMap<int, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > > { 
            struct HashMap<int, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > {} *__first_; 
        } __ptr_; 
    }  _entriesByDate;
    NSMutableDictionary * _entriesByURL;
    NSMutableArray * _orderedLastVisitedDays;
    int  ageInDaysLimit;
    BOOL  ageInDaysLimitSet;
    int  itemLimit;
    BOOL  itemLimitSet;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addItem:(id)arg1 discardDuplicate:(BOOL)arg2;
- (void)addItemToDateCaches:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addVisitedLinksToVisitedLinkStore:(struct WebVisitedLinkStore { int (**x1)(); unsigned int x2; struct HashSet<WebCore::Page *, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct HashTable<WebCore::Page *, WebCore::Page *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct Page {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; struct HashSet<unsigned int, WebCore::LinkHashHash, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WebCore::LinkHashHash, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_4_1_1; } x4; bool x5; }*)arg1;
- (id)ageLimitDate;
- (id)allItems;
- (BOOL)containsURL:(id)arg1;
- (id)data;
- (void)dealloc;
- (BOOL)findKey:(int*)arg1 forDay:(double)arg2;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (id)init;
- (void)insertItem:(id)arg1 forDateKey:(int)arg2;
- (id)itemForURL:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (BOOL)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id*)arg3;
- (BOOL)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int*)arg2 collectDiscardedItemsInto:(id)arg3 error:(id*)arg4;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)orderedLastVisitedDays;
- (void)rebuildHistoryByDayIfNeeded:(id)arg1;
- (BOOL)removeAllItems;
- (BOOL)removeItem:(id)arg1;
- (BOOL)removeItemForURLString:(id)arg1;
- (BOOL)removeItemFromDateCaches:(id)arg1;
- (BOOL)removeItems:(id)arg1;
- (BOOL)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (void)setHistoryItemLimit:(int)arg1;
- (id)visitedURL:(id)arg1 withTitle:(id)arg2;

@end
