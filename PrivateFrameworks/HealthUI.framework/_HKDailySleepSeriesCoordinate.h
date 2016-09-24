/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKDailySleepSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    id  _userInfo;
    double  _xValue;
    NSArray * _yValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userInfo;
@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) NSArray *yValues;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(BOOL)arg2;
- (float)endXValue;
- (id)initWithXValue:(float)arg1 yValues:(id)arg2 userInfo:(id)arg3;
- (float)startXValue;
- (id)userInfo;
- (float)xValue;
- (id)yValues;

@end
