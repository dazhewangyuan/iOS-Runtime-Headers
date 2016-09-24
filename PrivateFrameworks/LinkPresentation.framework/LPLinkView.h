/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkView : UIView <CAAnimationDelegate, LPTapToLoadViewDelegate, LPThemeClient, UIGestureRecognizerDelegate> {
    NSURL * _URL;
    BOOL  _allowsTapToLoad;
    LPAnimationMaskView * _animationMaskView;
    int  _animationOrigin;
    UIView * _animationView;
    BOOL  _applyCornerRadius;
    UIColor * _backgroundColor;
    LPCaptionBarPresentationProperties * _captionBar;
    LPCaptionBarView * _captionBarView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIView * _contentView;
    <LPLinkViewDelegate> * _delegate;
    BOOL  _disableAnimations;
    BOOL  _disablePlayback;
    BOOL  _disableTapGesture;
    BOOL  _forceFlexibleWidth;
    BOOL  _hasEverBuilt;
    BOOL  _hasValidPresentationProperties;
    NSMutableArray * _highlightGestureRecognizers;
    UIView * _highlightView;
    LPiTunesPlaybackInformation * _iTunesPlaybackInformation;
    LPImage * _image;
    BOOL  _isPreliminary;
    BOOL  _mayReceiveAdditionalMetadata;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarView * _mediaBottomCaptionBarView;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    LPCaptionBarView * _mediaTopCaptionBarView;
    LPComponentView * _mediaView;
    UIView * _mediaViewBackground;
    LPLinkMetadata * _metadata;
    BOOL  _needsRebuild;
    UIColor * _overrideBackgroundColor;
    LPMetadataProvider * _pendingMetadataProvider;
    LPTextView * _quoteView;
    NSString * _quotedText;
    BOOL  _shouldAnimateDuringNextBuild;
    int  _style;
    NSMutableArray * _tapGestureRecognizers;
    LPTheme * _theme;
    BOOL  _usesComputedPresentationProperties;
    BOOL  _usesDeferredLayout;
    LPVideo * _video;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (setter=_setAllowsTapToLoad:, nonatomic) BOOL _allowsTapToLoad;
@property (setter=_setAnimationOrigin:, nonatomic) int _animationOrigin;
@property (setter=_setApplyCornerRadius:, nonatomic) BOOL _applyCornerRadius;
@property (setter=_setDisableAnimations:, nonatomic) BOOL _disableAnimations;
@property (setter=_setDisablePlayback:, nonatomic) BOOL _disablePlayback;
@property (setter=_setDisableTapGesture:, nonatomic) BOOL _disableTapGesture;
@property (setter=_setForceFlexibleWidth:, nonatomic) BOOL _forceFlexibleWidth;
@property (nonatomic, readonly, copy) NSString *_storeIdentifier;
@property (setter=_setUsesDeferredLayout:, nonatomic) BOOL _usesDeferredLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LPLinkViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)_addHighlightRecognizersToView:(id)arg1;
- (void)_addTapRecognizerToView:(id)arg1;
- (BOOL)_allowsTapToLoad;
- (int)_animationOrigin;
- (BOOL)_applyCornerRadius;
- (void)_computePresentationPropertiesFromMetadataIfNeeded;
- (id)_createCaptionBar;
- (id)_createMediaBottomCaptionBarView;
- (id)_createMediaTopCaptionBarView;
- (id)_createMediaView;
- (id)_createQuotedTextView;
- (id)_createTapToLoadView;
- (void)_didScroll;
- (BOOL)_disableAnimations;
- (BOOL)_disablePlayback;
- (BOOL)_disableTapGesture;
- (void)_fetchMetadata;
- (BOOL)_forceFlexibleWidth;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_installTapGestureRecognizers;
- (void)_invalidateLayout;
- (void)_invalidatePresentationProperties;
- (void)_layoutLinkView;
- (struct CGSize { double x1; double x2; })_layoutLinkViewForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(BOOL)arg2;
- (void)_performDeferredLayout;
- (void)_rebuildSubviewsWithAnimation:(BOOL)arg1;
- (void)_setAllowsTapToLoad:(BOOL)arg1;
- (void)_setAnimationOrigin:(int)arg1;
- (void)_setApplyCornerRadius:(BOOL)arg1;
- (void)_setDisableAnimations:(BOOL)arg1;
- (void)_setDisablePlayback:(BOOL)arg1;
- (void)_setDisableTapGesture:(BOOL)arg1;
- (void)_setForceFlexibleWidth:(BOOL)arg1;
- (void)_setMaskImage:(id)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(BOOL)arg2;
- (void)_setPresentationProperties:(id)arg1;
- (void)_setUsesDeferredLayout:(BOOL)arg1;
- (void)_setupInteraction;
- (void)_setupView;
- (id)_storeIdentifier;
- (void)_tapRecognized:(id)arg1;
- (BOOL)_usesDeferredLayout;
- (void)animateBackgroundColor;
- (void)animateFromOldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldMediaBackgroundFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 oldCaptionBarView:(id)arg3;
- (void)animateInViews;
- (void)animateOutAndRemoveViews;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)delegate;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMetadataLoadedFromURL:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)metadata;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSuppressMask:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tapToLoadViewWasTapped:(id)arg1;
- (void)themeParametersDidChange;

@end
