/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXWidgetBarSpec : NSObject <NSCopying> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _distanceBetweenLastBaselineAndBottom;
    double  _distanceBetweenTitleBaselineAndSubtitleBaseline;
    double  _distanceBetweenTopAndFirstBaseline;
    double  _horizontalSpacingBetweenTitleAndSubtitle;
    double  _minimumDistanceBetweenLastDescenderAndBottom;
    double  _minimumDistanceBetweenTopAndFirstAscender;
    struct UIFont { Class x1; } * _primaryFont;
    struct UIFont { Class x1; } * _secondaryFont;
    BOOL  _shouldUseSingleLine;
    struct UIColor { Class x1; } * _textColor;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) double distanceBetweenLastBaselineAndBottom;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double distanceBetweenTopAndFirstBaseline;
@property (nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;
@property (nonatomic) double minimumDistanceBetweenLastDescenderAndBottom;
@property (nonatomic) double minimumDistanceBetweenTopAndFirstAscender;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic, retain) UIFont *secondaryFont;
@property (nonatomic) BOOL shouldUseSingleLine;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)distanceBetweenLastBaselineAndBottom;
- (float)distanceBetweenTitleBaselineAndSubtitleBaseline;
- (float)distanceBetweenTopAndFirstBaseline;
- (float)horizontalSpacingBetweenTitleAndSubtitle;
- (float)minimumDistanceBetweenLastDescenderAndBottom;
- (float)minimumDistanceBetweenTopAndFirstAscender;
- (struct UIFont { Class x1; }*)primaryFont;
- (struct UIFont { Class x1; }*)secondaryFont;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDistanceBetweenLastBaselineAndBottom:(float)arg1;
- (void)setDistanceBetweenTitleBaselineAndSubtitleBaseline:(float)arg1;
- (void)setDistanceBetweenTopAndFirstBaseline:(float)arg1;
- (void)setHorizontalSpacingBetweenTitleAndSubtitle:(float)arg1;
- (void)setMinimumDistanceBetweenLastDescenderAndBottom:(float)arg1;
- (void)setMinimumDistanceBetweenTopAndFirstAscender:(float)arg1;
- (void)setPrimaryFont:(struct UIFont { Class x1; }*)arg1;
- (void)setSecondaryFont:(struct UIFont { Class x1; }*)arg1;
- (void)setShouldUseSingleLine:(BOOL)arg1;
- (void)setTextColor:(struct UIColor { Class x1; }*)arg1;
- (BOOL)shouldUseSingleLine;
- (struct UIColor { Class x1; }*)textColor;

@end
