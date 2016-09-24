/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMovieRep : TSDMediaRep <TSDPlayableMediaRep> {
    struct CGImage { } * mAlternatePosterImage;
    AVAsset * mAssetForPlayability;
    BOOL  mCurrentlyObservingPlayerLayer;
    BOOL  mDelayTearingDownPlayerController;
    BOOL  mDidCancelUpdatingPlayButtonVisibility;
    BOOL  mDidCheckPlayability;
    BOOL  mDirectlyManagesLayerContent;
    double  mDynamicVolume;
    BOOL  mInReadMode;
    unsigned int  mIsChangingDynamicVisibleTimeCount;
    BOOL  mIsChangingDynamicVolume;
    BOOL  mIsPlayable;
    CALayer * mLayerToStroke;
    CALayer * mMovieReflectionLayer;
    CALayer * mMovieReflectionMaskLayer;
    BOOL  mNeedsTeardownPlayerController;
    TSDButtonKnob * mPlayButtonKnob;
    BOOL  mPlayButtonKnobVisible;
    NSObject<TSKMediaPlayerController> * mPlayerController;
    CALayer * mPlayerLayer;
    BOOL  mPlayerLayerShouldBeDisplayed;
    CALayer * mPlayerStrokeLayer;
    CALayer * mReflectionFrameMaskLayer;
    TSDFrameRep * mReflectionFrameRep;
    CALayer * mReflectionPlayerLayer;
    CALayer * mReflectionPlayerStrokeLayer;
    CALayer * mReflectionPlayerStrokeMaskLayer;
}

@property (nonatomic) struct CGImage { }*alternatePosterImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) TSDMovieInfo *movieInfo;
@property (getter=isPlayable, nonatomic, readonly) BOOL playable;
@property (readonly) Class superclass;

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CGImage { }*)alternatePosterImage;
- (void)dealloc;
- (id)downloadProgressPlaceholderImage;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned int)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)isDataCurrentlyDownloading;
- (id)movieInfo;
- (id)movieLayout;
- (struct CGImage { }*)newFrameMaskForViewScale:(float)arg1 frameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)p_drawInContext:(struct CGContext { }*)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(float)arg4 withMask:(BOOL)arg5 forShadowOrHitTest:(BOOL)arg6;
- (void)p_drawPosterImageInContext:(struct CGContext { }*)arg1 forShadowOrHitTest:(BOOL)arg2;
- (void)p_drawReflectionGradientIntoMovieReflectionLayer:(struct CGContext { }*)arg1 reflectionSize:(struct CGSize { double x1; double x2; })arg2;
- (void)p_updateMovieReflectionMaskLayer;
- (void)setAlternatePosterImage:(struct CGImage { }*)arg1;
- (BOOL)shouldShowCheckerboard;

@end
