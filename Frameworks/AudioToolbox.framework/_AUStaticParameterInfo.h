/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface _AUStaticParameterInfo : NSObject <NSSecureCoding> {
    unsigned long  _clumpID;
    unsigned long  _flags;
    double  _maxValue;
    double  _minValue;
    unsigned long  _unit;
    NSString * _unitName;
    NSArray * _valueStrings;
}

@property (nonatomic) unsigned long clumpID;
@property (nonatomic) unsigned long flags;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) unsigned long unit;
@property (nonatomic, retain) NSString *unitName;
@property (nonatomic, retain) NSArray *valueStrings;

+ (BOOL)supportsSecureCoding;

- (unsigned long)clumpID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long)flags;
- (id)initWithCoder:(id)arg1;
- (float)maxValue;
- (float)minValue;
- (void)setClumpID:(unsigned long)arg1;
- (void)setFlags:(unsigned long)arg1;
- (void)setMaxValue:(float)arg1;
- (void)setMinValue:(float)arg1;
- (void)setUnit:(unsigned long)arg1;
- (void)setUnitName:(id)arg1;
- (void)setValueStrings:(id)arg1;
- (unsigned long)unit;
- (id)unitName;
- (id)valueStrings;

@end
