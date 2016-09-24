/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMWhiteBalanceCommand : CAMCaptureCommand {
    BOOL  __matchExposureMode;
    int  __whiteBalanceMode;
}

@property (nonatomic, readonly) BOOL _matchExposureMode;
@property (nonatomic, readonly) int _whiteBalanceMode;

- (id)_descriptionForWhiteBalanceMode:(int)arg1;
- (BOOL)_matchExposureMode;
- (int)_whiteBalanceMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchExposureMode;
- (id)initWithWhiteBalanceMode:(int)arg1;

@end
