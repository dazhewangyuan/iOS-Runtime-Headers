/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding> {
    double  _doubleValue;
    NSUnit * _unit;
}

@property (readonly) double doubleValue;
@property (readonly, copy) NSUnit *unit;

+ (BOOL)supportsSecureCoding;

- (id)_performOperation:(int)arg1 withMeasurement:(id)arg2;
- (BOOL)canBeConvertedToUnit:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubleValue:(double)arg1 unit:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)measurementByAddingMeasurement:(id)arg1;
- (id)measurementByConvertingToUnit:(id)arg1;
- (id)measurementBySubtractingMeasurement:(id)arg1;
- (id)unit;

@end
