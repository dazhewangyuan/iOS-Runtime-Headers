/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptPluginColoredBalloonView : CKColoredBalloonView {
    BOOL  _isInteractive;
    UIView * _pluginSnapshotView;
    UIView * _pluginSnapshotViewForThrowAnimation;
    UIView<CKTranscriptPluginView> * _pluginView;
    BOOL  _suppressMask;
    CKBalloonImageView * _tailMask;
}

@property (nonatomic) BOOL isInteractive;
@property (nonatomic, retain) UIView *pluginSnapshotView;
@property (nonatomic, retain) UIView *pluginSnapshotViewForThrowAnimation;
@property (nonatomic, retain) UIView<CKTranscriptPluginView> *pluginView;
@property (nonatomic) BOOL suppressMask;
@property (nonatomic, retain) CKBalloonImageView *tailMask;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)attachInvisibleInkEffectView;
- (void)clearFilters;
- (void)configureForTranscriptPlugin:(id)arg1;
- (void)detachInvisibleInkEffectView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageForInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (BOOL)isInteractive;
- (void)layoutSubviews;
- (id)pluginSnapshotView;
- (id)pluginSnapshotViewForThrowAnimation;
- (id)pluginView;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setCanUseOpaqueMask:(BOOL)arg1;
- (void)setIsInteractive:(BOOL)arg1;
- (void)setPluginSnapshotView:(id)arg1;
- (void)setPluginSnapshotViewForThrowAnimation:(id)arg1;
- (void)setPluginView:(id)arg1;
- (void)setSuppressMask:(BOOL)arg1;
- (void)setTailMask:(id)arg1;
- (BOOL)suppressMask;
- (id)tailMask;
- (void)willRemoveSubview:(id)arg1;

@end
