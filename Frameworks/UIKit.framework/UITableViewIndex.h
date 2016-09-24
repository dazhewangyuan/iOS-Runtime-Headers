/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndex : UIControl {
    double  _bottomPadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSizeToFit;
    NSArray * _entries;
    UIFont * _font;
    int  _idiom;
    UIColor * _indexBackgroundColor;
    UIColor * _indexColor;
    UIColor * _indexTrackingBackgroundColor;
    BOOL  _pastBottom;
    BOOL  _pastTop;
    int  _selectedSection;
    NSArray * _titles;
    double  _topPadding;
    double  _verticalTextHeightEstimate;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *indexBackgroundColor;
@property (nonatomic, retain) UIColor *indexColor;
@property (nonatomic, retain) UIColor *indexTrackingBackgroundColor;
@property (nonatomic, readonly) BOOL pastBottom;
@property (nonatomic, readonly) BOOL pastTop;
@property (nonatomic, readonly) int selectedSection;
@property (nonatomic, readonly) NSString *selectedSectionTitle;
@property (nonatomic, retain) NSArray *titles;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (void)_cacheAndMeasureTitles;
- (id)_displayTitles;
- (id)_dotImage;
- (id)_externalDotImage;
- (id)_fontForIdiom:(int)arg1;
- (int)_idiom;
- (float)_minLineSpacingForIdiom:(int)arg1;
- (void)_setIdiom:(int)arg1;
- (BOOL)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stride:(float*)arg2;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFocused;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)font;
- (id)indexBackgroundColor;
- (id)indexColor;
- (id)indexTrackingBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned int)maximumNumberOfTitlesWithoutTruncationForHeight:(float)arg1;
- (BOOL)pastBottom;
- (BOOL)pastTop;
- (int)selectedSection;
- (id)selectedSectionTitle;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndexBackgroundColor:(id)arg1;
- (void)setIndexColor:(id)arg1;
- (void)setIndexTrackingBackgroundColor:(id)arg1;
- (void)setTitles:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)titles;

@end
