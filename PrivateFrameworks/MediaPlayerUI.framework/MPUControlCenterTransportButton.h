/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUControlCenterTransportButton : UIControl <MPUTransportButton> {
    MPUTransportButton * _button;
    UIImage * _transportButtonImage;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic, retain) UIImage *transportButtonImage;
@property (nonatomic) int transportButtonImageViewContentMode;

+ (id)transportButton;

- (void).cxx_destruct;
- (void)_longPressBeginReceived:(id)arg1;
- (void)_longPressEndReceived:(id)arg1;
- (void)_tapReceived:(id)arg1;
- (void)_touchActivateReceived:(id)arg1;
- (void)_touchDeactivateReceived:(id)arg1;
- (void)_updateEffectForStateChange:(unsigned int)arg1;
- (BOOL)adjustsImageWhenHighlighted;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTransportButtonImage:(id)arg1;
- (void)setTransportButtonImageViewContentMode:(int)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)transportButtonEventHandler;
- (id)transportButtonImage;
- (int)transportButtonImageViewContentMode;
- (BOOL)wantsCustomHighlightAppearance;

@end
