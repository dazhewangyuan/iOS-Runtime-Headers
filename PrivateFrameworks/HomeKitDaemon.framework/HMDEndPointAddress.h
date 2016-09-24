/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEndPointAddress : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {
    NSNumber * _audioRTPPort;
    NSString * _ipAddress;
    BOOL  _isIPv6Address;
    NSNumber * _videoRTPPort;
}

@property (nonatomic, readonly, copy) NSNumber *audioRTPPort;
@property (nonatomic, readonly, copy) NSString *ipAddress;
@property (nonatomic, readonly) BOOL isIPv6Address;
@property (nonatomic, readonly, copy) NSNumber *videoRTPPort;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_parseFromTLVData;
- (id)audioRTPPort;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIPAddress:(id)arg1 isIPv6Address:(BOOL)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4;
- (id)ipAddress;
- (BOOL)isIPv6Address;
- (id)tlvData;
- (id)videoRTPPort;

@end
