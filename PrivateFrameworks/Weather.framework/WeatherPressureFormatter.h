/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherPressureFormatter : NSFormatter {
    NSLocale * _locale;
}

@property (nonatomic, retain) NSLocale *locale;

+ (id)convenienceFormatter;

- (void).cxx_destruct;
- (float)convertInchesHGPressure:(float)arg1 toUnit:(int)arg2;
- (float)convertMBarPressure:(float)arg1 toUnit:(int)arg2;
- (void*)createNumberFormatter;
- (void)dealloc;
- (id)fallbackStringForPressure:(float)arg1;
- (id)formatStringForPressure:(float)arg1 inUnit:(int)arg2;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)locale;
- (int)pressureUnit;
- (void)resetFormatter;
- (void)setLocale:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromInchesHG:(float)arg1;
- (id)stringFromMillibars:(float)arg1;
- (id)stringFromPressure:(float)arg1 isDataMetric:(BOOL)arg2;

@end
