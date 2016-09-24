/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportHeadline : PBCodable <NSCopying> {
    NSString * _articleID;
    NSString * _clusterID;
    struct { 
        unsigned int tileProminenceScore : 1; 
        unsigned int surfacedByBinIDRef : 1; 
        unsigned int surfacedByChannelIDRef : 1; 
        unsigned int surfacedBySectionIDRef : 1; 
        unsigned int surfacedByTopicIDRef : 1; 
        unsigned int isTopStory : 1; 
        unsigned int usesImageOnTopLayout : 1; 
    }  _has;
    BOOL  _isTopStory;
    int  _surfacedByBinIDRef;
    int  _surfacedByChannelIDRef;
    int  _surfacedBySectionIDRef;
    int  _surfacedByTopicIDRef;
    double  _tileProminenceScore;
    BOOL  _usesImageOnTopLayout;
}

@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, retain) NSString *clusterID;
@property (nonatomic, readonly) BOOL hasArticleID;
@property (nonatomic, readonly) BOOL hasClusterID;
@property (nonatomic) BOOL hasIsTopStory;
@property (nonatomic) BOOL hasSurfacedByBinIDRef;
@property (nonatomic) BOOL hasSurfacedByChannelIDRef;
@property (nonatomic) BOOL hasSurfacedBySectionIDRef;
@property (nonatomic) BOOL hasSurfacedByTopicIDRef;
@property (nonatomic) BOOL hasTileProminenceScore;
@property (nonatomic) BOOL hasUsesImageOnTopLayout;
@property (nonatomic) BOOL isTopStory;
@property (nonatomic) int surfacedByBinIDRef;
@property (nonatomic) int surfacedByChannelIDRef;
@property (nonatomic) int surfacedBySectionIDRef;
@property (nonatomic) int surfacedByTopicIDRef;
@property (nonatomic) double tileProminenceScore;
@property (nonatomic) BOOL usesImageOnTopLayout;

- (id)articleID;
- (id)clusterID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArticleID;
- (BOOL)hasClusterID;
- (BOOL)hasIsTopStory;
- (BOOL)hasSurfacedByBinIDRef;
- (BOOL)hasSurfacedByChannelIDRef;
- (BOOL)hasSurfacedBySectionIDRef;
- (BOOL)hasSurfacedByTopicIDRef;
- (BOOL)hasTileProminenceScore;
- (BOOL)hasUsesImageOnTopLayout;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTopStory;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setHasIsTopStory:(BOOL)arg1;
- (void)setHasSurfacedByBinIDRef:(BOOL)arg1;
- (void)setHasSurfacedByChannelIDRef:(BOOL)arg1;
- (void)setHasSurfacedBySectionIDRef:(BOOL)arg1;
- (void)setHasSurfacedByTopicIDRef:(BOOL)arg1;
- (void)setHasTileProminenceScore:(BOOL)arg1;
- (void)setHasUsesImageOnTopLayout:(BOOL)arg1;
- (void)setIsTopStory:(BOOL)arg1;
- (void)setSurfacedByBinIDRef:(int)arg1;
- (void)setSurfacedByChannelIDRef:(int)arg1;
- (void)setSurfacedBySectionIDRef:(int)arg1;
- (void)setSurfacedByTopicIDRef:(int)arg1;
- (void)setTileProminenceScore:(double)arg1;
- (void)setUsesImageOnTopLayout:(BOOL)arg1;
- (int)surfacedByBinIDRef;
- (int)surfacedByChannelIDRef;
- (int)surfacedBySectionIDRef;
- (int)surfacedByTopicIDRef;
- (double)tileProminenceScore;
- (BOOL)usesImageOnTopLayout;
- (void)writeTo:(id)arg1;

@end
