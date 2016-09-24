/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBalloonPluginDataSource : NSObject {
    NSURL * _URLToOpenOnTapAction;
    NSString * __imMessageGUID;
    NSArray * _attachmentGUIDs;
    NSString * _bundleID;
    IMChat * _chat;
    NSArray * _consumedPayloads;
    DDScannerResult * _dataDetectedResult;
    NSString * _guidOfLastMessageInSession;
    BOOL  _hasInvalidatedSize;
    BOOL  _initialMessageIsFromMe;
    BOOL  _isLast;
    BOOL  _isShowingLatestMessageAsBreadcrumb;
    NSString * _messageGUID;
    int  _messageIDOfLastMessageInSession;
    BOOL  _payloadInShelf;
    NSArray * _pendingAttachmentData;
    IMPluginPayload * _pluginPayload;
    BOOL  _showingLatestMessageAsBreadcrumb;
    NSMutableSet * _temporaryAttachmentURLs;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URLToOpenOnTapAction;
@property (nonatomic, retain) NSString *_imMessageGUID;
@property (nonatomic, readonly) NSArray *allPayloads;
@property (nonatomic, retain) NSArray *attachmentGUIDs;
@property (nonatomic, readonly, retain) NSString *bundleID;
@property (nonatomic, retain) IMChat *chat;
@property (nonatomic, retain) NSArray *consumedPayloads;
@property (nonatomic, retain) DDScannerResult *dataDetectedResult;
@property (nonatomic, readonly, retain) NSString *guidOfLastMessageInSession;
@property (nonatomic) BOOL hasInvalidatedSize;
@property (nonatomic, readonly) IMMessage *imMessage;
@property (nonatomic) BOOL initialMessageIsFromMe;
@property (nonatomic, readonly) BOOL isFromMe;
@property (setter=setLast:, nonatomic) BOOL isLast;
@property (nonatomic, readonly) BOOL isPlayed;
@property (setter=setShowingLatestMessageAsBreadcrumb:, nonatomic) BOOL isShowingLatestMessageAsBreadcrumb;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic, readonly) int messageIDOfLastMessageInSession;
@property (nonatomic, readonly, retain) NSData *messagePayloadDataForSending;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) BOOL payloadInShelf;
@property (nonatomic, retain) NSArray *pendingAttachmentData;
@property (nonatomic, retain) IMPluginPayload *pluginPayload;
@property (getter=isShowingLatestMessageAsBreadcrumb, nonatomic, readonly) BOOL showingLatestMessageAsBreadcrumb;
@property (nonatomic, readonly, retain) NSAttributedString *statusAttributedString;
@property (nonatomic, readonly, retain) NSString *statusString;
@property (nonatomic, retain) NSMutableSet *temporaryAttachmentURLs;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, readonly) BOOL wantsReplyFromContentView;
@property (nonatomic, readonly) BOOL wantsStatusItem;

+ (id)previewSummary;
+ (id)previewSummaryForPluginBundle:(id)arg1;
+ (id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id*)arg3 previewAttachmentUTI:(id*)arg4;
+ (BOOL)supportsIndividualPreviewSummaries;
+ (BOOL)supportsURL:(id)arg1;

- (void).cxx_destruct;
- (id)URLToOpenOnTapAction;
- (id)_handlesByIdentifier;
- (id)_imMessageGUID;
- (void)_reloadLatestUnconsumedBreadcrumb;
- (void)_removeTemporaryAttachmentURLs;
- (id)_replaceHandleWithContactNameInString:(id)arg1;
- (BOOL)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2;
- (void)_updatePayload:(id)arg1 messageID:(int)arg2 messageGUID:(id)arg3;
- (void)_updateTemporaryAttachmentURLsForPluginPayload;
- (unsigned int)_updateWithPluginPayload:(id)arg1 messageID:(int)arg2 messageGUID:(id)arg3;
- (id)allPayloads;
- (id)attachmentGUIDs;
- (void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1;
- (id)bundleID;
- (id)chat;
- (id)consumedPayloads;
- (id)dataDetectedResult;
- (void)datasourceWasMovedToNewGuid:(id)arg1;
- (id)description;
- (void)didTapStatusItem;
- (id)displayNameForHandleIdentifier:(id)arg1 handlesByIdentifier:(id)arg2;
- (void)endShowingLastConsumedBreadcrumb;
- (id)guidOfLastMessageInSession;
- (BOOL)hasInvalidatedSize;
- (id)imMessage;
- (id)individualPreviewAttachmentFileAndUTI:(id*)arg1;
- (id)individualPreviewSummary;
- (id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4;
- (id)initWithPluginPayload:(id)arg1;
- (BOOL)initialMessageIsFromMe;
- (BOOL)isFromMe;
- (BOOL)isLast;
- (BOOL)isPlayed;
- (BOOL)isShowingLatestMessageAsBreadcrumb;
- (BOOL)isShowingLatestMessageAsBreadcrumb;
- (void)markAsPlayed;
- (id)messageGUID;
- (int)messageIDOfLastMessageInSession;
- (id)messagePayloadDataForSending;
- (void)needsResize;
- (id)payload;
- (void)payloadDidChange;
- (BOOL)payloadInShelf;
- (void)payloadWillEnterShelf;
- (void)payloadWillSendFromShelf;
- (id)pendingAttachmentData;
- (unsigned int)playbackType;
- (void)playbackWithCompletionBlock:(id /* block */)arg1;
- (id)pluginPayload;
- (void)pluginPayloadDidChange:(unsigned int)arg1;
- (void)sendPayload:(id)arg1;
- (void)sendPayload:(id)arg1 attachments:(id)arg2;
- (void)setAttachmentGUIDs:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setConsumedPayloads:(id)arg1;
- (void)setDataDetectedResult:(id)arg1;
- (void)setHasInvalidatedSize:(BOOL)arg1;
- (void)setInitialMessageIsFromMe:(BOOL)arg1;
- (void)setLast:(BOOL)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayload:(id)arg1 attachments:(id)arg2;
- (void)setPayloadInShelf:(BOOL)arg1;
- (void)setPendingAttachmentData:(id)arg1;
- (void)setPluginPayload:(id)arg1;
- (void)setShowingLatestMessageAsBreadcrumb:(BOOL)arg1;
- (void)setTemporaryAttachmentURLs:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)set_imMessageGUID:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusAttributedString;
- (id)statusString;
- (void)statusStringNeedsUpdate;
- (void)stopPlayback;
- (id)temporaryAttachmentURLs;
- (void)thumbnailURLWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)updatePayload:(id)arg1;
- (void)updatePayload:(id)arg1 attachments:(id)arg2;
- (id)url;
- (BOOL)wantsReplyFromContentView;
- (BOOL)wantsStatusItem;

@end
