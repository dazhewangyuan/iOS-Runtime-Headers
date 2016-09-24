/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULRUCache : NSObject {
    SEL  mCallback;
    id  mCallbackTarget;
    TSUNoCopyDictionary * mData;
    unsigned int  mMax;
    NSMutableArray * mOrderedKeys;
}

@property (nonatomic, readonly) NSArray *allKeys;
@property (nonatomic, readonly) NSArray *allValues;
@property (nonatomic, readonly) unsigned int maxSize;

- (id)allKeys;
- (id)allValues;
- (void)clearEvictionCallbackTarget;
- (void)dealloc;
- (id)initWithMaxSize:(unsigned int)arg1;
- (unsigned int)maxSize;
- (id)objectForKey:(id)arg1;
- (void)p_removeOldestObject;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
