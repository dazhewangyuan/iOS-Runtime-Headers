/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesConfiguration : NSObject {
    NSString * _channelID;
    int  _cutoffTime;
    int  _maximumArticleCount;
    NTPBTopStoriesConfig * _pbConfig;
    BOOL  _pinningEnabled;
    BOOL  _promotingEnabled;
    int  _storyTypeTimeout;
    NSDictionary * _styleConfigurations;
}

@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) int cutoffTime;
@property (nonatomic, readonly) int maximumArticleCount;
@property (getter=isPinningEnabled, nonatomic, readonly) BOOL pinningEnabled;
@property (getter=isPromotingEnabled, nonatomic, readonly) BOOL promotingEnabled;
@property (nonatomic, readonly) int storyTypeTimeout;
@property (nonatomic, readonly) NSDictionary *styleConfigurations;

- (void).cxx_destruct;
- (id)channelID;
- (int)cutoffTime;
- (unsigned int)hash;
- (id)initWithDefaults;
- (id)initWithPBTopStoriesConfig:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPinningEnabled;
- (BOOL)isPromotingEnabled;
- (int)maximumArticleCount;
- (int)storyTypeTimeout;
- (id)styleConfigurations;

@end
