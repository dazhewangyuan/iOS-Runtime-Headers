/* Generated by RuntimeBrowser.
 */

@protocol PXPeopleStripCollectionViewControllerDelegate <NSObject>

@required

- (UIFont *)currentNameLabelFont;
- (void)memberTappedAtIndexPath:(NSIndexPath *)arg1 forPeopleStripController:(PXPeopleStripCollectionViewController *)arg2;
- (float)minimumInteritemSpacing;
- (float)minimumLineSpacing;
- (NSString *)nameStringForPeople:(NSArray *)arg1 font:(UIFont *)arg2 width:(float)arg3 outHeight:(float*)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (struct CGSize { double x1; double x2; })sizeForItem;
- (float)verticalSpacingForFaceAndText;

@end
