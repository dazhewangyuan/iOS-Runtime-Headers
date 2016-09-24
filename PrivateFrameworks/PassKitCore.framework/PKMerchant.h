/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMerchant : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _industryCategory;
    int  _industryCode;
    double  _locationLatitude;
    double  _locationLongitude;
    unsigned int  _mapsIdentifier;
    NSString * _mapsName;
    NSString * _name;
    NSString * _phoneNumber;
    NSString * _rawName;
    int  _resultProviderIdentifier;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, copy) NSString *industryCategory;
@property (nonatomic) int industryCode;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) unsigned int mapsIdentifier;
@property (nonatomic, copy) NSString *mapsName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *rawName;
@property (nonatomic) int resultProviderIdentifier;
@property (setter=setURL:, nonatomic, copy) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_regenerateDisplayName;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)industryCategory;
- (int)industryCode;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMerchant:(id)arg1;
- (BOOL)isValid;
- (id)location;
- (double)locationLatitude;
- (double)locationLongitude;
- (unsigned int)mapsIdentifier;
- (id)mapsName;
- (id)name;
- (id)phoneNumber;
- (id)rawName;
- (int)resultProviderIdentifier;
- (void)setIndustryCategory:(id)arg1;
- (void)setIndustryCode:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setMapsIdentifier:(unsigned int)arg1;
- (void)setMapsName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRawName:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end
