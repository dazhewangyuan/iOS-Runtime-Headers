/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>

@property (nonatomic, readonly, copy) NSString *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *frequency;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSNumber *presetNumber;
@property (nonatomic, readonly) int radioType;
@property (nonatomic, readonly, copy) NSString *stationName;
@property (readonly) Class superclass;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1;
- (id)_typedBackingStore;
- (id)channel;
- (id)frequency;
- (id)initWithRadioType:(int)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5;
- (id)presetNumber;
- (int)radioType;
- (void)setChannel:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setPresetNumber:(id)arg1;
- (void)setRadioType:(int)arg1;
- (void)setStationName:(id)arg1;
- (id)stationName;

@end
