/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstFaceScoreEntry : NSObject {
    double  maxScore;
    double  minScore;
    int  numScores;
    double  sumScores;
    double  sumSqScores;
}

@property double maxScore;
@property double minScore;
@property int numScores;

- (void)addScore:(float)arg1;
- (float)computeAverage;
- (float)computeStandardDeviation;
- (id)initWithScore:(float)arg1;
- (float)maxScore;
- (float)minScore;
- (int)numScores;
- (void)setMaxScore:(float)arg1;
- (void)setMinScore:(float)arg1;
- (void)setNumScores:(int)arg1;

@end
