/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAudioRep : TSDMediaRep <TSDPlayableMediaRep> {
    AVAsset * mAssetForPlayabilityCheck;
    <TSDAudioHUDController> * mAudioHUDController;
    CALayer * mAudioImageLayer;
    BOOL  mDidCheckPlayability;
    double  mDynamicVolume;
    BOOL  mIsChangingDynamicVolume;
    BOOL  mIsPlayable;
    TSKAVPlayerController * mPlayerController;
    CALayer * mSpinnerLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) TSDMovieInfo *movieInfo;
@property (getter=isPlayable, nonatomic, readonly) BOOL playable;
@property (readonly) Class superclass;

- (void)dealloc;
- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned int)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)isPlayable;
- (Class)layerClass;
- (id)movieInfo;
- (BOOL)shouldAllowReplacementFromDrop;
- (BOOL)shouldAllowReplacementFromPaste;
- (BOOL)shouldShowMediaReplaceUI;

@end
