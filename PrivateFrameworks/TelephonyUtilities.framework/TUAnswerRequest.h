/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest> {
    int  _behavior;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
    NSString * _sourceIdentifier;
    NSString * _uniqueProxyIdentifier;
    BOOL  _wantsHoldMusic;
}

@property (nonatomic) int behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGSize { double x1; double x2; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } localPortraitAspectRatio;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueProxyIdentifier;
@property (nonatomic) BOOL wantsHoldMusic;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)behavior;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (void)setBehavior:(int)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setUniqueProxyIdentifier:(id)arg1;
- (void)setWantsHoldMusic:(BOOL)arg1;
- (id)sourceIdentifier;
- (id)uniqueProxyIdentifier;
- (BOOL)wantsHoldMusic;

@end
