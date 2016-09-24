/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5WiFiLinkQualityUpdate : NSObject <NSCopying, NSSecureCoding> {
    double  _cca;
    int  _rssi;
    double  _timestamp;
    int  _txRate;
}

@property (nonatomic) double cca;
@property (nonatomic) int rssi;
@property (nonatomic) double timestamp;
@property (nonatomic) int txRate;

+ (BOOL)supportsSecureCoding;

- (float)cca;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)rssi;
- (void)setCca:(float)arg1;
- (void)setRssi:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTxRate:(int)arg1;
- (double)timestamp;
- (int)txRate;

@end
