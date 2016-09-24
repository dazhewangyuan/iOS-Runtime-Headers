/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotValue : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadCallAudioRoutes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadCallCapabilitys;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadCallDestinationTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadCallRecordTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadCarAirCirculationModes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadCarAudioSources;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadCarDefrosters;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadCarSeats;
    NSMutableArray * _PayloadContactLists;
    NSMutableArray * _PayloadContactValues;
    NSMutableArray * _PayloadCurrencyAmounts;
    NSMutableArray * _PayloadDataStringLists;
    NSMutableArray * _PayloadDataStrings;
    NSMutableArray * _PayloadDateTimeRangeLists;
    NSMutableArray * _PayloadDateTimeRangeValues;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadDeviceTypes;
    NSMutableArray * _PayloadDialingContacts;
    NSMutableArray * _PayloadDoubleLists;
    NSMutableArray * _PayloadDoubleValues;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadFileEntityTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadFilePropertyNames;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadFilePropertyQualifiers;
    NSMutableArray * _PayloadFilePropertyValues;
    NSMutableArray * _PayloadFilePropertys;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadFileSearchScopes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadFileShareModes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadFileTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadHomeAttributeTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadHomeAttributeValueTypes;
    NSMutableArray * _PayloadHomeAttributeValues;
    NSMutableArray * _PayloadHomeAttributes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadHomeDeviceTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadHomeEntityTypes;
    NSMutableArray * _PayloadHomeEntitys;
    NSMutableArray * _PayloadIntegerLists;
    NSMutableArray * _PayloadIntegerValues;
    NSMutableArray * _PayloadLocationLists;
    NSMutableArray * _PayloadLocations;
    NSMutableArray * _PayloadLongLists;
    NSMutableArray * _PayloadLongValues;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadMessageAttributes;
    NSMutableArray * _PayloadPaymentMethodLists;
    NSMutableArray * _PayloadPaymentMethodValues;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadPhotoAttributes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadPreferredCallProviders;
    struct { 
        BOOL *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadPrimitiveBools;
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadPrimitiveDoubles;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadPrimitiveInts;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadPrimitiveLongs;
    NSMutableArray * _PayloadPrimitiveStrings;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadRadioTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadRelativeReferences;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadRelativeSettings;
    NSMutableArray * _PayloadShareDestinations;
    NSMutableArray * _PayloadStringLists;
    NSMutableArray * _PayloadStringValues;
    NSMutableArray * _PayloadTemperatureLists;
    NSMutableArray * _PayloadTemperatureValues;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadWorkoutGoalUnitTypes;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _PayloadWorkoutLocationTypes;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*PayloadCallAudioRoutes;
@property (nonatomic, readonly) unsigned int PayloadCallAudioRoutesCount;
@property (nonatomic, readonly) int*PayloadCallCapabilitys;
@property (nonatomic, readonly) unsigned int PayloadCallCapabilitysCount;
@property (nonatomic, readonly) int*PayloadCallDestinationTypes;
@property (nonatomic, readonly) unsigned int PayloadCallDestinationTypesCount;
@property (nonatomic, readonly) int*PayloadCallRecordTypes;
@property (nonatomic, readonly) unsigned int PayloadCallRecordTypesCount;
@property (nonatomic, readonly) int*PayloadCarAirCirculationModes;
@property (nonatomic, readonly) unsigned int PayloadCarAirCirculationModesCount;
@property (nonatomic, readonly) int*PayloadCarAudioSources;
@property (nonatomic, readonly) unsigned int PayloadCarAudioSourcesCount;
@property (nonatomic, readonly) int*PayloadCarDefrosters;
@property (nonatomic, readonly) unsigned int PayloadCarDefrostersCount;
@property (nonatomic, readonly) int*PayloadCarSeats;
@property (nonatomic, readonly) unsigned int PayloadCarSeatsCount;
@property (nonatomic, retain) NSMutableArray *PayloadContactLists;
@property (nonatomic, retain) NSMutableArray *PayloadContactValues;
@property (nonatomic, retain) NSMutableArray *PayloadCurrencyAmounts;
@property (nonatomic, retain) NSMutableArray *PayloadDataStringLists;
@property (nonatomic, retain) NSMutableArray *PayloadDataStrings;
@property (nonatomic, retain) NSMutableArray *PayloadDateTimeRangeLists;
@property (nonatomic, retain) NSMutableArray *PayloadDateTimeRangeValues;
@property (nonatomic, readonly) int*PayloadDeviceTypes;
@property (nonatomic, readonly) unsigned int PayloadDeviceTypesCount;
@property (nonatomic, retain) NSMutableArray *PayloadDialingContacts;
@property (nonatomic, retain) NSMutableArray *PayloadDoubleLists;
@property (nonatomic, retain) NSMutableArray *PayloadDoubleValues;
@property (nonatomic, readonly) int*PayloadFileEntityTypes;
@property (nonatomic, readonly) unsigned int PayloadFileEntityTypesCount;
@property (nonatomic, readonly) int*PayloadFilePropertyNames;
@property (nonatomic, readonly) unsigned int PayloadFilePropertyNamesCount;
@property (nonatomic, readonly) int*PayloadFilePropertyQualifiers;
@property (nonatomic, readonly) unsigned int PayloadFilePropertyQualifiersCount;
@property (nonatomic, retain) NSMutableArray *PayloadFilePropertyValues;
@property (nonatomic, retain) NSMutableArray *PayloadFilePropertys;
@property (nonatomic, readonly) int*PayloadFileSearchScopes;
@property (nonatomic, readonly) unsigned int PayloadFileSearchScopesCount;
@property (nonatomic, readonly) int*PayloadFileShareModes;
@property (nonatomic, readonly) unsigned int PayloadFileShareModesCount;
@property (nonatomic, readonly) int*PayloadFileTypes;
@property (nonatomic, readonly) unsigned int PayloadFileTypesCount;
@property (nonatomic, readonly) int*PayloadHomeAttributeTypes;
@property (nonatomic, readonly) unsigned int PayloadHomeAttributeTypesCount;
@property (nonatomic, readonly) int*PayloadHomeAttributeValueTypes;
@property (nonatomic, readonly) unsigned int PayloadHomeAttributeValueTypesCount;
@property (nonatomic, retain) NSMutableArray *PayloadHomeAttributeValues;
@property (nonatomic, retain) NSMutableArray *PayloadHomeAttributes;
@property (nonatomic, readonly) int*PayloadHomeDeviceTypes;
@property (nonatomic, readonly) unsigned int PayloadHomeDeviceTypesCount;
@property (nonatomic, readonly) int*PayloadHomeEntityTypes;
@property (nonatomic, readonly) unsigned int PayloadHomeEntityTypesCount;
@property (nonatomic, retain) NSMutableArray *PayloadHomeEntitys;
@property (nonatomic, retain) NSMutableArray *PayloadIntegerLists;
@property (nonatomic, retain) NSMutableArray *PayloadIntegerValues;
@property (nonatomic, retain) NSMutableArray *PayloadLocationLists;
@property (nonatomic, retain) NSMutableArray *PayloadLocations;
@property (nonatomic, retain) NSMutableArray *PayloadLongLists;
@property (nonatomic, retain) NSMutableArray *PayloadLongValues;
@property (nonatomic, readonly) int*PayloadMessageAttributes;
@property (nonatomic, readonly) unsigned int PayloadMessageAttributesCount;
@property (nonatomic, retain) NSMutableArray *PayloadPaymentMethodLists;
@property (nonatomic, retain) NSMutableArray *PayloadPaymentMethodValues;
@property (nonatomic, readonly) int*PayloadPhotoAttributes;
@property (nonatomic, readonly) unsigned int PayloadPhotoAttributesCount;
@property (nonatomic, readonly) int*PayloadPreferredCallProviders;
@property (nonatomic, readonly) unsigned int PayloadPreferredCallProvidersCount;
@property (nonatomic, readonly) BOOL*PayloadPrimitiveBools;
@property (nonatomic, readonly) unsigned int PayloadPrimitiveBoolsCount;
@property (nonatomic, readonly) double*PayloadPrimitiveDoubles;
@property (nonatomic, readonly) unsigned int PayloadPrimitiveDoublesCount;
@property (nonatomic, readonly) int*PayloadPrimitiveInts;
@property (nonatomic, readonly) unsigned int PayloadPrimitiveIntsCount;
@property (nonatomic, readonly) int*PayloadPrimitiveLongs;
@property (nonatomic, readonly) unsigned int PayloadPrimitiveLongsCount;
@property (nonatomic, retain) NSMutableArray *PayloadPrimitiveStrings;
@property (nonatomic, readonly) int*PayloadRadioTypes;
@property (nonatomic, readonly) unsigned int PayloadRadioTypesCount;
@property (nonatomic, readonly) int*PayloadRelativeReferences;
@property (nonatomic, readonly) unsigned int PayloadRelativeReferencesCount;
@property (nonatomic, readonly) int*PayloadRelativeSettings;
@property (nonatomic, readonly) unsigned int PayloadRelativeSettingsCount;
@property (nonatomic, retain) NSMutableArray *PayloadShareDestinations;
@property (nonatomic, retain) NSMutableArray *PayloadStringLists;
@property (nonatomic, retain) NSMutableArray *PayloadStringValues;
@property (nonatomic, retain) NSMutableArray *PayloadTemperatureLists;
@property (nonatomic, retain) NSMutableArray *PayloadTemperatureValues;
@property (nonatomic, readonly) int*PayloadWorkoutGoalUnitTypes;
@property (nonatomic, readonly) unsigned int PayloadWorkoutGoalUnitTypesCount;
@property (nonatomic, readonly) int*PayloadWorkoutLocationTypes;
@property (nonatomic, readonly) unsigned int PayloadWorkoutLocationTypesCount;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)PayloadContactListType;
+ (Class)PayloadContactValueType;
+ (Class)PayloadCurrencyAmountType;
+ (Class)PayloadDataStringListType;
+ (Class)PayloadDataStringType;
+ (Class)PayloadDateTimeRangeListType;
+ (Class)PayloadDateTimeRangeValueType;
+ (Class)PayloadDialingContactType;
+ (Class)PayloadDoubleListType;
+ (Class)PayloadDoubleValueType;
+ (Class)PayloadFilePropertyType;
+ (Class)PayloadFilePropertyValueType;
+ (Class)PayloadHomeAttributeType;
+ (Class)PayloadHomeAttributeValueType;
+ (Class)PayloadHomeEntityType;
+ (Class)PayloadIntegerListType;
+ (Class)PayloadIntegerValueType;
+ (Class)PayloadLocationListType;
+ (Class)PayloadLocationType;
+ (Class)PayloadLongListType;
+ (Class)PayloadLongValueType;
+ (Class)PayloadPaymentMethodListType;
+ (Class)PayloadPaymentMethodValueType;
+ (Class)PayloadPrimitiveStringType;
+ (Class)PayloadShareDestinationType;
+ (Class)PayloadStringListType;
+ (Class)PayloadStringValueType;
+ (Class)PayloadTemperatureListType;
+ (Class)PayloadTemperatureValueType;

- (void).cxx_destruct;
- (int)PayloadCallAudioRouteAtIndex:(unsigned int)arg1;
- (int*)PayloadCallAudioRoutes;
- (unsigned int)PayloadCallAudioRoutesCount;
- (int)PayloadCallCapabilityAtIndex:(unsigned int)arg1;
- (int*)PayloadCallCapabilitys;
- (unsigned int)PayloadCallCapabilitysCount;
- (int)PayloadCallDestinationTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadCallDestinationTypes;
- (unsigned int)PayloadCallDestinationTypesCount;
- (int)PayloadCallRecordTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadCallRecordTypes;
- (unsigned int)PayloadCallRecordTypesCount;
- (int)PayloadCarAirCirculationModeAtIndex:(unsigned int)arg1;
- (int*)PayloadCarAirCirculationModes;
- (unsigned int)PayloadCarAirCirculationModesCount;
- (int)PayloadCarAudioSourceAtIndex:(unsigned int)arg1;
- (int*)PayloadCarAudioSources;
- (unsigned int)PayloadCarAudioSourcesCount;
- (int)PayloadCarDefrosterAtIndex:(unsigned int)arg1;
- (int*)PayloadCarDefrosters;
- (unsigned int)PayloadCarDefrostersCount;
- (int)PayloadCarSeatAtIndex:(unsigned int)arg1;
- (int*)PayloadCarSeats;
- (unsigned int)PayloadCarSeatsCount;
- (id)PayloadContactListAtIndex:(unsigned int)arg1;
- (id)PayloadContactLists;
- (unsigned int)PayloadContactListsCount;
- (id)PayloadContactValueAtIndex:(unsigned int)arg1;
- (id)PayloadContactValues;
- (unsigned int)PayloadContactValuesCount;
- (id)PayloadCurrencyAmountAtIndex:(unsigned int)arg1;
- (id)PayloadCurrencyAmounts;
- (unsigned int)PayloadCurrencyAmountsCount;
- (id)PayloadDataStringAtIndex:(unsigned int)arg1;
- (id)PayloadDataStringListAtIndex:(unsigned int)arg1;
- (id)PayloadDataStringLists;
- (unsigned int)PayloadDataStringListsCount;
- (id)PayloadDataStrings;
- (unsigned int)PayloadDataStringsCount;
- (id)PayloadDateTimeRangeListAtIndex:(unsigned int)arg1;
- (id)PayloadDateTimeRangeLists;
- (unsigned int)PayloadDateTimeRangeListsCount;
- (id)PayloadDateTimeRangeValueAtIndex:(unsigned int)arg1;
- (id)PayloadDateTimeRangeValues;
- (unsigned int)PayloadDateTimeRangeValuesCount;
- (int)PayloadDeviceTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadDeviceTypes;
- (unsigned int)PayloadDeviceTypesCount;
- (id)PayloadDialingContactAtIndex:(unsigned int)arg1;
- (id)PayloadDialingContacts;
- (unsigned int)PayloadDialingContactsCount;
- (id)PayloadDoubleListAtIndex:(unsigned int)arg1;
- (id)PayloadDoubleLists;
- (unsigned int)PayloadDoubleListsCount;
- (id)PayloadDoubleValueAtIndex:(unsigned int)arg1;
- (id)PayloadDoubleValues;
- (unsigned int)PayloadDoubleValuesCount;
- (int)PayloadFileEntityTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadFileEntityTypes;
- (unsigned int)PayloadFileEntityTypesCount;
- (id)PayloadFilePropertyAtIndex:(unsigned int)arg1;
- (int)PayloadFilePropertyNameAtIndex:(unsigned int)arg1;
- (int*)PayloadFilePropertyNames;
- (unsigned int)PayloadFilePropertyNamesCount;
- (int)PayloadFilePropertyQualifierAtIndex:(unsigned int)arg1;
- (int*)PayloadFilePropertyQualifiers;
- (unsigned int)PayloadFilePropertyQualifiersCount;
- (id)PayloadFilePropertyValueAtIndex:(unsigned int)arg1;
- (id)PayloadFilePropertyValues;
- (unsigned int)PayloadFilePropertyValuesCount;
- (id)PayloadFilePropertys;
- (unsigned int)PayloadFilePropertysCount;
- (int)PayloadFileSearchScopeAtIndex:(unsigned int)arg1;
- (int*)PayloadFileSearchScopes;
- (unsigned int)PayloadFileSearchScopesCount;
- (int)PayloadFileShareModeAtIndex:(unsigned int)arg1;
- (int*)PayloadFileShareModes;
- (unsigned int)PayloadFileShareModesCount;
- (int)PayloadFileTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadFileTypes;
- (unsigned int)PayloadFileTypesCount;
- (id)PayloadHomeAttributeAtIndex:(unsigned int)arg1;
- (int)PayloadHomeAttributeTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadHomeAttributeTypes;
- (unsigned int)PayloadHomeAttributeTypesCount;
- (id)PayloadHomeAttributeValueAtIndex:(unsigned int)arg1;
- (int)PayloadHomeAttributeValueTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadHomeAttributeValueTypes;
- (unsigned int)PayloadHomeAttributeValueTypesCount;
- (id)PayloadHomeAttributeValues;
- (unsigned int)PayloadHomeAttributeValuesCount;
- (id)PayloadHomeAttributes;
- (unsigned int)PayloadHomeAttributesCount;
- (int)PayloadHomeDeviceTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadHomeDeviceTypes;
- (unsigned int)PayloadHomeDeviceTypesCount;
- (id)PayloadHomeEntityAtIndex:(unsigned int)arg1;
- (int)PayloadHomeEntityTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadHomeEntityTypes;
- (unsigned int)PayloadHomeEntityTypesCount;
- (id)PayloadHomeEntitys;
- (unsigned int)PayloadHomeEntitysCount;
- (id)PayloadIntegerListAtIndex:(unsigned int)arg1;
- (id)PayloadIntegerLists;
- (unsigned int)PayloadIntegerListsCount;
- (id)PayloadIntegerValueAtIndex:(unsigned int)arg1;
- (id)PayloadIntegerValues;
- (unsigned int)PayloadIntegerValuesCount;
- (id)PayloadLocationAtIndex:(unsigned int)arg1;
- (id)PayloadLocationListAtIndex:(unsigned int)arg1;
- (id)PayloadLocationLists;
- (unsigned int)PayloadLocationListsCount;
- (id)PayloadLocations;
- (unsigned int)PayloadLocationsCount;
- (id)PayloadLongListAtIndex:(unsigned int)arg1;
- (id)PayloadLongLists;
- (unsigned int)PayloadLongListsCount;
- (id)PayloadLongValueAtIndex:(unsigned int)arg1;
- (id)PayloadLongValues;
- (unsigned int)PayloadLongValuesCount;
- (int)PayloadMessageAttributeAtIndex:(unsigned int)arg1;
- (int*)PayloadMessageAttributes;
- (unsigned int)PayloadMessageAttributesCount;
- (id)PayloadPaymentMethodListAtIndex:(unsigned int)arg1;
- (id)PayloadPaymentMethodLists;
- (unsigned int)PayloadPaymentMethodListsCount;
- (id)PayloadPaymentMethodValueAtIndex:(unsigned int)arg1;
- (id)PayloadPaymentMethodValues;
- (unsigned int)PayloadPaymentMethodValuesCount;
- (int)PayloadPhotoAttributeAtIndex:(unsigned int)arg1;
- (int*)PayloadPhotoAttributes;
- (unsigned int)PayloadPhotoAttributesCount;
- (int)PayloadPreferredCallProviderAtIndex:(unsigned int)arg1;
- (int*)PayloadPreferredCallProviders;
- (unsigned int)PayloadPreferredCallProvidersCount;
- (BOOL)PayloadPrimitiveBoolAtIndex:(unsigned int)arg1;
- (BOOL*)PayloadPrimitiveBools;
- (unsigned int)PayloadPrimitiveBoolsCount;
- (double)PayloadPrimitiveDoubleAtIndex:(unsigned int)arg1;
- (double*)PayloadPrimitiveDoubles;
- (unsigned int)PayloadPrimitiveDoublesCount;
- (int)PayloadPrimitiveIntAtIndex:(unsigned int)arg1;
- (int*)PayloadPrimitiveInts;
- (unsigned int)PayloadPrimitiveIntsCount;
- (int)PayloadPrimitiveLongAtIndex:(unsigned int)arg1;
- (int*)PayloadPrimitiveLongs;
- (unsigned int)PayloadPrimitiveLongsCount;
- (id)PayloadPrimitiveStringAtIndex:(unsigned int)arg1;
- (id)PayloadPrimitiveStrings;
- (unsigned int)PayloadPrimitiveStringsCount;
- (int)PayloadRadioTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadRadioTypes;
- (unsigned int)PayloadRadioTypesCount;
- (int)PayloadRelativeReferenceAtIndex:(unsigned int)arg1;
- (int*)PayloadRelativeReferences;
- (unsigned int)PayloadRelativeReferencesCount;
- (int)PayloadRelativeSettingAtIndex:(unsigned int)arg1;
- (int*)PayloadRelativeSettings;
- (unsigned int)PayloadRelativeSettingsCount;
- (id)PayloadShareDestinationAtIndex:(unsigned int)arg1;
- (id)PayloadShareDestinations;
- (unsigned int)PayloadShareDestinationsCount;
- (id)PayloadStringListAtIndex:(unsigned int)arg1;
- (id)PayloadStringLists;
- (unsigned int)PayloadStringListsCount;
- (id)PayloadStringValueAtIndex:(unsigned int)arg1;
- (id)PayloadStringValues;
- (unsigned int)PayloadStringValuesCount;
- (id)PayloadTemperatureListAtIndex:(unsigned int)arg1;
- (id)PayloadTemperatureLists;
- (unsigned int)PayloadTemperatureListsCount;
- (id)PayloadTemperatureValueAtIndex:(unsigned int)arg1;
- (id)PayloadTemperatureValues;
- (unsigned int)PayloadTemperatureValuesCount;
- (int)PayloadWorkoutGoalUnitTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadWorkoutGoalUnitTypes;
- (unsigned int)PayloadWorkoutGoalUnitTypesCount;
- (int)PayloadWorkoutLocationTypeAtIndex:(unsigned int)arg1;
- (int*)PayloadWorkoutLocationTypes;
- (unsigned int)PayloadWorkoutLocationTypesCount;
- (void)addPayloadCallAudioRoute:(int)arg1;
- (void)addPayloadCallCapability:(int)arg1;
- (void)addPayloadCallDestinationType:(int)arg1;
- (void)addPayloadCallRecordType:(int)arg1;
- (void)addPayloadCarAirCirculationMode:(int)arg1;
- (void)addPayloadCarAudioSource:(int)arg1;
- (void)addPayloadCarDefroster:(int)arg1;
- (void)addPayloadCarSeat:(int)arg1;
- (void)addPayloadContactList:(id)arg1;
- (void)addPayloadContactValue:(id)arg1;
- (void)addPayloadCurrencyAmount:(id)arg1;
- (void)addPayloadDataString:(id)arg1;
- (void)addPayloadDataStringList:(id)arg1;
- (void)addPayloadDateTimeRangeList:(id)arg1;
- (void)addPayloadDateTimeRangeValue:(id)arg1;
- (void)addPayloadDeviceType:(int)arg1;
- (void)addPayloadDialingContact:(id)arg1;
- (void)addPayloadDoubleList:(id)arg1;
- (void)addPayloadDoubleValue:(id)arg1;
- (void)addPayloadFileEntityType:(int)arg1;
- (void)addPayloadFileProperty:(id)arg1;
- (void)addPayloadFilePropertyName:(int)arg1;
- (void)addPayloadFilePropertyQualifier:(int)arg1;
- (void)addPayloadFilePropertyValue:(id)arg1;
- (void)addPayloadFileSearchScope:(int)arg1;
- (void)addPayloadFileShareMode:(int)arg1;
- (void)addPayloadFileType:(int)arg1;
- (void)addPayloadHomeAttribute:(id)arg1;
- (void)addPayloadHomeAttributeType:(int)arg1;
- (void)addPayloadHomeAttributeValue:(id)arg1;
- (void)addPayloadHomeAttributeValueType:(int)arg1;
- (void)addPayloadHomeDeviceType:(int)arg1;
- (void)addPayloadHomeEntity:(id)arg1;
- (void)addPayloadHomeEntityType:(int)arg1;
- (void)addPayloadIntegerList:(id)arg1;
- (void)addPayloadIntegerValue:(id)arg1;
- (void)addPayloadLocation:(id)arg1;
- (void)addPayloadLocationList:(id)arg1;
- (void)addPayloadLongList:(id)arg1;
- (void)addPayloadLongValue:(id)arg1;
- (void)addPayloadMessageAttribute:(int)arg1;
- (void)addPayloadPaymentMethodList:(id)arg1;
- (void)addPayloadPaymentMethodValue:(id)arg1;
- (void)addPayloadPhotoAttribute:(int)arg1;
- (void)addPayloadPreferredCallProvider:(int)arg1;
- (void)addPayloadPrimitiveBool:(BOOL)arg1;
- (void)addPayloadPrimitiveDouble:(double)arg1;
- (void)addPayloadPrimitiveInt:(int)arg1;
- (void)addPayloadPrimitiveLong:(int)arg1;
- (void)addPayloadPrimitiveString:(id)arg1;
- (void)addPayloadRadioType:(int)arg1;
- (void)addPayloadRelativeReference:(int)arg1;
- (void)addPayloadRelativeSetting:(int)arg1;
- (void)addPayloadShareDestination:(id)arg1;
- (void)addPayloadStringList:(id)arg1;
- (void)addPayloadStringValue:(id)arg1;
- (void)addPayloadTemperatureList:(id)arg1;
- (void)addPayloadTemperatureValue:(id)arg1;
- (void)addPayloadWorkoutGoalUnitType:(int)arg1;
- (void)addPayloadWorkoutLocationType:(int)arg1;
- (void)clearPayloadCallAudioRoutes;
- (void)clearPayloadCallCapabilitys;
- (void)clearPayloadCallDestinationTypes;
- (void)clearPayloadCallRecordTypes;
- (void)clearPayloadCarAirCirculationModes;
- (void)clearPayloadCarAudioSources;
- (void)clearPayloadCarDefrosters;
- (void)clearPayloadCarSeats;
- (void)clearPayloadContactLists;
- (void)clearPayloadContactValues;
- (void)clearPayloadCurrencyAmounts;
- (void)clearPayloadDataStringLists;
- (void)clearPayloadDataStrings;
- (void)clearPayloadDateTimeRangeLists;
- (void)clearPayloadDateTimeRangeValues;
- (void)clearPayloadDeviceTypes;
- (void)clearPayloadDialingContacts;
- (void)clearPayloadDoubleLists;
- (void)clearPayloadDoubleValues;
- (void)clearPayloadFileEntityTypes;
- (void)clearPayloadFilePropertyNames;
- (void)clearPayloadFilePropertyQualifiers;
- (void)clearPayloadFilePropertyValues;
- (void)clearPayloadFilePropertys;
- (void)clearPayloadFileSearchScopes;
- (void)clearPayloadFileShareModes;
- (void)clearPayloadFileTypes;
- (void)clearPayloadHomeAttributeTypes;
- (void)clearPayloadHomeAttributeValueTypes;
- (void)clearPayloadHomeAttributeValues;
- (void)clearPayloadHomeAttributes;
- (void)clearPayloadHomeDeviceTypes;
- (void)clearPayloadHomeEntityTypes;
- (void)clearPayloadHomeEntitys;
- (void)clearPayloadIntegerLists;
- (void)clearPayloadIntegerValues;
- (void)clearPayloadLocationLists;
- (void)clearPayloadLocations;
- (void)clearPayloadLongLists;
- (void)clearPayloadLongValues;
- (void)clearPayloadMessageAttributes;
- (void)clearPayloadPaymentMethodLists;
- (void)clearPayloadPaymentMethodValues;
- (void)clearPayloadPhotoAttributes;
- (void)clearPayloadPreferredCallProviders;
- (void)clearPayloadPrimitiveBools;
- (void)clearPayloadPrimitiveDoubles;
- (void)clearPayloadPrimitiveInts;
- (void)clearPayloadPrimitiveLongs;
- (void)clearPayloadPrimitiveStrings;
- (void)clearPayloadRadioTypes;
- (void)clearPayloadRelativeReferences;
- (void)clearPayloadRelativeSettings;
- (void)clearPayloadShareDestinations;
- (void)clearPayloadStringLists;
- (void)clearPayloadStringValues;
- (void)clearPayloadTemperatureLists;
- (void)clearPayloadTemperatureValues;
- (void)clearPayloadWorkoutGoalUnitTypes;
- (void)clearPayloadWorkoutLocationTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setPayloadCallAudioRoutes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadCallCapabilitys:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadCallDestinationTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadCallRecordTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadCarAirCirculationModes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadCarAudioSources:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadCarDefrosters:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadCarSeats:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadContactLists:(id)arg1;
- (void)setPayloadContactValues:(id)arg1;
- (void)setPayloadCurrencyAmounts:(id)arg1;
- (void)setPayloadDataStringLists:(id)arg1;
- (void)setPayloadDataStrings:(id)arg1;
- (void)setPayloadDateTimeRangeLists:(id)arg1;
- (void)setPayloadDateTimeRangeValues:(id)arg1;
- (void)setPayloadDeviceTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadDialingContacts:(id)arg1;
- (void)setPayloadDoubleLists:(id)arg1;
- (void)setPayloadDoubleValues:(id)arg1;
- (void)setPayloadFileEntityTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadFilePropertyNames:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadFilePropertyQualifiers:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadFilePropertyValues:(id)arg1;
- (void)setPayloadFilePropertys:(id)arg1;
- (void)setPayloadFileSearchScopes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadFileShareModes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadFileTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadHomeAttributeTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadHomeAttributeValueTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadHomeAttributeValues:(id)arg1;
- (void)setPayloadHomeAttributes:(id)arg1;
- (void)setPayloadHomeDeviceTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadHomeEntityTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadHomeEntitys:(id)arg1;
- (void)setPayloadIntegerLists:(id)arg1;
- (void)setPayloadIntegerValues:(id)arg1;
- (void)setPayloadLocationLists:(id)arg1;
- (void)setPayloadLocations:(id)arg1;
- (void)setPayloadLongLists:(id)arg1;
- (void)setPayloadLongValues:(id)arg1;
- (void)setPayloadMessageAttributes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadPaymentMethodLists:(id)arg1;
- (void)setPayloadPaymentMethodValues:(id)arg1;
- (void)setPayloadPhotoAttributes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadPreferredCallProviders:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadPrimitiveBools:(BOOL*)arg1 count:(unsigned int)arg2;
- (void)setPayloadPrimitiveDoubles:(double*)arg1 count:(unsigned int)arg2;
- (void)setPayloadPrimitiveInts:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadPrimitiveLongs:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadPrimitiveStrings:(id)arg1;
- (void)setPayloadRadioTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadRelativeReferences:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadRelativeSettings:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadShareDestinations:(id)arg1;
- (void)setPayloadStringLists:(id)arg1;
- (void)setPayloadStringValues:(id)arg1;
- (void)setPayloadTemperatureLists:(id)arg1;
- (void)setPayloadTemperatureValues:(id)arg1;
- (void)setPayloadWorkoutGoalUnitTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setPayloadWorkoutLocationTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setType:(int)arg1;
- (int)type;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
