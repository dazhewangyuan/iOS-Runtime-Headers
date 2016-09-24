/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeWidthCache : NSObject {
    unsigned int  mCount;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  mLock;
    struct vector<float, std::__1::allocator<float> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<float> > { 
            double *__first_; 
        } __end_cap_; 
    }  mStrokeWidth;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)setStrokeWidth:(float)arg1 forGridIndex:(unsigned int)arg2;
- (float)strokeWidthForGridIndex:(unsigned int)arg1;

@end
