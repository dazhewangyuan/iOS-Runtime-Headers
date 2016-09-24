/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying> {
    NTKLayoutRule * _layoutRule;
}

@property (nonatomic, retain) NTKLayoutRule *layoutRule;

+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRightSideMargin:(float)arg2;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRightSideMargin:(float)arg2 withBaselineY:(float)arg3;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)layoutRule;
- (void)setLayoutRule:(id)arg1;

@end
