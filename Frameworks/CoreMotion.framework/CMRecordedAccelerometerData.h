/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMRecordedAccelerometerData : CMAccelerometerData {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _accelerationValue;
    unsigned int  _identifier;
    double  _startDateValue;
    double  _timestampValue;
}

@property (readonly) unsigned int identifier;
@property (readonly) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (struct { double x1; double x2; double x3; })acceleration;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(struct CMAccel100 { double x1; double x2; double x3; unsigned int x4; }*)arg1 timestamp:(unsigned int)arg2 walltime:(double)arg3 identifier:(unsigned int)arg4;
- (void)resetWithData:(struct CMAccel100 { double x1; double x2; double x3; unsigned int x4; }*)arg1 timestamp:(unsigned int)arg2 walltime:(double)arg3 identifier:(unsigned int)arg4;
- (id)startDate;
- (double)timestamp;

@end
