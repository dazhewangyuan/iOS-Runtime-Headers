/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost> {
    int  _index;
    NSArray * _messageEditChatItems;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _messagePartRange;
    NSAttributedString * _text;
    NSArray * _visibleAssociatedMessageChatItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int index;
@property (nonatomic, readonly) NSArray *messageEditChatItems;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } messagePartRange;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSAttributedString *text;
@property (setter=_setVisibleAssociatedMessageChatItems:, nonatomic, retain) NSArray *visibleAssociatedMessageChatItems;

+ (id)_guidForMessage:(id)arg1 url:(id)arg2;
+ (id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2;
+ (id)_newMessagePartsForMessageItem:(id)arg1;
+ (BOOL)_testingSupportsURL:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 messagePartRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(int)arg3 messagePartRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 visibleAssociatedMessageChatItems:(id)arg5;
- (void)_setMessageEditChatItems:(id)arg1;
- (void)_setVisibleAssociatedMessageChatItems:(id)arg1;
- (BOOL)canDelete;
- (BOOL)canSendMessageAcknowledgment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)index;
- (id)messageEditChatItems;
- (struct _NSRange { unsigned int x1; unsigned int x2; })messagePartRange;
- (void)setIndex:(int)arg1;
- (void)setMessagePartRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)text;
- (id)visibleAssociatedMessageChatItems;

@end
