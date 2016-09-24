/* Generated by RuntimeBrowser.
 */

@protocol CKPluginEntryViewController <NSObject>

@required

- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@optional

- (NSArray *)framesOfVisibleContentViewInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (id)initWithDataSource:(IMBalloonPluginDataSource *)arg1 entryViewDelegate:(id <CKPluginEntryViewControllerDelegate>)arg2;
- (NSString *)payloadBundleID;
- (void)payloadWillClear;
- (void)payloadWillSave;
- (NSData *)payloadWillSend;
- (BOOL)wantsClearButton;
- (BOOL)wantsEdgeToEdgeLayout;

@end
