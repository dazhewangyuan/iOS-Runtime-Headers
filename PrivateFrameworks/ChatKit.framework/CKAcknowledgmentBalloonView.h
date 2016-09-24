/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAcknowledgmentBalloonView : CKBalloonView {
    int  _coloredPart;
    CKAcknowledgmentGlyphView * _glyphView;
    BOOL  _stacked;
}

@property (nonatomic) int coloredPart;
@property (nonatomic, retain) CKAcknowledgmentGlyphView *glyphView;
@property (getter=isStacked, nonatomic) BOOL stacked;

- (void).cxx_destruct;
- (int)coloredPart;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;
- (id)glyphView;
- (BOOL)isStacked;
- (void)prepareForReuse;
- (void)setColoredPart:(int)arg1;
- (void)setGlyphView:(id)arg1;
- (void)setStacked:(BOOL)arg1;

@end
