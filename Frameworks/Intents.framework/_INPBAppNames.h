/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppNames : PBCodable <NSCopying> {
    NSString * _appName;
    NSString * _axSpokenName;
    NSString * _displayName;
    NSString * _spotlightName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *axSpokenName;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) BOOL hasAppName;
@property (nonatomic, readonly) BOOL hasAxSpokenName;
@property (nonatomic, readonly) BOOL hasDisplayName;
@property (nonatomic, readonly) BOOL hasSpotlightName;
@property (nonatomic, retain) NSString *spotlightName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)appName;
- (id)axSpokenName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (BOOL)hasAppName;
- (BOOL)hasAxSpokenName;
- (BOOL)hasDisplayName;
- (BOOL)hasSpotlightName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAxSpokenName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSpotlightName:(id)arg1;
- (id)spotlightName;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
