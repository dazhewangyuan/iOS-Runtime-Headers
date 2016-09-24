/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUClientApplicationController : SUClientController <SKUIPassbookLoaderDelegate, SUTabBarControllerDelegate> {
    SUMediaPlayerViewController * _activeMediaPlayer;
    NSString * _exitStoreButtonTitle;
    SUPlaceholderViewController * _fetchSectionsPlaceholder;
    int  _ignoreDownloadQueueChangeCount;
    SUSectionsResponse * _lastBackgroundSectionsResponse;
    SUSectionsResponse * _lastSectionsResponse;
    SKUIURL * _launchURL;
    ISOperation * _loadSectionsOperation;
    id  _locationObserver;
    SKUIPassbookLoader * _passbookLoader;
    NSString * _preMediaDefaultPNG;
    SUPreviewOverlayViewController * _previewOverlay;
    BOOL  _reloadForStorefrontChangeAfterAccountSetup;
    BOOL  _reloadSectionsOnNextLaunch;
    BOOL  _shouldPrepareUserInterfaceWhenActivated;
    SUTabBarController * _tabBarController;
}

@property (getter=_activeMediaPlayer, setter=_setActiveMediaPlayer:, nonatomic, retain) SUMediaPlayerViewController *_activeMediaPlayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultPNGNameForSuspend;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *exitStoreButtonTitle;
@property (readonly) unsigned int hash;
@property (getter=isIgnoringDownloadQueueChanges, nonatomic, readonly) BOOL ignoringDownloadQueueChanges;
@property (nonatomic, readonly) NSURL *launchURL;
@property (getter=wasLaunchedFromLibrary, nonatomic, readonly) BOOL launchedFromLibrary;
@property (nonatomic) BOOL shouldPrepareUserInterfaceWhenActivated;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SUTabBarController *tabBarController;
@property (getter=isTabBarControllerLoaded, nonatomic, readonly) BOOL tabBarControllerLoaded;
@property (nonatomic, readonly) UINavigationController *topNavigationController;

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;

- (void)_accountControllerDisappearedNotification:(id)arg1;
- (id)_accountViewController;
- (id)_activeMediaPlayer;
- (void)_cancelLoadSectionsOperation;
- (void)_cancelSectionFetchPlaceholder;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_dialogDidFinishNotification:(id)arg1;
- (BOOL)_displayClientURL:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_handleAddPassbookPassURL:(id)arg1;
- (void)_handleDonationURL:(id)arg1;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (BOOL)_loadSectionsAllowingCache:(BOOL)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_newTabBarController;
- (void)_openClientURL:(id)arg1;
- (void)_presentSectionFetchUI;
- (id)_previewOverlayViewController;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (BOOL)_reloadForStorefrontChange;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)_restorePreMediaPlayerSettings;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)_resumableViewController;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)_setActiveMediaPlayer:(id)arg1;
- (void)_setupTabBarController;
- (id)_showPageForExternalOriginatedURLBagKey:(id)arg1;
- (void)_showPreviewOverlayAnimated:(BOOL)arg1;
- (BOOL)_showWildcatAccountViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (void)becomeActive;
- (void)beginIgnoringDownloadQueueChanges;
- (void)cancelAllOperations;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
- (id)copySuspendSettings;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (id)defaultPNGNameForSuspend;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)arg1;
- (BOOL)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (void)endIgnoringDownloadQueueChanges;
- (void)exitStoreAfterDialogsDismiss;
- (id)exitStoreButtonTitle;
- (id)initWithClientInterface:(id)arg1;
- (BOOL)isIgnoringDownloadQueueChanges;
- (BOOL)isTabBarControllerLoaded;
- (id)launchURL;
- (BOOL)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (id)overlayBackgroundViewController;
- (void)passbookLoaderDidFinish:(id)arg1;
- (void)prepareUserInterface;
- (BOOL)presentAccountViewController:(id)arg1 showNavigationBar:(BOOL)arg2 animated:(BOOL)arg3;
- (void)presentExternalURLViewController:(id)arg1;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (id)previewOverlayForClientInterface:(id)arg1;
- (BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (void)resignActive;
- (void)returnToLibrary;
- (void)returnToLibraryForClientInterface:(id)arg1;
- (BOOL)selectSectionWithIdentifier:(id)arg1;
- (void)setExitStoreButtonTitle:(id)arg1;
- (void)setShouldPrepareUserInterfaceWhenActivated:(BOOL)arg1;
- (void)setupUI;
- (BOOL)shouldPrepareUserInterfaceWhenActivated;
- (id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2;
- (id)tabBarController;
- (BOOL)tabBarController:(id)arg1 shouldShowSection:(id)arg2;
- (id)tabBarControllerForClientInterface:(id)arg1;
- (void)tearDownUI;
- (id)topNavigationController;
- (BOOL)wasLaunchedFromLibrary;

@end
