/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextSelectionRect : NSObject

@property (nonatomic, readonly) BOOL containsEnd;
@property (nonatomic, readonly) BOOL containsStart;
@property (getter=_isImpl, nonatomic, readonly) UITextSelectionRectImpl *isImpl;
@property (nonatomic, readonly) BOOL isVertical;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, readonly) int writingDirection;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdgeFromRects:(id)arg1;
+ (BOOL)endIsHorizontal:(id)arg1;
+ (id)endRectFromRects:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdgeFromRects:(id)arg1;
+ (BOOL)startIsHorizontal:(id)arg1;
+ (id)startRectFromRects:(id)arg1;

- (id)_isImpl;
- (BOOL)containsEnd;
- (BOOL)containsStart;
- (BOOL)isVertical;
- (id)range;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (int)writingDirection;

@end
