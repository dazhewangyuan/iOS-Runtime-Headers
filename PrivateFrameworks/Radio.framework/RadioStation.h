/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStation : NSObject <MusicEntityValueProviding, RadioManagedObjectWrapperProtocol> {
    NSData * _adData;
    int  _adamID;
    NSURL * _artworkURL;
    NSData * _artworkURLData;
    NSString * _coreSeedName;
    BOOL  _databaseBacked;
    NSDictionary * _debugDictionary;
    BOOL  _editEnabled;
    NSArray * _editableFields;
    BOOL  _featured;
    BOOL  _gatewayVideoAdEnabled;
    BOOL  _hasSkipRules;
    unsigned int  _impressionThreshold;
    BOOL  _isExplicit;
    BOOL  _likesEnabled;
    NSManagedObject * _managedObject;
    RadioModel * _model;
    NSString * _name;
    int  _persistentID;
    BOOL  _premiumPlacement;
    BOOL  _previewOnly;
    BOOL  _requiresSubscription;
    id  _seedTracks;
    NSString * _shareToken;
    BOOL  _shared;
    BOOL  _sharingEnabled;
    BOOL  _skipEnabled;
    int  _skipFrequency;
    NSString * _skipIdentifier;
    double  _skipInterval;
    NSArray * _skipTimestamps;
    int  _songMixType;
    int  _sortOrder;
    BOOL  _sponsored;
    NSString * _stationDescription;
    NSString * _stationHash;
    int  _stationID;
    NSString * _stationStringID;
    NSURL * _streamCertificateURL;
    NSURL * _streamKeyURL;
    NSURL * _streamURL;
    BOOL  _subscribed;
    int  _subscriberCount;
    NSArray * _trackPlaybackDescriptorQueue;
    BOOL  _virtualPlayEnabled;
}

@property (nonatomic, retain) NSData *adData;
@property (nonatomic) int adamID;
@property (nonatomic, readonly) RadioArtworkCollection *artworkCollection;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSData *artworkURLData;
@property (nonatomic, copy) NSString *coreSeedName;
@property (getter=isDatabaseBacked, nonatomic, readonly) BOOL databaseBacked;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *debugDictionary;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL editEnabled;
@property (nonatomic, retain) NSArray *editableFields;
@property (getter=isFeatured, nonatomic) BOOL featured;
@property (nonatomic, readonly, copy) NSDictionary *feedbackDictionaryRepresentation;
@property (getter=isGatewayVideoAdEnabled, nonatomic) BOOL gatewayVideoAdEnabled;
@property (nonatomic) BOOL hasSkipRules;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int impressionThreshold;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL likesEnabled;
@property (nonatomic, readonly) NSManagedObject *managedObject;
@property (nonatomic, readonly) RadioModel *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int persistentID;
@property (getter=isPremiumPlacement, nonatomic) BOOL premiumPlacement;
@property (getter=isPreview, nonatomic, readonly) BOOL preview;
@property (getter=isPreviewOnly, nonatomic) BOOL previewOnly;
@property (nonatomic) BOOL requiresSubscription;
@property (nonatomic, retain) id seedTracks;
@property (nonatomic, copy) NSString *shareToken;
@property (getter=isShared, nonatomic) BOOL shared;
@property (getter=isSharingEnabled, nonatomic) BOOL sharingEnabled;
@property (nonatomic) BOOL skipEnabled;
@property (nonatomic) int skipFrequency;
@property (nonatomic, copy) NSString *skipIdentifier;
@property (nonatomic) double skipInterval;
@property (nonatomic, copy) NSArray *skipTimestamps;
@property (nonatomic) int songMixType;
@property (nonatomic) int sortOrder;
@property (getter=isSponsored, nonatomic) BOOL sponsored;
@property (nonatomic, copy) NSString *stationDescription;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) int stationID;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic, retain) NSURL *streamCertificateURL;
@property (nonatomic, retain) NSURL *streamKeyURL;
@property (nonatomic, retain) NSURL *streamURL;
@property (getter=isSubscribed, nonatomic) BOOL subscribed;
@property (nonatomic) int subscriberCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trackPlaybackDescriptorQueue;
@property (nonatomic) BOOL virtualPlayEnabled;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

- (void).cxx_destruct;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (id)adData;
- (int)adamID;
- (id)artworkCollection;
- (id)artworkURL;
- (id)artworkURLData;
- (id)artworkURLForSize:(struct CGSize { double x1; double x2; })arg1 expectedSize:(struct CGSize { double x1; double x2; }*)arg2;
- (id)coreSeedName;
- (void)dealloc;
- (id)debugDictionary;
- (id)dictionaryRepresentation;
- (BOOL)editEnabled;
- (id)editableFields;
- (id)feedbackDictionaryRepresentation;
- (BOOL)hasSkipRules;
- (unsigned int)hash;
- (unsigned int)impressionThreshold;
- (id)initWithModel:(id)arg1 managedObject:(id)arg2;
- (BOOL)isDatabaseBacked;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicit;
- (BOOL)isFeatured;
- (BOOL)isGatewayVideoAdEnabled;
- (BOOL)isPremiumPlacement;
- (BOOL)isPreview;
- (BOOL)isPreviewOnly;
- (BOOL)isShared;
- (BOOL)isSharingEnabled;
- (BOOL)isSponsored;
- (BOOL)isSubscribed;
- (BOOL)likesEnabled;
- (id)managedObject;
- (id)model;
- (id)name;
- (int)persistentID;
- (BOOL)requiresSubscription;
- (id)seedTracks;
- (void)setAdData:(id)arg1;
- (void)setAdamID:(int)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setArtworkURLData:(id)arg1;
- (void)setCoreSeedName:(id)arg1;
- (void)setDebugDictionary:(id)arg1;
- (void)setEditEnabled:(BOOL)arg1;
- (void)setEditableFields:(id)arg1;
- (void)setFeatured:(BOOL)arg1;
- (void)setGatewayVideoAdEnabled:(BOOL)arg1;
- (void)setHasSkipRules:(BOOL)arg1;
- (void)setImpressionThreshold:(unsigned int)arg1;
- (void)setIsExplicit:(BOOL)arg1;
- (void)setLikesEnabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentID:(int)arg1;
- (void)setPremiumPlacement:(BOOL)arg1;
- (void)setPreviewOnly:(BOOL)arg1;
- (void)setRequiresSubscription:(BOOL)arg1;
- (void)setSeedTracks:(id)arg1;
- (void)setShareToken:(id)arg1;
- (void)setShared:(BOOL)arg1;
- (void)setSharingEnabled:(BOOL)arg1;
- (void)setSkipEnabled:(BOOL)arg1;
- (void)setSkipFrequency:(int)arg1;
- (void)setSkipIdentifier:(id)arg1;
- (void)setSkipInterval:(double)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setSongMixType:(int)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSponsored:(BOOL)arg1;
- (void)setStationDescription:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(int)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStreamCertificateURL:(id)arg1;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamURL:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setSubscriberCount:(int)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1;
- (void)setVirtualPlayEnabled:(BOOL)arg1;
- (id)shareToken;
- (BOOL)skipEnabled;
- (int)skipFrequency;
- (id)skipIdentifier;
- (double)skipInterval;
- (id)skipTimestamps;
- (int)songMixType;
- (int)sortOrder;
- (id)stationDescription;
- (id)stationHash;
- (int)stationID;
- (id)stationStringID;
- (id)streamCertificateURL;
- (id)streamKeyURL;
- (id)streamURL;
- (int)subscriberCount;
- (id)trackPlaybackDescriptorQueue;
- (BOOL)virtualPlayEnabled;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(float)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
