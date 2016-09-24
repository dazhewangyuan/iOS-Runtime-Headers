/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCGroupConfig : NSObject {
    unsigned int  _cutoffCount;
    unsigned int  _cutoffTimeSecs;
    NSDictionary * _dictionary;
    UIColor * _groupTitleColor;
}

@property (nonatomic, readonly) NSString *articleListID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic) unsigned int cutoffCount;
@property (nonatomic) unsigned int cutoffTimeSecs;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *feedID;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, retain) UIColor *groupTitleColor;
@property (nonatomic, readonly) NSString *sectionID;

- (void).cxx_destruct;
- (id)articleListID;
- (id)channelID;
- (unsigned int)cutoffCount;
- (unsigned int)cutoffTimeSecs;
- (id)dictionary;
- (id)feedID;
- (id)groupName;
- (id)groupTitleColor;
- (id)initWithDictionary:(id)arg1;
- (id)sectionID;
- (void)setCutoffCount:(unsigned int)arg1;
- (void)setCutoffTimeSecs:(unsigned int)arg1;
- (void)setDictionary:(id)arg1;
- (void)setGroupTitleColor:(id)arg1;

@end
