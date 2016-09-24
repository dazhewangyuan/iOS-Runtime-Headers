/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {
    double  _compressionResistancePriority;
    double  _huggingPriority;
}

@property (readonly) double compressionResistancePriority;
@property (readonly) double huggingPriority;

- (id)_priorityDescription;
- (float)compressionResistancePriority;
- (float)huggingPriority;
- (id)initWithLayoutItem:(id)arg1 value:(float)arg2 huggingPriority:(float)arg3 compressionResistancePriority:(float)arg4 orientation:(int)arg5;
- (float)priorityForVariable:(id)arg1;

@end
