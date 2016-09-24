/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAchievementState : NSObject {
    NSCalendar * _calendar;
    int  _consecutiveGoalsMet;
    int  _firstCheckedActivitySummaryIndex;
    int  _lastCheckedActivitySummaryIndex;
    NSDate * _lastPerfectWeekDate;
    int  _lastResetSummaryIndexForStreaks;
    NSDate * _now;
    NSDate * _startOfToday;
    NSDate * _startOfYesterday;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) int consecutiveGoalsMet;
@property (nonatomic) int firstCheckedActivitySummaryIndex;
@property (nonatomic) int lastCheckedActivitySummaryIndex;
@property (nonatomic, retain) NSDate *lastPerfectWeekDate;
@property (nonatomic) int lastResetSummaryIndexForStreaks;
@property (nonatomic, readonly) NSDate *now;
@property (nonatomic, readonly) NSDate *startOfToday;
@property (nonatomic, readonly) NSDate *startOfYesterday;

- (void).cxx_destruct;
- (id)calendar;
- (int)consecutiveGoalsMet;
- (int)firstCheckedActivitySummaryIndex;
- (id)initWithCalendar:(id)arg1 now:(id)arg2;
- (int)lastCheckedActivitySummaryIndex;
- (id)lastPerfectWeekDate;
- (int)lastResetSummaryIndexForStreaks;
- (id)now;
- (void)setConsecutiveGoalsMet:(int)arg1;
- (void)setFirstCheckedActivitySummaryIndex:(int)arg1;
- (void)setLastCheckedActivitySummaryIndex:(int)arg1;
- (void)setLastPerfectWeekDate:(id)arg1;
- (void)setLastResetSummaryIndexForStreaks:(int)arg1;
- (id)startOfToday;
- (id)startOfYesterday;

@end
