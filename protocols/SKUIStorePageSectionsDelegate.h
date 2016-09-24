/* Generated by RuntimeBrowser.
 */

@protocol SKUIStorePageSectionsDelegate <NSObject>

@optional

- (BOOL)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 showProductPageForItem:(SKUIItem *)arg2;
- (BOOL)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 showStorePageForURL:(NSURL *)arg2;
- (void)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 willScrollToOffset:(struct CGPoint { double x1; double x2; })arg2 visibleRange:(struct SKUIIndexPathRange { int x1; int x2; int x3; int x4; })arg3;
- (void)sectionsViewControllerDidDismissOverlayController:(SKUIStorePageSectionsViewController *)arg1;
- (void)sectionsViewControllerDidScroll:(SKUIStorePageSectionsViewController *)arg1;

@end
