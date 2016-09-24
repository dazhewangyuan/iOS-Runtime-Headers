/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFastReadInvalidatingCache : NSObject {
    NSCondition * mCondition;
    id /* block */  mGenerator;
    BOOL  mIsGenerating;
    int  mReaderCount;
    BOOL  mReentrant;
    NSArray * mToDispose;
    id  mValue;
}

- (void)dealloc;
- (id)initForReentrant:(BOOL)arg1 withGenerator:(id /* block */)arg2;
- (void)invalidate;
- (void)p_setValue:(id)arg1;
- (id)value;

@end
