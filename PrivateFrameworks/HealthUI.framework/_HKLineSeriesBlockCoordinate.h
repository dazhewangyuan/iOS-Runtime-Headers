/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKLineSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _coordinate;
    id  _userInfo;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })coordinate;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(BOOL)arg2;
- (id)description;
- (float)endXValue;
- (id)initWithCoordinate:(struct CGPoint { double x1; double x2; })arg1 userInfo:(id)arg2;
- (float)maxYValue;
- (float)minYValue;
- (float)startXValue;
- (id)userInfo;

@end
