/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeInviteLogEvent : HMDLogEvent <HMDAWDLogEvent> {
    int  _responseType;
    int  _stage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int responseType;
@property (nonatomic, readonly) int stage;
@property (readonly) Class superclass;

+ (id)homeInvitationWithStage:(int)arg1;
+ (id)homeInvitationWithStage:(int)arg1 responseType:(int)arg2;
+ (id)uuid;

- (unsigned int)AWDMessageType;
- (id)initInvitationWithStage:(int)arg1 responseType:(int)arg2;
- (id)metricForAWD;
- (int)responseType;
- (int)stage;

@end
