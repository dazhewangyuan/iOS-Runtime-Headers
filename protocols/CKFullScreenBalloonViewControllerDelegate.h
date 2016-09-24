/* Generated by RuntimeBrowser.
 */

@protocol CKFullScreenBalloonViewControllerDelegate <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 balloonFrameForChatItem:(CKChatItem *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 sendMessageAcknowledgment:(int)arg2 forChatItem:(CKMessagePartChatItem *)arg3;

@optional

- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 deleteStickerWithTransferGUID:(NSString *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 didAppearAnimated:(BOOL)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 stickerPackTappedWithAdamID:(NSNumber *)arg2;
- (void)fullScreenBalloonViewController:(void *)arg1 verticallyScrollTranscriptByAmount:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: CKFullScreenBalloonViewController *, float, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 willAppearAnimated:(BOOL)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 willDisappearWithSendAnimation:(BOOL)arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(CKFullScreenBalloonViewController *)arg1;

@end
