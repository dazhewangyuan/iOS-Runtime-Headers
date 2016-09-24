/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAggregateForecastRequest : WFTask {
    id /* block */  _completionHandler;
    WFLocation * _location;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) WFLocation *location;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithLocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)location;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLocation:(id)arg1;

@end
