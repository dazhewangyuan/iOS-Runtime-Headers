/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMorphingLabel : UIView {
    struct { 
        struct _NSRange { 
            unsigned int location; 
            unsigned int length; 
        } src; 
        struct _NSRange { 
            unsigned int location; 
            unsigned int length; 
        } dst; 
        BOOL isEqual; 
    }  _alignment;
    double  _alignmentDelays;
    unsigned int  _alignmentSize;
    UIView * _colorView;
    UIMorphingLabelGlyphSet * _dstGlyphSet;
    BOOL  _enableAnimation;
    UIFont * _font;
    NSMutableArray * _hiddenGlyphViews;
    BOOL  _isDoingFastAnimation;
    double  _lastUpdateTime;
    struct { 
        unsigned int len; 
        unsigned int dir; 
    }  _memo;
    double  _rippleFactor;
    double  _scaleFactor;
    double  _slowdown;
    UIMorphingLabelGlyphSet * _srcGlyphSet;
    BOOL  _suppressLayoutSubviews;
    NSString * _text;
    int  _textAlignment;
    _UIViewAnimationAttributes * _textAnimationAttributes;
    UIColor * _textColor;
    _UIViewAnimationAttributes * _textColorAnimationAttributes;
    BOOL  _textColorDidChange;
    BOOL  _textDidChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic) BOOL enableAnimation;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) BOOL suppressLayoutSubviews;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (float)alphaForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)animateAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateGlyph:(id)arg1 toAlpha:(float)arg2 duration:(float)arg3 delay:(float)arg4;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint { double x1; double x2; })arg2 delay:(float)arg3;
- (void)animateGlyph:(id)arg1 toScale:(float)arg2 delay:(float)arg3;
- (void)animateGlyphs;
- (void)animateGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 ofGlyphSet:(id)arg2 byOffset:(float)arg3 delay:(float)arg4;
- (void)animateHideGlyph:(id)arg1 alphaDuration:(float)arg2 delay:(float)arg3;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateShowGlyph:(id)arg1 alpha:(float)arg2 alphaDuration:(float)arg3 delay:(float)arg4;
- (void)animateShowGlyph:(id)arg1 alphaDuration:(float)arg2 delay:(float)arg3;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateTextColor;
- (id)attributedString;
- (id)attributedStringForText:(id)arg1;
- (void)baseInit;
- (void)calculateGlyphAlignment;
- (unsigned int)calculateHardAlignment:(struct { struct _NSRange { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; BOOL x3; }*)arg1 size:(unsigned int)arg2 fromGlyphs:(const unsigned short*)arg3 count:(unsigned int)arg4 toGlyphs:(const unsigned short*)arg5 count:(unsigned int)arg6;
- (BOOL)canFitText:(id)arg1;
- (float)changeInWidthDueToAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (float)currentMediaTime;
- (void)dealloc;
- (BOOL)enableAnimation;
- (float)flushAmount;
- (id)font;
- (id)glyphViewWithImage:(id)arg1 isColorGlyph:(BOOL)arg2;
- (void)hideGlyph:(id)arg1;
- (void)initAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initMovementAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)requiredWidthForText:(id)arg1;
- (void)setEnableAnimation:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setSuppressLayoutSubviews:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)suppressLayoutSubviews;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (float)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned int)arg1;
- (float)totalRightOffsetForAlignmentHunkAtIndex:(unsigned int)arg1;
- (id)uniqueStringWithPrefix:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
