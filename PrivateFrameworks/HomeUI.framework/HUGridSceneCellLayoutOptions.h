/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridSceneCellLayoutOptions : HUGridCellLayoutOptions {
    double  _cellHeight;
    UIFont * _descriptionFont;
    double  _iconInnerHorizontalMargin;
    unsigned int  _numberOfTitleLines;
    double  _titleDescriptionLineSpacing;
    double  _titleInterLineSpacing;
}

@property (nonatomic) double cellHeight;
@property (nonatomic, retain) UIFont *descriptionFont;
@property (nonatomic) double iconInnerHorizontalMargin;
@property (nonatomic) unsigned int numberOfTitleLines;
@property (nonatomic) double titleDescriptionLineSpacing;
@property (nonatomic) double titleInterLineSpacing;

+ (id)defaultOptionsForCellSizeSubclass:(int)arg1;

- (void).cxx_destruct;
- (float)cellHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionFont;
- (float)iconInnerHorizontalMargin;
- (unsigned int)numberOfTitleLines;
- (void)setCellHeight:(float)arg1;
- (void)setDescriptionFont:(id)arg1;
- (void)setIconInnerHorizontalMargin:(float)arg1;
- (void)setNumberOfTitleLines:(unsigned int)arg1;
- (void)setTitleDescriptionLineSpacing:(float)arg1;
- (void)setTitleInterLineSpacing:(float)arg1;
- (float)titleDescriptionLineSpacing;
- (float)titleInterLineSpacing;

@end
