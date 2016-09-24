/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKNearestStationViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <MKNearestStationViewControllerDelegate> * _delegate;
    NSString * _errorMessage;
    NSString * _lineName;
    MKMapItem * _nearestStation;
    unsigned int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKNearestStationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorMessage;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *nearestStation;
@property (nonatomic, readonly) BOOL requiresPreferredContentSizeInStackingView;
@property (nonatomic) unsigned int state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)errorMessage;
- (id)initWithLineName:(id)arg1;
- (id)nearestStation;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)setDelegate:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setNearestStation:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)transitionToState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
