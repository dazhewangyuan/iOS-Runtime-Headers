/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSyncRequest : RadioRequest {
    NSObject<OS_dispatch_queue> * _artworkQueue;
    BOOL  _disableArtworkLoading;
    unsigned int  _globalVersion;
    BOOL  _includeCleanTracksOnly;
    BOOL  _isAutomaticUpdate;
    NSString * _referer;
    SSURLConnectionRequest * _request;
    NSDictionary * _responseDictionary;
    NSDictionary * _resultingOverrideBagDictionary;
}

@property (nonatomic) BOOL disableArtworkLoading;
@property (nonatomic) BOOL includeCleanTracksOnly;
@property (nonatomic) BOOL isAutomaticUpdate;
@property (nonatomic, copy) NSString *referer;
@property (nonatomic, readonly, copy) NSDictionary *resultingOverrideBagDictionary;

- (void).cxx_destruct;
- (id)_sortedChangesByType:(id)arg1;
- (id)_stationSortOrderForChanges:(id)arg1;
- (id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(int*)arg3 loadArtworkSynchronously:(BOOL)arg4;
- (void)cancel;
- (id)changeList;
- (BOOL)disableArtworkLoading;
- (BOOL)includeCleanTracksOnly;
- (id)init;
- (id)initWithGlobalVersion:(unsigned int)arg1;
- (BOOL)isAutomaticUpdate;
- (id)matchDictionary;
- (id)referer;
- (id)responseDictionary;
- (id)resultingOverrideBagDictionary;
- (void)setDisableArtworkLoading:(BOOL)arg1;
- (void)setIncludeCleanTracksOnly:(BOOL)arg1;
- (void)setIsAutomaticUpdate:(BOOL)arg1;
- (void)setReferer:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
