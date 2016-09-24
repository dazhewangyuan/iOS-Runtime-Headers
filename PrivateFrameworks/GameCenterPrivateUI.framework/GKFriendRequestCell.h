/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKFriendRequestCell : GKBasePlayerCell {
    GKButton * _acceptButton;
    GKButton * _declineButton;
    UILabel * _messageLabel;
    UILabel * _whenLabel;
}

@property (nonatomic, retain) GKButton *acceptButton;
@property (nonatomic, retain) GKButton *declineButton;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *whenLabel;

+ (void)applyFriendRequest:(id)arg1 messageStringToLabel:(id)arg2 showAlias:(BOOL)arg3;
+ (Class)cellClassForPlayer:(id)arg1;
+ (id)itemHeightList;
+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (id)acceptButton;
- (void)dealloc;
- (id)declineButton;
- (void)didTouchAccept:(id)arg1;
- (void)didTouchDecline:(id)arg1;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)messageLabel;
- (void)setAcceptButton:(id)arg1;
- (void)setDeclineButton:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setWhenLabel:(id)arg1;
- (id)whenLabel;

@end
