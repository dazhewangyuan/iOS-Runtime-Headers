/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChatRegistry : NSObject <NSFastEnumeration> {
    NSMutableArray * _allChats;
    NSMutableArray * _allChatsInThreadNameMap;
    NSMutableDictionary * _chatGUIDToChatMap;
    NSMutableDictionary * _chatGUIDToCurrentThreadMap;
    NSMutableDictionary * _chatGUIDToInfoMap;
    NSMutableDictionary * _chatGUIDToiMessageSentOrReceivedMap;
    NSMutableDictionary * _chatsBeingLoadedMap;
    BOOL  _daemonHadTerminated;
    int  _daemonLastFailedMessageID;
    unsigned int  _daemonUnreadCount;
    unsigned int  _defaultNumberOfMessagesToLoad;
    BOOL  _firstLoad;
    NSString * _historyModificationStamp;
    BOOL  _isInternalInstall;
    BOOL  _loading;
    IMTimer * _markAsReadTimer;
    NSMutableArray * _pendingQueries;
    BOOL  _personaKitRetriveAPITimedOut;
    BOOL  _postMessageSentNotifications;
    NSMutableDictionary * _queryCompletionBlocks;
    NSArray * _simulatedChats;
    NSMutableDictionary * _threadNameToChatMap;
    double  _timerStartTimeInterval;
    NSUserActivity * _userActivity;
    NSMutableArray * _waitingForQueries;
    BOOL  _wantsHistoryReload;
}

@property (setter=_setDefaultNumberOfMessagesToLoad:, nonatomic) unsigned int _defaultNumberOfMessagesToLoad;
@property (nonatomic, readonly) BOOL _isLoading;
@property (setter=_setPostMessageSentNotifications:, nonatomic) BOOL _postMessageSentNotifications;
@property (nonatomic, readonly) NSArray *allExistingChats;
@property (nonatomic, readonly) unsigned int numberOfExistingChats;
@property (nonatomic) BOOL personaKitRetriveAPITimedOut;
@property (setter=_setSimulatedChats:, nonatomic, retain) NSArray *simulatedChats;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (Class)messageClass;
+ (void)setMessageClass:(Class)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)__blockUntilQueriesComplete;
- (void)__handleChatReconstructions:(id)arg1;
- (void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (id)_allCreatedChats;
- (id)_allGUIDsForChat:(id)arg1;
- (void)_blockUntilQueriesComplete:(id)arg1;
- (void)_chat:(id)arg1 handleCompletionOfQuery:(id)arg2 withUserInfo:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
- (void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 joinWithProperties:(id)arg2;
- (void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 sendMessage:(id)arg2;
- (void)_chat:(id)arg1 sendPlayedReceiptForMessage:(id)arg2;
- (void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2;
- (void)_chat:(id)arg1 sendSavedReceiptForMessage:(id)arg2;
- (void)_chat:(id)arg1 setPlayedExpressiveSendForMessage:(id)arg2;
- (void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3;
- (void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3;
- (void)_chat:(id)arg1 updateDisplayName:(id)arg2;
- (void)_chat:(id)arg1 updateIsFiltered:(BOOL)arg2;
- (id)_chatForChatDictionary:(id)arg1 items:(id)arg2 allowCreate:(BOOL)arg3 createdChat:(BOOL*)arg4 outGUID:(id*)arg5;
- (id)_chatInstanceForGUID:(id)arg1;
- (void)_chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;
- (void)_chat_clearHistory:(id)arg1 beforeGUID:(id)arg2 afterGUID:(id)arg3 queryID:(id)arg4;
- (void)_chat_declineInvitation:(id)arg1;
- (void)_chat_leave:(id)arg1;
- (void)_chat_loadAttachments:(id)arg1 queryID:(id)arg2;
- (void)_chat_loadFrequentReplies:(id)arg1 limit:(unsigned int)arg2 queryID:(id)arg3;
- (void)_chat_loadHistory:(id)arg1 limit:(unsigned int)arg2 beforeGUID:(id)arg3 afterGUID:(id)arg4 queryID:(id)arg5;
- (void)_chat_loadUnreadMessages:(id)arg1 limit:(unsigned int)arg2 fallbackGUID:(id)arg3 queryId:(id)arg4;
- (void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2;
- (void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2 autoReport:(BOOL)arg3;
- (void)_chat_markAsSpamAutomatically:(id)arg1;
- (void)_chat_remove:(id)arg1;
- (void)_chat_sendReadReceiptForAllMessages:(id)arg1;
- (void)_chat_storeItem:(id)arg1 inChat:(id)arg2;
- (id)_chatsWithMessage:(id)arg1;
- (id)_chatsWithMessageGUID:(id)arg1;
- (void)_clearMarkAsReadTimerIfNecessary;
- (id)_createdChatForIMHandle:(id)arg1;
- (id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(BOOL)arg5;
- (id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (void)_daemonReallyDied:(id)arg1;
- (unsigned int)_defaultNumberOfMessagesToLoad;
- (id)_eventForMessage:(id)arg1;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3;
- (BOOL)_firstLoad;
- (void)_handleChatReconstructions:(id)arg1;
- (BOOL)_hasChat:(id)arg1 forService:(id)arg2;
- (BOOL)_isLoading;
- (id)_lookupExistingChatWithIMHandle:(id)arg1;
- (void)_markHasHadSuccessfulQueryForChat:(id)arg1;
- (void)_noteChatDealloc:(id)arg1;
- (void)_noteChatInit:(id)arg1;
- (BOOL)_postMessageSentNotifications;
- (void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 message:(id)arg5;
- (void)_registerChat:(id)arg1 isIncoming:(BOOL)arg2 guid:(id)arg3;
- (void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(BOOL)arg3 newGUID:(id)arg4;
- (void)_registerCompletion:(id /* block */)arg1 forQueryID:(id)arg2;
- (void)_setChatHasCommunicatedOveriMessage:(id)arg1;
- (void)_setDefaultNumberOfMessagesToLoad:(unsigned int)arg1;
- (void)_setPostMessageSentNotifications:(BOOL)arg1;
- (void)_setSimulatedChats:(id)arg1;
- (void)_startMarkAsReadTimerIfNecessary;
- (void)_trackUsageForMessage:(id)arg1;
- (void)_unregisterChat:(id)arg1;
- (void)_unregisterChatWithGUID:(id)arg1;
- (void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(BOOL)arg3;
- (void)_updateUnreadCountForChat:(id)arg1;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 member:(id)arg5 statusChanged:(int)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageSent:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 statusChanged:(int)arg5 handleInfo:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5;
- (id)allExistingChats;
- (void)attachmentQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)chat:(id)arg1 displayNameUpdated:(id)arg2;
- (void)chat:(id)arg1 isFilteredUpdated:(BOOL)arg2;
- (void)chat:(id)arg1 propertiesUpdated:(id)arg2;
- (void)chat:(id)arg1 updated:(id)arg2;
- (id)chatForIMHandle:(id)arg1;
- (id)chatForIMHandles:(id)arg1;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2;
- (id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3;
- (id)chatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)chatForURL:(id)arg1 outMessageText:(id*)arg2 outRecipientIDs:(id*)arg3 outService:(id*)arg4 outMessageGUID:(id*)arg5;
- (void)chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)existingChatForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 bestHandles:(id*)arg3;
- (id)existingChatForIMHandle:(id)arg1;
- (id)existingChatForIMHandle:(id)arg1 allowRetargeting:(BOOL)arg2;
- (id)existingChatForIMHandles:(id)arg1;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3 displayName:(id)arg4 ignoresDisplayName:(BOOL)arg5 joinedChatsOnly:(BOOL)arg6;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(BOOL)arg5;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(BOOL)arg3;
- (id)existingChatWithChatIdentifier:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)existingChatWithGroupID:(id)arg1;
- (void)frequentRepliesQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned int)arg5;
- (void)frequentRepliesQuery:(id)arg1 finishedWithResult:(id)arg2 limit:(unsigned int)arg3;
- (void)handleIMChatParticipantsDidChange:(id)arg1;
- (void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3;
- (void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned int)arg5;
- (id)init;
- (int)lastFailedMessageID;
- (void)lastFailedMessageIDChanged:(int)arg1;
- (void)leftChat:(id)arg1;
- (id)loadChatFromDaemonWithChatIdentifier:(id)arg1;
- (void)markAsSpamQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (id)messagesURLWithChat:(id)arg1 orHandles:(id)arg2 withMessageText:(id)arg3;
- (unsigned int)numberOfExistingChats;
- (BOOL)personaKitRetriveAPITimedOut;
- (void)setActiveChatURL:(id)arg1;
- (void)setPersonaKitRetriveAPITimedOut:(BOOL)arg1;
- (void)setUserActivityForChat:(id)arg1 message:(id)arg2 orHandles:(id)arg3 title:(id)arg4;
- (void)setUserActivityForChat:(id)arg1 orHandles:(id)arg2 title:(id)arg3;
- (void)setupComplete;
- (void)setupComplete:(BOOL)arg1 info:(id)arg2;
- (id)simulatedChats;
- (void)systemApplicationDidResume;
- (unsigned int)unreadCount;
- (void)unreadCountChanged:(int)arg1;
- (void)unregisterChat:(id)arg1;
- (void)unregisterChatWithGUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)_ck_chatForHandles:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)_ck_chatForHandles:(id)arg1 displayName:(id)arg2 ignoresDisplayName:(BOOL)arg3 joinedChatsOnly:(BOOL)arg4 createIfNecessary:(BOOL)arg5;

@end
