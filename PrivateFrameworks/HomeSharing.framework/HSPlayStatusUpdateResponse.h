/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSPlayStatusUpdateResponse : HSResponse {
    unsigned int  _nextRevisionID;
    unsigned int  _nowPlayingContainerID;
    unsigned int  _nowPlayingContainerItemID;
    unsigned int  _nowPlayingDatabaseID;
    unsigned int  _nowPlayingItemID;
    NSDictionary * _playStatusInformation;
}

@property (nonatomic) unsigned int nextRevisionID;
@property (nonatomic) unsigned int nowPlayingContainerID;
@property (nonatomic) unsigned int nowPlayingContainerItemID;
@property (nonatomic) unsigned int nowPlayingDatabaseID;
@property (nonatomic) unsigned int nowPlayingItemID;
@property (nonatomic, copy) NSDictionary *playStatusInformation;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)nextRevisionID;
- (unsigned int)nowPlayingContainerID;
- (unsigned int)nowPlayingContainerItemID;
- (unsigned int)nowPlayingDatabaseID;
- (unsigned int)nowPlayingItemID;
- (id)playStatusInformation;
- (void)setNextRevisionID:(unsigned int)arg1;
- (void)setNowPlayingContainerID:(unsigned int)arg1;
- (void)setNowPlayingContainerItemID:(unsigned int)arg1;
- (void)setNowPlayingDatabaseID:(unsigned int)arg1;
- (void)setNowPlayingItemID:(unsigned int)arg1;
- (void)setPlayStatusInformation:(id)arg1;

@end
