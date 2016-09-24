/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDateTime : PBCodable <NSCopying> {
    int  _calendarSystem;
    _INPBLocalDate * _date;
    struct { 
        unsigned int calendarSystem : 1; 
    }  _has;
    _INPBLocalTime * _time;
    NSString * _timeZoneID;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int calendarSystem;
@property (nonatomic, retain) _INPBLocalDate *date;
@property (nonatomic) BOOL hasCalendarSystem;
@property (nonatomic, readonly) BOOL hasDate;
@property (nonatomic, readonly) BOOL hasTime;
@property (nonatomic, readonly) BOOL hasTimeZoneID;
@property (nonatomic, retain) _INPBLocalTime *time;
@property (nonatomic, retain) NSString *timeZoneID;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)calendarSystem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCalendarSystem;
- (BOOL)hasDate;
- (BOOL)hasTime;
- (BOOL)hasTimeZoneID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCalendarSystem:(int)arg1;
- (void)setDate:(id)arg1;
- (void)setHasCalendarSystem:(BOOL)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeZoneID:(id)arg1;
- (id)time;
- (id)timeZoneID;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
