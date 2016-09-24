/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateDataContext : NSObject <FCCKDatabaseDelegate, FCPrivateChannelMembershipObserving, FCPrivateDataContext> {
    <FCContentContext> * _contentContext;
    <FCPrivateDataContextInternal> * _internalPrivateDataContext;
    FCPersonalizationData * _personalizationData;
    FCPrivateChannelMembershipController * _privateChannelMembershipController;
    NSString * _privateDataDirectory;
    BOOL  _privateDataSyncingEnabled;
    <FCPushNotificationHandling> * _privatePushNotificationHandler;
    FCReadingHistory * _readingHistory;
    FCReadingList * _readingList;
    FCSubscriptionList * _subscriptionList;
    FCTagSettings * _tagSettings;
    FCUserInfo * _userInfo;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) <FCPrivateDataContextInternal> *internalPrivateDataContext;
@property (nonatomic, readonly) FCPersonalizationData *personalizationData;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (nonatomic, readonly, copy) NSString *privateDataDirectory;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) BOOL privateDataSyncingEnabled;
@property (nonatomic, readonly) <FCPushNotificationHandling> *privatePushNotificationHandler;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (nonatomic, readonly) FCUserInfo *userInfo;

- (void).cxx_destruct;
- (void)_updateRequestAnonymity;
- (void)clearCloudKitCaches;
- (id)contentContext;
- (void)databaseHasBeenRateLimited:(id)arg1 retryAfter:(double)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 privateDataHostDirectory:(id)arg2 privateDataActionProvider:(id)arg3 networkBehaviorMonitor:(id)arg4 privateDataSyncingEnabled:(BOOL)arg5 iCloudAccountChanged:(BOOL)arg6;
- (id)initWithContext:(id)arg1 privateDatabase:(id)arg2 privateContainer:(id)arg3 privateDataDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(BOOL)arg7 iCloudAccountChanged:(BOOL)arg8;
- (id)internalPrivateDataContext;
- (BOOL)isPrivateDataSyncingEnabled;
- (id)personalizationData;
- (id)privateChannelMembershipController;
- (void)privateChannelMembershipControllerDidChange:(id)arg1;
- (id)privateDataDirectory;
- (id)privatePushNotificationHandler;
- (id)privateStoreWithName:(id)arg1 version:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)readingHistory;
- (id)readingList;
- (void)setContentContext:(id)arg1;
- (void)setInternalPrivateDataContext:(id)arg1;
- (id)subscriptionList;
- (id)tagSettings;
- (id)userInfo;

@end
