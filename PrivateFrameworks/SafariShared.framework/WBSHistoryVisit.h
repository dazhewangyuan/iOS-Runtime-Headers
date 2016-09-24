/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryVisit : NSObject {
    unsigned int  _attributes;
    int  _databaseID;
    int  _generation;
    BOOL  _httpNonGet;
    WBSHistoryItem * _item;
    BOOL  _loadSuccessful;
    int  _origin;
    WBSHistoryVisit * _redirectDestination;
    int  _redirectDestinationDatabaseID;
    WBSHistoryVisit * _redirectSource;
    int  _redirectSourceDatabaseID;
    unsigned int  _score;
    BOOL  _synthesized;
    NSString * _title;
    double  _visitTime;
}

@property (nonatomic) unsigned int attributes;
@property (nonatomic) int databaseID;
@property (nonatomic, readonly) WBSHistoryVisit *endOfRedirectChain;
@property (nonatomic) int generation;
@property (getter=wasHTTPNonGet, nonatomic, readonly) BOOL httpNonGet;
@property (nonatomic) WBSHistoryItem *item;
@property (getter=loadWasSuccessful, nonatomic) BOOL loadSuccessful;
@property (nonatomic) int origin;
@property (nonatomic, retain) WBSHistoryVisit *redirectDestination;
@property (nonatomic) int redirectDestinationDatabaseID;
@property (nonatomic, retain) WBSHistoryVisit *redirectSource;
@property (nonatomic, readonly) unsigned int redirectSourceChainLength;
@property (nonatomic) int redirectSourceDatabaseID;
@property (nonatomic) unsigned int score;
@property (getter=isSynthesized, nonatomic, readonly) BOOL synthesized;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) double visitTime;

+ (unsigned int)scoreForWeightedVisitCount:(float)arg1;
+ (id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2;
+ (float)weightedVisitCountFromScore:(unsigned int)arg1;

- (void).cxx_destruct;
- (double)_weight;
- (unsigned int)attributes;
- (int)databaseID;
- (id)endOfRedirectChain;
- (int)generation;
- (BOOL)hasAttributes:(unsigned int)arg1;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(unsigned int)arg3;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(BOOL)arg3 wasHTTPNonGet:(BOOL)arg4 origin:(int)arg5 attributes:(unsigned int)arg6;
- (BOOL)isSynthesized;
- (id)item;
- (BOOL)loadWasSuccessful;
- (int)origin;
- (void)recomputeScore;
- (id)redirectDestination;
- (int)redirectDestinationDatabaseID;
- (id)redirectSource;
- (unsigned int)redirectSourceChainLength;
- (int)redirectSourceDatabaseID;
- (unsigned int)score;
- (void)setAttributes:(unsigned int)arg1;
- (void)setDatabaseID:(int)arg1;
- (void)setGeneration:(int)arg1;
- (void)setItem:(id)arg1;
- (void)setLoadSuccessful:(BOOL)arg1;
- (void)setOrigin:(int)arg1;
- (void)setRedirectDestination:(id)arg1;
- (void)setRedirectDestinationDatabaseID:(int)arg1;
- (void)setRedirectSource:(id)arg1;
- (void)setRedirectSourceDatabaseID:(int)arg1;
- (void)setScore:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (double)visitTime;
- (BOOL)wasHTTPNonGet;

@end
