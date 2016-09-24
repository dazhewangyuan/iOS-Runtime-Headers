/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDTransition : OADProperties {
    NSNumber * duration;
    int  mAdvanceAfterTime;
    BOOL  mHasAdvanceAfterTime;
    BOOL  mHasAdvanceOnClick;
    BOOL  mHasSpeed;
    BOOL  mHasType;
    BOOL  mIsAdvanceOnClick;
    PDTransitionOptions * mOptions;
    int  mSpeed;
    int  mType;
}

@property (nonatomic, retain) NSNumber *duration;

- (int)advanceAfterTime;
- (void)dealloc;
- (id)description;
- (id)duration;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasSpeed;
- (BOOL)hasTransitionOptions;
- (BOOL)hasType;
- (id)init;
- (BOOL)isAdvanceOnClick;
- (id)options;
- (void)setAdvanceAfterTime:(int)arg1;
- (void)setDuration:(id)arg1;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (void)setOptions:(id)arg1;
- (void)setSpeed:(int)arg1;
- (void)setType:(int)arg1;
- (int)speed;
- (int)type;

@end
