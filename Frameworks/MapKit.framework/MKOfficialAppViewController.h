/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    BOOL  _isShowing;
    <MKOfficialAppViewControllerDelegate> * _officialAppDelegate;
    MKPlaceSectionHeaderView * _officialAppHeaderView;
    MKOfficialAppView * _officialAppView;
    NSString * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) <MKOfficialAppViewControllerDelegate> *officialAppDelegate;
@property (nonatomic, retain) MKPlaceSectionHeaderView *officialAppHeaderView;
@property (nonatomic, retain) MKOfficialAppView *officialAppView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (void)_beginFindingOfficialApp;
- (void)dealloc;
- (id)infoCardChildPossibleActions;
- (id)initWithURLString:(id)arg1;
- (BOOL)isShowing;
- (id)officialAppDelegate;
- (id)officialAppHeaderView;
- (id)officialAppView;
- (void)officialAppViewDidSelectPunchOutButton:(id)arg1;
- (void)setIsShowing:(BOOL)arg1;
- (void)setOfficialAppDelegate:(id)arg1;
- (void)setOfficialAppHeaderView:(id)arg1;
- (void)setOfficialAppView:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)updateOfficialViewButtonText;
- (id)url;
- (void)viewDidLoad;

@end
