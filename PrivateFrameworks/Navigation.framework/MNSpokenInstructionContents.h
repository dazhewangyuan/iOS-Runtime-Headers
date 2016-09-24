/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSpokenInstructionContents : MNListInstructionContents <MNInstructionContents> {
    <GEOServerFormattedString> * _continueInstructionFormat;
    NSArray * _executionInstructionFormats;
    <GEOServerFormattedString> * _initialInstructionFormat;
    BOOL  _isSecondary;
    struct { 
        int context; 
        double distance; 
        BOOL usePrimaryName; 
        BOOL useSecondaryName; 
        BOOL useDistanceForSecondary; 
        BOOL useContinueForSecondary; 
        int numPrimarySigns; 
        int numSecondarySigns; 
    }  _options;
    <GEOServerFormattedString> * _prepareInstructionFormat;
    <GEOServerFormattedString> * _proceedInstructionFormat;
}

@property (nonatomic) int context;
@property (nonatomic, retain) <GEOServerFormattedString> *continueInstructionFormat;
@property (nonatomic, retain) NSArray *executionInstructionFormats;
@property (nonatomic, readonly) BOOL hasServerContent;
@property (nonatomic, retain) <GEOServerFormattedString> *initialInstructionFormat;
@property (nonatomic, readonly) int numSignsWanted;
@property (nonatomic, retain) <GEOServerFormattedString> *prepareInstructionFormat;
@property (nonatomic, retain) <GEOServerFormattedString> *proceedInstructionFormat;
@property (nonatomic, retain) NSString *roadName;
@property (nonatomic) BOOL suppressFallback;
@property (nonatomic) BOOL suppressNames;

+ (id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2 context:(int)arg3;
+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 context:(int)arg3 isSecondary:(BOOL)arg4;
+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 options:(struct { int x1; double x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; int x7; int x8; }*)arg4 isSecondary:(BOOL)arg5;
+ (id)contentsWithSubstep:(id)arg1 transportType:(int)arg2 context:(int)arg3;

- (void).cxx_destruct;
- (id)_exitNumberFromNameInfo:(id)arg1;
- (id)_instructionsForFormats:(id)arg1 distance:(double)arg2;
- (void)_populateFromStep:(id)arg1;
- (id)_spokenInstructionForArrival;
- (id)_spokenInstructionForBranch;
- (id)_spokenInstructionForChangeHighways;
- (id)_spokenInstructionForContinue;
- (id)_spokenInstructionForExit;
- (id)_spokenInstructionForFerry;
- (id)_spokenInstructionForRoundabout;
- (id)_spokenInstructionForStart;
- (id)_spokenInstructionForTurn;
- (id)_spokenInstructionForUTurn;
- (id)_spokenInstructionFromSignposts;
- (id)_spokenWalkingInstructionForContinue;
- (id)_spokenWalkingInstructionForRoundabout;
- (id)_spokenWalkingInstructionForStart;
- (id)_spokenWalkingInstructionForTurn;
- (id)_spokenWalkingInstructionForUTurn;
- (id)_stringFromNameInfo:(id)arg1;
- (int)context;
- (id)continueInstructionFormat;
- (id)description;
- (id)executionInstructionFormats;
- (BOOL)hasServerContent;
- (id)init;
- (id)initialInstructionFormat;
- (id)instructionForStage:(unsigned int)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives:(id*)arg1;
- (int)numSignsWanted;
- (id)prepareInstructionFormat;
- (id)proceedInstructionFormat;
- (void)setContext:(int)arg1;
- (void)setContinueInstructionFormat:(id)arg1;
- (void)setExecutionInstructionFormats:(id)arg1;
- (void)setInitialInstructionFormat:(id)arg1;
- (void)setPrepareInstructionFormat:(id)arg1;
- (void)setProceedInstructionFormat:(id)arg1;
- (BOOL)useDestinationName;
- (BOOL)useIntersectionName;
- (BOOL)useRoadName;
- (BOOL)useTowardNames;

@end
