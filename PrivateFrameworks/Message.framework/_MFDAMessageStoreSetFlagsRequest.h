/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest>

@property (nonatomic, readonly) BOOL isUserRequested;
@property (nonatomic, readonly) BOOL shouldSend;

- (id)deferredOperation;
- (unsigned int)generationNumber;
- (BOOL)isUserRequested;
- (BOOL)shouldSend;

@end
