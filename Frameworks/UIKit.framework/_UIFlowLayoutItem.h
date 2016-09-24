/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFlowLayoutItem : NSObject {
    struct { 
        unsigned int sizeEstimated : 1; 
        unsigned int positionEstimated : 1; 
        unsigned int sizeHasBeenSet : 1; 
    }  _itemFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _itemFrame;
    _UIFlowLayoutRow * _rowObject;
    _UIFlowLayoutSection * _section;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } itemFrame;
@property (getter=isPositionEstimated, nonatomic) BOOL positionEstimated;
@property (nonatomic) _UIFlowLayoutRow *rowObject;
@property (nonatomic) _UIFlowLayoutSection *section;
@property (getter=isSizeEstimated, nonatomic) BOOL sizeEstimated;
@property (nonatomic) BOOL sizeHasBeenSet;

- (void).cxx_destruct;
- (id)copy;
- (BOOL)isPositionEstimated;
- (BOOL)isSizeEstimated;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemFrame;
- (id)rowObject;
- (id)section;
- (void)setItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPositionEstimated:(BOOL)arg1;
- (void)setRowObject:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSizeEstimated:(BOOL)arg1;
- (void)setSizeHasBeenSet:(BOOL)arg1;
- (BOOL)sizeHasBeenSet;

@end
