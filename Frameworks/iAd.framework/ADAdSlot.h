/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSlot : NSObject <ADBannerViewInternalDelegate, NSSecureCoding> {
    id /* block */  _completionHandler;
    <ADAdSlotDelegate> * _delegate;
    BOOL  _didBeginPlayback;
    BOOL  _didReportFinish;
    BOOL  _didRequest;
    NSData * _followingSongData;
    BOOL  _gatewayAdSlot;
    NSString * _identifier;
    NSMutableArray * _pendingBannerLoads;
    NSData * _previousSongData;
    NSData * _stationData;
    NSMutableArray * _visuallyDisengagedBanners;
    NSMutableArray * _visuallyEngagedBanners;
}

@property (nonatomic, readonly, retain) NSArray *ads;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADAdSlotDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didBeginPlayback;
@property (nonatomic) BOOL didReportFinish;
@property (nonatomic) BOOL didRequest;
@property (nonatomic, copy) NSData *followingSongData;
@property (nonatomic) BOOL gatewayAdSlot;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *pendingBannerLoads;
@property (nonatomic, copy) NSData *previousSongData;
@property (nonatomic, copy) NSData *stationData;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *visuallyDisengagedBanners;
@property (nonatomic, retain) NSMutableArray *visuallyEngagedBanners;

+ (BOOL)supportsSecureCoding;

- (id)_bannersForAds:(id)arg1;
- (void)_considerInvokingCompletionHandler;
- (void)_visuallyEngagedDidChange;
- (id)ads;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (BOOL)didBeginPlayback;
- (void)didFinishPlaybackOfAds:(id)arg1 skippedCount:(int)arg2;
- (BOOL)didReportFinish;
- (BOOL)didRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)followingSongData;
- (BOOL)gatewayAdSlot;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadVisuallyEngagedAds:(id)arg1 visuallyDisengagedAds:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)pendingBannerLoads;
- (id)previousSongData;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidBeginPlayback:(BOOL)arg1;
- (void)setDidReportFinish:(BOOL)arg1;
- (void)setDidRequest:(BOOL)arg1;
- (void)setFollowingSongData:(id)arg1;
- (void)setGatewayAdSlot:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPendingBannerLoads:(id)arg1;
- (void)setPreviousSongData:(id)arg1;
- (void)setStationData:(id)arg1;
- (void)setVisuallyDisengagedBanners:(id)arg1;
- (void)setVisuallyEngagedBanners:(id)arg1;
- (id)stationData;
- (id)visuallyDisengagedBanners;
- (id)visuallyEngagedBanners;
- (void)willBeginPlaybackOfAds:(id)arg1 forSpace:(int)arg2;

@end
