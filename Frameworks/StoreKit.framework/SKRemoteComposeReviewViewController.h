/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController> {
    SKComposeReviewViewController * _composeReviewViewController;
}

@property (nonatomic) SKComposeReviewViewController *composeReviewViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (id)composeReviewViewController;
- (void)dealloc;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)promptForStarRating;
- (void)setComposeReviewViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
