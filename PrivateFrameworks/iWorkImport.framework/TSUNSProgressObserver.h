/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNSProgressObserver : NSObject {
    TSUBasicProgress * _basicProgress;
    double  _basicProgressMaxValue;
    BOOL  _didStart;
    NSProgress * _nsProgress;
    TSUProgressContext * _progressContext;
}

+ (id)observerForNSProgress:(id)arg1 reportingToBasicProgress:(id)arg2 maxValue:(double)arg3;
+ (id)observerForNSProgress:(id)arg1 reportingToProgressContext:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithNSProgress:(id)arg1 progressContext:(id)arg2 basicProgress:(id)arg3 basicProgressMaxValue:(double)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)start;
- (void)stop;

@end
