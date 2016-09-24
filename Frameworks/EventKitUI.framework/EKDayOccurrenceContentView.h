/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceContentView : UIView {
    BOOL  _allDay;
    BOOL  _allDayDrawingStyle;
    NSAttributedString * _attributedContentString;
    BOOL  _birthday;
    double  _cachedLineHeight;
    UIFont * _cachedPrimaryFont;
    double  _cachedPrimaryFontBottomOutset;
    double  _cachedPrimaryFontTopOutset;
    UIFont * _cachedSecondaryFont;
    double  _cachedSecondaryLineHeight;
    BOOL  _cancelled;
    UIColor * _color;
    BOOL  _declined;
    BOOL  _facebook;
    unsigned int  _fontCompressionDegree;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fullTextRect;
    BOOL  _hideText;
    NSString * _location;
    double  _minimumCachedLineHeight;
    BOOL  _needsReply;
    int  _occurrenceBackgroundStyle;
    BOOL  _reduceProcessingForAnimation;
    UIColor * _secondaryTextColor;
    BOOL  _selected;
    UIColor * _statusTextColor;
    BOOL  _tentative;
    UIColor * _textBackgroundColor;
    double  _textEndY;
    NSString * _time;
    UIColor * _timeTextColor;
    NSString * _title;
    struct CGPoint { 
        double x; 
        double y; 
    }  _titleEndPoint;
    NSIndexSet * _titleMetrics;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleRect;
    UIColor * _titleTextColor;
    BOOL  _usesSmallText;
}

@property (getter=isAllDay, nonatomic) BOOL allDay;
@property (getter=isAllDayDrawingStyle, nonatomic) BOOL allDayDrawingStyle;
@property (getter=isBirthday, nonatomic) BOOL birthday;
@property (getter=isCancelled, nonatomic) BOOL cancelled;
@property (nonatomic, retain) UIColor *color;
@property (getter=isDeclined, nonatomic) BOOL declined;
@property (getter=isFacebook, nonatomic) BOOL facebook;
@property (nonatomic) BOOL hideText;
@property (nonatomic, copy) NSString *location;
@property (nonatomic) BOOL needsReply;
@property (nonatomic) int occurrenceBackgroundStyle;
@property (nonatomic) BOOL reduceProcessingForAnimation;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) BOOL selected;
@property (getter=isTentative, nonatomic) BOOL tentative;
@property (nonatomic, retain) UIColor *textBackgroundColor;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, retain) UIColor *timeTextColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic) BOOL usesSmallText;

+ (id)defaultPrimaryTextFont;
+ (id)defaultSecondaryTextFont;
+ (id)defaultSmallPrimaryTextFont;
+ (Class)layerClass;

- (void).cxx_destruct;
- (float)_attributedStringMinimumLineHeightBasedOnCurrentFontMetrics;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForText;
- (void)_getLanguageAwareOutsets;
- (void)_invalidateCachedFonts;
- (void)_invalidateMetrics;
- (float)_minimumPrimaryFontLineHeight;
- (float)_primaryFontLineHeight;
- (id)_primaryTextFont;
- (float)_secondaryFontLineHeight;
- (id)_secondaryText;
- (id)_secondaryTextFont;
- (struct CGSize { double x1; double x2; })_spaceForText;
- (id)_statusText;
- (id)_statusTextFont;
- (id)_timeText;
- (id)_timeTextFont;
- (id)attributedContentString;
- (id)attributedContentStringUnconstrained:(BOOL)arg1;
- (float)attributedStringMinimumLineHeight;
- (float)bottomTextOutset;
- (id)color;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)hasIcon;
- (BOOL)hideText;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateCachedFontMetrics;
- (BOOL)isAllDay;
- (BOOL)isAllDayDrawingStyle;
- (BOOL)isBirthday;
- (BOOL)isCancelled;
- (BOOL)isDeclined;
- (BOOL)isFacebook;
- (BOOL)isTentative;
- (id)location;
- (float)minimumNaturalHeightAllText;
- (float)minimumNaturalHeightForPrimaryText;
- (BOOL)needsReply;
- (int)occurrenceBackgroundStyle;
- (BOOL)reduceProcessingForAnimation;
- (id)secondaryTextColor;
- (BOOL)selected;
- (void)setAllDay:(BOOL)arg1;
- (void)setAllDayDrawingStyle:(BOOL)arg1;
- (void)setBirthday:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setDeclined:(BOOL)arg1;
- (void)setFacebook:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideText:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsReply:(BOOL)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setReduceProcessingForAnimation:(BOOL)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusTextColor;
- (id)strikethroughColor;
- (id)stringDrawingContext;
- (id)textBackgroundColor;
- (float)textNaturalWidth;
- (id)time;
- (id)timeTextColor;
- (id)title;
- (id)titleTextColor;
- (float)topTextOutset;
- (BOOL)usesSmallText;

@end
