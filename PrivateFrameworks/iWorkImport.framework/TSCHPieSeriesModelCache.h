/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieSeriesModelCache : NSObject {
    TSCHChartAxis * mAxis;
    TSCHChartInfo * mChartInfo;
    TSCHChartModel * mChartModel;
    TSCHChartSeries * mCurrentSeries;
    double  mCurrentSeriesAngleSweep;
    double  mCurrentSeriesAxisValue;
    unsigned int  mCurrentSeriesIndex;
    BOOL  mCurrentSeriesNullData;
    double  mCurrentSeriesPercentage;
    double  mCurrentSeriesStartAngle;
    double  mEffectiveLabelExplosion;
    double  mEffectiveWedgeExplosion;
    double  mEndAngle;
    BOOL  mGroupedShadow;
    BOOL  mIsSingleCircleSpecialCase;
    double  mLabelExplosion;
    NSString * mLabelString;
    double  mMidAngle;
    unsigned int  mNumberOfSeries;
    TSWPParagraphStyle * mParagraphStyle;
    TSDFill * mSeriesFill;
    double  mSeriesOpacity;
    TSDShadow * mSeriesShadow;
    TSDStroke * mSeriesStroke;
    TSCHChartSeries * mSingleCircleSeriesElement;
    double  mTotalValue;
    double  mWedgeExplosion;
}

@property (readonly) TSCHChartAxis *axis;
@property (readonly) double effectiveLabelExplosion;
@property (readonly) double effectiveWedgeExplosion;
@property (readonly) double endAngle;
@property (readonly) BOOL groupedShadow;
@property (readonly) double labelExplosion;
@property (readonly) NSString *labelString;
@property (readonly) double midAngle;
@property (readonly) BOOL nullData;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) double percentage;
@property (readonly) TSCHChartSeries *series;
@property (readonly) double seriesAxisValue;
@property (readonly) TSDFill *seriesFill;
@property (readonly) unsigned int seriesIndex;
@property (readonly) double seriesOpacity;
@property (readonly) TSDShadow *seriesShadow;
@property (readonly) TSDStroke *seriesStroke;
@property (readonly) BOOL shouldRenderLabel;
@property (readonly) double startAngle;
@property (readonly) double totalValue;
@property (readonly) double wedgeExplosion;

- (id)axis;
- (void)dealloc;
- (float)effectiveLabelExplosion;
- (float)effectiveWedgeExplosion;
- (double)endAngle;
- (BOOL)groupedShadow;
- (id)init;
- (id)initWithPrior:(id)arg1 orChartModel:(id)arg2 forSeries:(unsigned int)arg3;
- (float)labelExplosion;
- (id)labelString;
- (double)midAngle;
- (BOOL)nullData;
- (id)paragraphStyle;
- (double)percentage;
- (id)series;
- (double)seriesAxisValue;
- (id)seriesFill;
- (unsigned int)seriesIndex;
- (float)seriesOpacity;
- (id)seriesShadow;
- (id)seriesStroke;
- (BOOL)shouldRenderLabel;
- (double)startAngle;
- (double)totalValue;
- (float)wedgeExplosion;

@end
