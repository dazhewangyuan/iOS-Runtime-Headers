/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {
    NSAttributedString * _attributedText;
    <CKBalloonTextViewInteractionDelegate> * _interactionDelegate;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <CKBalloonTextViewInteractionDelegate> *interactionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (id)attributedText;
- (id)description;
- (void)didMoveToWindow;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)interactionDelegate;
- (void)setAttributedText:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 isSingleLine:(BOOL*)arg3;

@end
