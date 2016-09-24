/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {
    int  _appSessionDuration;
    int  _channelSubscriptionCount;
    struct { 
        unsigned int appSessionDuration : 1; 
        unsigned int channelSubscriptionCount : 1; 
        unsigned int notificationEnabledChannelsCount : 1; 
        unsigned int notitificationsEnabledChannelsCount : 1; 
        unsigned int sessionEndReason : 1; 
        unsigned int topicSubscriptionCount : 1; 
    }  _has;
    NSMutableArray * _lastVisibleViews;
    NSMutableArray * _notificationChannelIds;
    int  _notificationEnabledChannelsCount;
    int  _notitificationsEnabledChannelsCount;
    NSMutableArray * _paidSubscriptionChannelIds;
    int  _sessionEndReason;
    int  _topicSubscriptionCount;
}

@property (nonatomic) int appSessionDuration;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic) BOOL hasAppSessionDuration;
@property (nonatomic) BOOL hasChannelSubscriptionCount;
@property (nonatomic) BOOL hasNotificationEnabledChannelsCount;
@property (nonatomic) BOOL hasNotitificationsEnabledChannelsCount;
@property (nonatomic) BOOL hasSessionEndReason;
@property (nonatomic) BOOL hasTopicSubscriptionCount;
@property (nonatomic, retain) NSMutableArray *lastVisibleViews;
@property (nonatomic, retain) NSMutableArray *notificationChannelIds;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (nonatomic, retain) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) int sessionEndReason;
@property (nonatomic) int topicSubscriptionCount;

+ (Class)lastVisibleViewsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;

- (void).cxx_destruct;
- (void)addLastVisibleViews:(id)arg1;
- (void)addNotificationChannelIds:(id)arg1;
- (void)addPaidSubscriptionChannelIds:(id)arg1;
- (int)appSessionDuration;
- (int)channelSubscriptionCount;
- (void)clearLastVisibleViews;
- (void)clearNotificationChannelIds;
- (void)clearPaidSubscriptionChannelIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAppSessionDuration;
- (BOOL)hasChannelSubscriptionCount;
- (BOOL)hasNotificationEnabledChannelsCount;
- (BOOL)hasNotitificationsEnabledChannelsCount;
- (BOOL)hasSessionEndReason;
- (BOOL)hasTopicSubscriptionCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lastVisibleViews;
- (id)lastVisibleViewsAtIndex:(unsigned int)arg1;
- (unsigned int)lastVisibleViewsCount;
- (void)mergeFrom:(id)arg1;
- (id)notificationChannelIds;
- (id)notificationChannelIdsAtIndex:(unsigned int)arg1;
- (unsigned int)notificationChannelIdsCount;
- (int)notificationEnabledChannelsCount;
- (int)notitificationsEnabledChannelsCount;
- (id)paidSubscriptionChannelIds;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned int)arg1;
- (unsigned int)paidSubscriptionChannelIdsCount;
- (BOOL)readFrom:(id)arg1;
- (int)sessionEndReason;
- (void)setAppSessionDuration:(int)arg1;
- (void)setChannelSubscriptionCount:(int)arg1;
- (void)setHasAppSessionDuration:(BOOL)arg1;
- (void)setHasChannelSubscriptionCount:(BOOL)arg1;
- (void)setHasNotificationEnabledChannelsCount:(BOOL)arg1;
- (void)setHasNotitificationsEnabledChannelsCount:(BOOL)arg1;
- (void)setHasSessionEndReason:(BOOL)arg1;
- (void)setHasTopicSubscriptionCount:(BOOL)arg1;
- (void)setLastVisibleViews:(id)arg1;
- (void)setNotificationChannelIds:(id)arg1;
- (void)setNotificationEnabledChannelsCount:(int)arg1;
- (void)setNotitificationsEnabledChannelsCount:(int)arg1;
- (void)setPaidSubscriptionChannelIds:(id)arg1;
- (void)setSessionEndReason:(int)arg1;
- (void)setTopicSubscriptionCount:(int)arg1;
- (int)topicSubscriptionCount;
- (void)writeTo:(id)arg1;

@end
