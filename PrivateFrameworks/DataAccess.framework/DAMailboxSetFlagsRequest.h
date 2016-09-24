/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {
    unsigned int  _offFlags;
    unsigned int  _onFlags;
}

@property (nonatomic) unsigned int offFlags;
@property (nonatomic) unsigned int onFlags;

- (id)description;
- (unsigned int)hash;
- (id)initRequestWithSetFlags:(unsigned int)arg1 unsetFlags:(unsigned int)arg2 message:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)offFlags;
- (unsigned int)onFlags;
- (void)setOffFlags:(unsigned int)arg1;
- (void)setOnFlags:(unsigned int)arg1;

@end
