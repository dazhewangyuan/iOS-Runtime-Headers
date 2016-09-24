/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWidgetConfig : PBCodable <NSCopying> {
    int  _backgroundMinimumUpdateInterval;
    unsigned int  _enabledSections;
    int  _forYouCutoffTime;
    int  _foregroundMinimumUpdateInterval;
    struct { 
        unsigned int backgroundMinimumUpdateInterval : 1; 
        unsigned int forYouCutoffTime : 1; 
        unsigned int foregroundMinimumUpdateInterval : 1; 
        unsigned int parsecPopulationCeiling : 1; 
        unsigned int parsecPopulationFloor : 1; 
        unsigned int topStoriesCutoffTime : 1; 
        unsigned int trendingCutoffTime : 1; 
        unsigned int enabledSections : 1; 
    }  _has;
    double  _parsecPopulationCeiling;
    double  _parsecPopulationFloor;
    int  _topStoriesCutoffTime;
    int  _trendingCutoffTime;
}

@property (nonatomic) int backgroundMinimumUpdateInterval;
@property (nonatomic) unsigned int enabledSections;
@property (nonatomic) int forYouCutoffTime;
@property (nonatomic) int foregroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasEnabledSections;
@property (nonatomic) BOOL hasForYouCutoffTime;
@property (nonatomic) BOOL hasForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasParsecPopulationCeiling;
@property (nonatomic) BOOL hasParsecPopulationFloor;
@property (nonatomic) BOOL hasTopStoriesCutoffTime;
@property (nonatomic) BOOL hasTrendingCutoffTime;
@property (nonatomic) double parsecPopulationCeiling;
@property (nonatomic) double parsecPopulationFloor;
@property (nonatomic) int topStoriesCutoffTime;
@property (nonatomic) int trendingCutoffTime;

- (int)backgroundMinimumUpdateInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enabledSections;
- (int)forYouCutoffTime;
- (int)foregroundMinimumUpdateInterval;
- (BOOL)hasBackgroundMinimumUpdateInterval;
- (BOOL)hasEnabledSections;
- (BOOL)hasForYouCutoffTime;
- (BOOL)hasForegroundMinimumUpdateInterval;
- (BOOL)hasParsecPopulationCeiling;
- (BOOL)hasParsecPopulationFloor;
- (BOOL)hasTopStoriesCutoffTime;
- (BOOL)hasTrendingCutoffTime;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (BOOL)readFrom:(id)arg1;
- (void)setBackgroundMinimumUpdateInterval:(int)arg1;
- (void)setEnabledSections:(unsigned int)arg1;
- (void)setForYouCutoffTime:(int)arg1;
- (void)setForegroundMinimumUpdateInterval:(int)arg1;
- (void)setHasBackgroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasEnabledSections:(BOOL)arg1;
- (void)setHasForYouCutoffTime:(BOOL)arg1;
- (void)setHasForegroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasParsecPopulationCeiling:(BOOL)arg1;
- (void)setHasParsecPopulationFloor:(BOOL)arg1;
- (void)setHasTopStoriesCutoffTime:(BOOL)arg1;
- (void)setHasTrendingCutoffTime:(BOOL)arg1;
- (void)setParsecPopulationCeiling:(double)arg1;
- (void)setParsecPopulationFloor:(double)arg1;
- (void)setTopStoriesCutoffTime:(int)arg1;
- (void)setTrendingCutoffTime:(int)arg1;
- (int)topStoriesCutoffTime;
- (int)trendingCutoffTime;
- (void)writeTo:(id)arg1;

@end
