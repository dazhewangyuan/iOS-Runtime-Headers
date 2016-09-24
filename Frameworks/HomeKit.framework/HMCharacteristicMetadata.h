/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicMetadata : NSObject <HFPrettyDescription, HMObjectMerge, NSSecureCoding> {
    NSString * _format;
    NSString * _manufacturerDescription;
    NSNumber * _maxLength;
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSNumber * _stepValue;
    NSString * _units;
    NSArray * _validValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *format;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSNumber *hf_effectiveStepValue;
@property (nonatomic, readonly) BOOL hf_isNumeric;
@property (nonatomic, copy) NSString *manufacturerDescription;
@property (nonatomic, retain) NSNumber *maxLength;
@property (nonatomic, retain) NSNumber *maximumValue;
@property (nonatomic, retain) NSNumber *minimumValue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSString *units;
@property (nonatomic, copy) NSArray *validValues;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerDescription;
- (id)maxLength;
- (id)maximumValue;
- (id)minimumValue;
- (id)propertyQueue;
- (void)setFormat:(id)arg1;
- (void)setManufacturerDescription:(id)arg1;
- (void)setMaxLength:(id)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setStepValue:(id)arg1;
- (void)setUnits:(id)arg1;
- (void)setValidValues:(id)arg1;
- (id)stepValue;
- (id)uniqueIdentifier;
- (id)units;
- (id)validValues;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_characteristicValueForPercentage:(double)arg1;
- (id)hf_effectiveStepValue;
- (BOOL)hf_isEqualToMetadata:(id)arg1;
- (BOOL)hf_isNumeric;
- (BOOL)hf_isValidValue:(id)arg1;
- (id)hf_normalizedValueForValue:(id)arg1;
- (id)hf_percentageForCharacteristicValue:(id)arg1;
- (id)hf_prettyDescription;

@end
