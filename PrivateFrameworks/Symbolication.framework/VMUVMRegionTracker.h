/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUVMRegionTracker : NSObject {
    NSMutableArray * _regionInfoArray;
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    }  _symbolicator;
    unsigned int  _task;
}

- (unsigned int)_regionIndexForAddress:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)handleStackLogEvent:(struct mach_stack_logging_record { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (id)initWithTask:(unsigned int)arg1 stackLogReader:(id)arg2;
- (id)vmRegionRangeInfoForRange:(struct _VMURange { unsigned int x1; unsigned int x2; })arg1;

@end
