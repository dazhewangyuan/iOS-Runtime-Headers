/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <NSCopying> {
    BOOL  _enableCooling;
    BOOL  _enableHeating;
    BOOL  _enableMassage;
    struct { 
        unsigned int relativeLevelSetting : 1; 
        unsigned int seat : 1; 
        unsigned int enableCooling : 1; 
        unsigned int enableHeating : 1; 
        unsigned int enableMassage : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _level;
    int  _relativeLevelSetting;
    int  _seat;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL enableCooling;
@property (nonatomic) BOOL enableHeating;
@property (nonatomic) BOOL enableMassage;
@property (nonatomic) BOOL hasEnableCooling;
@property (nonatomic) BOOL hasEnableHeating;
@property (nonatomic) BOOL hasEnableMassage;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic, readonly) BOOL hasLevel;
@property (nonatomic) BOOL hasRelativeLevelSetting;
@property (nonatomic) BOOL hasSeat;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *level;
@property (nonatomic) int relativeLevelSetting;
@property (nonatomic) int seat;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enableCooling;
- (BOOL)enableHeating;
- (BOOL)enableMassage;
- (BOOL)hasEnableCooling;
- (BOOL)hasEnableHeating;
- (BOOL)hasEnableMassage;
- (BOOL)hasIntentMetadata;
- (BOOL)hasLevel;
- (BOOL)hasRelativeLevelSetting;
- (BOOL)hasSeat;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (id)level;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)relativeLevelSetting;
- (int)seat;
- (void)setEnableCooling:(BOOL)arg1;
- (void)setEnableHeating:(BOOL)arg1;
- (void)setEnableMassage:(BOOL)arg1;
- (void)setHasEnableCooling:(BOOL)arg1;
- (void)setHasEnableHeating:(BOOL)arg1;
- (void)setHasEnableMassage:(BOOL)arg1;
- (void)setHasRelativeLevelSetting:(BOOL)arg1;
- (void)setHasSeat:(BOOL)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLevel:(id)arg1;
- (void)setRelativeLevelSetting:(int)arg1;
- (void)setSeat:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
