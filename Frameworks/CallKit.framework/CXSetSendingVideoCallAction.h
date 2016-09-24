/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXSetSendingVideoCallAction : CXCallAction {
    BOOL  _sendingVideo;
}

@property (getter=isSendingVideo, nonatomic) BOOL sendingVideo;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 sendingVideo:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isSendingVideo;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setSendingVideo:(BOOL)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
