/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomeUserCollectionViewCell : UICollectionViewCell <HUCellProtocol> {
    HUContactView * _contactView;
    HFItem * _item;
}

@property (nonatomic) double avatarDiameter;
@property (nonatomic, retain) HUContactView *contactView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HFItem *item;
@property (readonly) Class superclass;

+ (id)_requiredKeyDescriptors;

- (void).cxx_destruct;
- (void)_createSubviews;
- (float)avatarDiameter;
- (id)contactView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)prepareForReuse;
- (void)setAvatarDiameter:(float)arg1;
- (void)setContactView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end
