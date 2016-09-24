/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatSession : NSObject {
    id  opaqueSession;
}

@property (getter=isActiveSession) BOOL activeSession;
@property <GKVoiceChatSessionDelegate> *delegate;
@property (readonly) double inputMeter;
@property (readonly) NSArray *peerList;
@property (readonly) NSString *sessionName;
@property double sessionVolume;

- (void)dealloc;
- (id)delegate;
- (BOOL)getMuteStateForPeer:(id)arg1;
- (id)initWithGKSession:(id)arg1 sessionName:(id)arg2;
- (float)inputMeter;
- (BOOL)isActiveSession;
- (float)outputMeterForPeer:(id)arg1;
- (id)peerList;
- (id)sessionName;
- (float)sessionVolume;
- (void)setActiveSession:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMute:(BOOL)arg1 forPeer:(id)arg2;
- (void)setSessionVolume:(float)arg1;
- (void)startSession;
- (void)stopSession;

@end
