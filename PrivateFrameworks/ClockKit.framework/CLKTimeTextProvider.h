/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKTimeTextProvider : CLKTextProvider {
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
    BOOL  _disallowBothMinutesAndDesignator;
    BOOL  _prefersDesignatorToMinutes;
    NSMutableArray * _sizingFallbackBlocks;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) BOOL disallowBothMinutesAndDesignator;
@property (nonatomic) BOOL prefersDesignatorToMinutes;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1;
+ (id)textProviderWithDate:(id)arg1 timeZone:(id)arg2;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned int)arg1 withStyle:(id)arg2;
- (id)_timeAttributedTextWithStyle:(id)arg1 dropMinutes:(BOOL)arg2 dropDesignator:(BOOL)arg3;
- (void)_validate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (BOOL)disallowBothMinutesAndDesignator;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)prefersDesignatorToMinutes;
- (void)setDate:(id)arg1;
- (void)setDisallowBothMinutesAndDesignator:(BOOL)arg1;
- (void)setPrefersDesignatorToMinutes:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
