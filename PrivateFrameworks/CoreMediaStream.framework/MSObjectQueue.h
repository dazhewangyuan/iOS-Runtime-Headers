/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSObjectQueue : NSObject {
    struct sqlite3 { } * _db;
    struct __CFDictionary { } * _statements;
}

@property (readonly) int count;

- (id)_objectWrapperFromQueueQuery:(struct sqlite3_stmt { }*)arg1 outSize:(int*)arg2;
- (struct sqlite3_stmt { }*)_statementLabel:(id)arg1 query:(const char *)arg2;
- (id)allObjectWrappersMaxCount:(int)arg1;
- (id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(int)arg1;
- (void)appendObjectWrappers:(id)arg1;
- (void)commitErrorCountsForObjectWrappers:(id)arg1;
- (void)commitObjectsWrappers:(id)arg1;
- (int)count;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)objectWrappersWithZeroSizeMaxCount:(int)arg1;
- (void)removeAllObjectWrappersFromQueue;
- (void)removeObjectWrappersFromQueue:(id)arg1;
- (id)smallestObjectWrappersTargetTotalSize:(int)arg1 maxCount:(int)arg2;

@end
