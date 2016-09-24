/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptPluginBalloonView : CKBalloonView {
    IMBalloonPluginDataSource * _dataSource;
    BOOL  _isInteractive;
    BOOL  _mayReparentPluginViews;
    CKBalloonImageView * _outlineMask;
    UIView<CKTranscriptPluginView> * _pluginView;
    BOOL  _suppressMask;
    CKInteractiveBalloonImageView * _tailMask;
}

@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (nonatomic) BOOL isInteractive;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskFrame;
@property (nonatomic) BOOL mayReparentPluginViews;
@property (nonatomic, retain) CKBalloonImageView *outlineMask;
@property (nonatomic, retain) UIView<CKTranscriptPluginView> *pluginView;
@property (nonatomic, readonly) BOOL shouldMaskWhenOpaque;
@property (nonatomic) BOOL suppressMask;
@property (nonatomic, retain) CKInteractiveBalloonImageView *tailMask;

- (void).cxx_destruct;
- (void)_pluginViewReadyForSnapshot:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)attachInvisibleInkEffectView;
- (void)clearFilters;
- (void)configureForComposition:(id)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;
- (id)dataSource;
- (void)detachInvisibleInkEffectView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageForInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (BOOL)isInteractive;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskFrame;
- (BOOL)mayReparentPluginViews;
- (id)outlineMask;
- (id)pluginView;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setCanUseOpaqueMask:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsInteractive:(BOOL)arg1;
- (void)setMayReparentPluginViews:(BOOL)arg1;
- (void)setOutlineMask:(id)arg1;
- (void)setPluginView:(id)arg1;
- (void)setSuppressMask:(BOOL)arg1;
- (void)setTailMask:(id)arg1;
- (BOOL)shouldMaskWhenOpaque;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (BOOL)suppressMask;
- (id)tailMask;

@end
