/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WAHourlyForecast : NSObject <NSCopying> {
    int  _conditionCode;
    unsigned int  _eventType;
    NSString * _forecastDetail;
    int  _hourIndex;
    double  _percentPrecipitation;
    WFTemperature * _temperature;
    NSString * _time;
}

@property (nonatomic) int conditionCode;
@property (nonatomic) unsigned int eventType;
@property (nonatomic, copy) NSString *forecastDetail;
@property (nonatomic) int hourIndex;
@property (nonatomic) double percentPrecipitation;
@property (nonatomic, retain) WFTemperature *temperature;
@property (nonatomic, copy) NSString *time;

+ (int)TimeValueFromString:(id)arg1;
+ (id)hourlyForecastForLocation:(id)arg1 conditions:(id)arg2 sunriseDateComponents:(id)arg3 sunsetDateComponents:(id)arg4;

- (void).cxx_destruct;
- (int)conditionCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)eventType;
- (id)forecastDetail;
- (int)hourIndex;
- (float)percentPrecipitation;
- (void)setConditionCode:(int)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setForecastDetail:(id)arg1;
- (void)setHourIndex:(int)arg1;
- (void)setPercentPrecipitation:(float)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTime:(id)arg1;
- (id)temperature;
- (id)time;

@end
