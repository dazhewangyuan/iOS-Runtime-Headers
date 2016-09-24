/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate> {
    NSCache * _componentCache;
    NSMapTable * _componentDictionary;
    NSObject<OS_dispatch_queue> * _componentQueue;
    NSHashTable * _components;
    TSPObjectContext * _context;
    int  _ignoreCachedObjectEvictionCount;
    BOOL  _isTornDown;
    TSPComponent * _packageMetadataComponent;
    NSObject<OS_dispatch_queue> * _readFlushedComponentQueue;
    TSPComponent * _viewStateComponent;
}

@property (nonatomic, readonly) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSPComponent *documentComponent;
@property (nonatomic, readonly) TSPComponent *documentMetadataComponent;
@property (nonatomic, readonly) TSPComponent *documentObjectContainerComponent;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isDocumentComponentTreeModified;
@property (nonatomic, readonly) BOOL isSupportComponentTreeModified;
@property (nonatomic, readonly) TSPComponent *packageMetadataComponent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSPComponent *supportComponent;
@property (nonatomic, readonly) TSPComponent *supportMetadataComponent;
@property (nonatomic, readonly) TSPComponent *supportObjectContainerComponent;
@property (retain) TSPComponent *viewStateComponent;

+ (id)componentManagersPerformingCacheOperationOnCurrentThread;

- (void).cxx_destruct;
- (void)beginIgnoringCachedObjectEviction;
- (void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
- (id)componentForRootObjectIdentifier:(int)arg1;
- (void)componentForRootObjectIdentifier:(int)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)componentForRootObjectOfLazyReference:(id)arg1;
- (void)componentForRootObjectOfLazyReference:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)arg1;
- (id)context;
- (void)continueCacheOperationUsingBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg1;
- (void)discardOrphanedComponents;
- (id)documentComponent;
- (id)documentComponentImpl;
- (id)documentMetadataComponent;
- (id)documentObjectContainerComponent;
- (void)endIgnoringCachedObjectEviction;
- (void)enumerateComponents:(id /* block */)arg1;
- (void)evictAllCachedObjects;
- (void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (BOOL)isActive;
- (BOOL)isDocumentComponentTreeModified;
- (BOOL)isPerformingCacheOperation;
- (BOOL)isSupportComponentTreeModified;
- (void)loadFromPackage:(id)arg1 metadata:(id)arg2;
- (id)objectForIdentifier:(int)arg1;
- (unsigned int)objectTargetType;
- (id)packageMetadataComponent;
- (void)performCacheOperationUsingBlock:(id /* block */)arg1;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)retrieveOrCreateComponentForRootObject:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)rootComponentForPackageIdentifier:(unsigned char)arg1;
- (id)rootComponentWithIdentifierImpl:(int)arg1 locator:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (void)setViewStateComponent:(id)arg1;
- (BOOL)shouldKeepAllCachedObjectsInMemory;
- (id)supportComponent;
- (id)supportComponentImpl;
- (id)supportMetadataComponent;
- (id)supportObjectContainerComponent;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)tearDown;
- (void)traverseComponentTreeFromRoot:(id)arg1 accessor:(id /* block */)arg2;
- (id)viewStateComponent;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2 shouldCaptureSnapshot:(BOOL)arg3;

@end
