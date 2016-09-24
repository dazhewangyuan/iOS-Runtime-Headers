/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityEvent : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL  _SBEnabled;
    NSString * _buildVersion;
    NSString * _containerID;
    SSVPlayActivityEventContainerIDs * _containerIDs;
    unsigned int  _containerType;
    NSString * _deviceName;
    unsigned int  _endReasonType;
    NSDate * _eventDate;
    NSTimeZone * _eventTimeZone;
    unsigned int  _eventType;
    NSString * _externalID;
    NSString * _featureName;
    double  _itemDuration;
    double  _itemEndTime;
    SSVPlayActivityEventItemIDs * _itemIDs;
    double  _itemStartTime;
    unsigned int  _itemType;
    unsigned int  _mediaType;
    BOOL  _offline;
    int  _persistentID;
    NSString * _personalizedContainerID;
    unsigned int  _reasonHintType;
    NSData * _recommendationData;
    unsigned int  _sourceType;
    unsigned int  _storeAccountID;
    NSString * _storeFrontID;
    NSString * _storeID;
    NSData * _timedMetadata;
    NSData * _trackInfo;
    int  _version;
}

@property (getter=isSBEnabled, nonatomic, readonly) BOOL SBEnabled;
@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *containerID;
@property (nonatomic, readonly, copy) SSVPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic, readonly) unsigned int containerType;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly) unsigned int endReasonType;
@property (nonatomic, readonly, copy) NSDate *eventDate;
@property (nonatomic, readonly, copy) NSTimeZone *eventTimeZone;
@property (nonatomic, readonly) unsigned int eventType;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly) double itemDuration;
@property (nonatomic, readonly) double itemEndTime;
@property (nonatomic, readonly, copy) SSVPlayActivityEventItemIDs *itemIDs;
@property (nonatomic, readonly) double itemStartTime;
@property (nonatomic, readonly) unsigned int itemType;
@property (nonatomic, readonly) unsigned int mediaType;
@property (getter=isOffline, nonatomic, readonly) BOOL offline;
@property (nonatomic, readonly) int persistentID;
@property (nonatomic, readonly, copy) NSString *personalizedContainerID;
@property (nonatomic, readonly) unsigned int reasonHintType;
@property (nonatomic, readonly, copy) NSData *recommendationData;
@property (nonatomic, readonly) unsigned int sourceType;
@property (nonatomic, readonly) unsigned int storeAccountID;
@property (nonatomic, readonly, copy) NSString *storeFrontID;
@property (nonatomic, readonly, copy) NSString *storeID;
@property (nonatomic, readonly, copy) NSData *timedMetadata;
@property (nonatomic, readonly, copy) NSData *trackInfo;
@property (nonatomic, readonly) int version;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)_mutableCopyClass;
- (id)buildVersion;
- (id)containerID;
- (id)containerIDs;
- (unsigned int)containerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)endReasonType;
- (id)eventDate;
- (id)eventTimeZone;
- (unsigned int)eventType;
- (id)externalID;
- (id)featureName;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOffline;
- (BOOL)isSBEnabled;
- (double)itemDuration;
- (double)itemEndTime;
- (id)itemIDs;
- (double)itemStartTime;
- (unsigned int)itemType;
- (unsigned int)mediaType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)persistentID;
- (id)personalizedContainerID;
- (unsigned int)reasonHintType;
- (id)recommendationData;
- (unsigned int)sourceType;
- (unsigned int)storeAccountID;
- (id)storeFrontID;
- (id)storeID;
- (id)timedMetadata;
- (id)trackInfo;
- (int)version;

@end
