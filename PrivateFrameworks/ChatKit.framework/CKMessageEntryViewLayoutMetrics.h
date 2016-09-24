/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryViewLayoutMetrics : NSObject {
    double  _defaultEntryContentViewHeight;
    double  _defaultEntryViewHeight;
    double  _defaultSubjectEntryContentViewHeight;
    double  _defaultSubjectEntryViewHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _entryViewContentInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _entryViewTextAlignmentInsets;
}

@property (nonatomic, readonly) double defaultEntryContentViewHeight;
@property (nonatomic, readonly) double defaultEntryViewHeight;
@property (nonatomic, readonly) double defaultSubjectEntryContentViewHeight;
@property (nonatomic, readonly) double defaultSubjectEntryViewHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } entryViewContentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } entryViewTextAlignmentInsets;

- (void)calculateTextMetrics;
- (float)defaultEntryContentViewHeight;
- (float)defaultEntryViewHeight;
- (float)defaultSubjectEntryContentViewHeight;
- (float)defaultSubjectEntryViewHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })entryViewContentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })entryViewTextAlignmentInsets;
- (id)init;

@end
