/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlayEventsRequest : RadioRequest {
    RadioPlayEventCollection * _playEventCollection;
    SSURLConnectionRequest * _request;
}

@property (nonatomic, readonly, copy) RadioPlayEventCollection *playEventCollection;

- (void).cxx_destruct;
- (id)deviceName;
- (id)init;
- (id)initWithPlayEventCollection:(id)arg1;
- (id)initWithStation:(id)arg1 playEvents:(id)arg2;
- (id)initWithStationHash:(id)arg1 stationID:(int)arg2 playEvents:(id)arg3;
- (id)playEventCollection;
- (void)setDeviceName:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
