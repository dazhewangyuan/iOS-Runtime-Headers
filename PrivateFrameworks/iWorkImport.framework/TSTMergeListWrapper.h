/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeListWrapper : NSObject {
    struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { 
        struct TSUCellRect {} *__begin_; 
        struct TSUCellRect {} *__end_; 
        struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { 
            struct TSUCellRect {} *__first_; 
        } __end_cap_; 
    }  _mergeList;
}

@property (readonly) unsigned int count;
@property (readonly) BOOL isEmpty;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned int)count;
- (void)enumerateRangesUsingBlock:(id /* block */)arg1;
- (id)initWithMergeList:(const struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; }*)arg1;
- (BOOL)isEmpty;
- (id)regionForList;

@end
