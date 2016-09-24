/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendModelCache : NSObject {
    unsigned int  mCellCount;
    NSArray * mCells;
    double  mEffectiveStrokeWidth;
    id  mFill;
    double  mHorizontalCellSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  mLargestCellSize;
    TSCHLegendViewCache * mLastLegendViewCache;
    double  mLastLegendWidth;
    BOOL  mLegendOn;
    TSCHLegendCellMetrics * mMetrics;
    double  mOpacity;
    TSWPParagraphStyle * mParagraphStyle;
    BOOL  mReverseSingleColumnLegendOrder;
    TSDShadow * mShadow;
    TSDStroke * mStroke;
    double  mSymbolGap;
    double  mVerticalCellSpacing;
}

@property (readonly) unsigned int cellCount;
@property (readonly) NSArray *cells;
@property (readonly) double effectiveStrokeWidth;
@property (readonly) id fill;
@property (readonly) double horizontalCellSpacing;
@property (readonly) struct CGSize { double x1; double x2; } largestCellSize;
@property (readonly) BOOL legendOn;
@property (readonly) double opacity;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) BOOL reverseSingleColumnLegendOrder;
@property (readonly) TSDShadow *shadow;
@property (readonly) TSDStroke *stroke;
@property (readonly) double symbolGap;
@property (readonly) double verticalCellSpacing;

- (unsigned int)cellCount;
- (id)cellForSeriesIndex:(unsigned int)arg1 cellType:(int)arg2;
- (id)cells;
- (void)dealloc;
- (float)effectiveStrokeWidth;
- (id)fill;
- (float)horizontalCellSpacing;
- (id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2;
- (struct CGSize { double x1; double x2; })largestCellSize;
- (BOOL)legendOn;
- (float)opacity;
- (id)paragraphStyle;
- (BOOL)reverseSingleColumnLegendOrder;
- (id)shadow;
- (id)stroke;
- (float)symbolGap;
- (float)verticalCellSpacing;
- (id)viewCacheForWidth:(float)arg1;

@end
