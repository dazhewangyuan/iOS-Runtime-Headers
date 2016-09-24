/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderGeometry : NSObject <NSCopying> {
    int  _concaveCorner;
    struct CGSize { 
        double width; 
        double height; 
    }  _concaveCornerOffset;
    BOOL  _detachedVariants;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _displayFrame;
    int  _flickDirection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _paddedFrame;
    int  _popupBias;
    struct CGPoint { 
        double x; 
        double y; 
    }  _popupSource;
    int  _roundRectCorners;
    double  _roundRectRadius;
    NSValue * _splitLeftRect;
    NSValue * _splitRightRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _symbolFrame;
    BOOL  _tallPopup;
}

@property (nonatomic) int concaveCorner;
@property (nonatomic) struct CGSize { double x1; double x2; } concaveCornerOffset;
@property (nonatomic) BOOL detachedVariants;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } displayFrame;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } displayInsets;
@property (nonatomic) int flickDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paddedFrame;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddedInsets;
@property (nonatomic) int popupBias;
@property (nonatomic) struct CGPoint { double x1; double x2; } popupSource;
@property (nonatomic) int roundRectCorners;
@property (nonatomic) double roundRectRadius;
@property (nonatomic, retain) NSValue *splitLeftRect;
@property (nonatomic, retain) NSValue *splitRightRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } symbolFrame;
@property (nonatomic) BOOL tallPopup;

+ (id)geometryWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)geometryWithShape:(id)arg1;
+ (id)sortedGeometries:(id)arg1 leftToRight:(BOOL)arg2;

- (id)_copyForDirection:(int)arg1 positionFactor:(float)arg2 sizeFactor:(float)arg3 scale:(float)arg4;
- (unsigned int)adjustForTranslucentGapsInFrameWithSize_10Key:(struct CGSize { double x1; double x2; })arg1 centerX:(float)arg2 isInBottomRow:(BOOL)arg3;
- (unsigned int)adjustForTranslucentGapsWithSize:(struct CGSize { double x1; double x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)adjustToTopWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)applyInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)applyOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)applyShadowInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (int)concaveCorner;
- (struct CGSize { double x1; double x2; })concaveCornerOffset;
- (id)copyForFlickDirection:(int)arg1 scale:(float)arg2;
- (id)copyForPopupDirection:(int)arg1 scale:(float)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)detachedVariants;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })displayInsets;
- (int)flickDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)iPadVariantGeometries:(unsigned int)arg1 rowLimit:(int)arg2;
- (id)iPhoneVariantGeometries:(unsigned int)arg1;
- (id)initWithShape:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)makeIntegralWithScale:(float)arg1;
- (void)overlayWithGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddedInsets;
- (int)popupBias;
- (struct CGPoint { double x1; double x2; })popupSource;
- (int)roundRectCorners;
- (float)roundRectRadius;
- (void)setConcaveCorner:(int)arg1;
- (void)setConcaveCornerOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setDetachedVariants:(BOOL)arg1;
- (void)setDisplayFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlickDirection:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPopupBias:(int)arg1;
- (void)setPopupSource:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRoundRectCorners:(int)arg1;
- (void)setRoundRectRadius:(float)arg1;
- (void)setSplitLeftRect:(id)arg1;
- (void)setSplitRightRect:(id)arg1;
- (void)setSymbolFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTallPopup:(BOOL)arg1;
- (id)similarShape;
- (id)splitLeftRect;
- (id)splitRightRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })symbolFrame;
- (BOOL)tallPopup;

@end
