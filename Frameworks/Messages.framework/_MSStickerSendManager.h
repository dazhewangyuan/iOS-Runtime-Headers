/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate> {
    <_MSStickerSendManagerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_MSStickerSendManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)insertSticker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;

@end
