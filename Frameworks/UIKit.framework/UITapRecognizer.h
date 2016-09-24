/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITapRecognizer : NSObject <NSCoding> {
    NSMutableSet * _activeTouches;
    double  _allowableMovement;
    double  _allowableSeparation;
    double  _allowableTouchTimeSeparation;
    int  _currentNumberOfTaps;
    int  _currentNumberOfTouches;
    <UITapRecognizerDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    int  _exclusiveDirectionalAxis;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _maximumIntervalBetweenSuccessiveTaps;
    double  _maximumSingleTapDuration;
    double  _maximumTapDuration;
    unsigned int  _multitouchTimerOn;
    unsigned int  _noNewTouches;
    unsigned int  _numberOfTapsRequired;
    int  _numberOfTouchesForCurrentTap;
    unsigned int  _numberOfTouchesRequired;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    int  _strongestDirectionalAxis;
    double  _strongestDirectionalForce;
    unsigned int  _timerOn;
    NSMutableArray * _touches;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic) double allowableSeparation;
@property (nonatomic) double allowableTouchTimeSeparation;
@property (nonatomic) <UITapRecognizerDelegate> *delegate;
@property (nonatomic) int exclusiveDirectionalAxis;
@property (nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property (nonatomic) double maximumSingleTapDuration;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) unsigned int numberOfTapsRequired;
@property (nonatomic) unsigned int numberOfTouchesRequired;
@property (nonatomic, readonly) NSArray *touches;

- (void).cxx_destruct;
- (void)_beginInteraction;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (float)_effectiveAllowableMovement;
- (void)_interactionEndedTouch:(BOOL)arg1;
- (struct CGPoint { double x1; double x2; })_locationInSceneReferenceSpace;
- (void)_reset;
- (void)_updateDigitizerLocationForEvent:(id)arg1;
- (BOOL)activeTouchesExceedAllowableSeparation;
- (float)allowableMovement;
- (float)allowableSeparation;
- (double)allowableTouchTimeSeparation;
- (void)clearMultitouchTimer;
- (void)clearTapTimer;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (int)exclusiveDirectionalAxis;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (double)maximumSingleTapDuration;
- (double)maximumTapDuration;
- (void)multitouchExpired:(id)arg1;
- (unsigned int)numberOfTapsRequired;
- (unsigned int)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(float)arg1;
- (void)setAllowableSeparation:(float)arg1;
- (void)setAllowableTouchTimeSeparation:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExclusiveDirectionalAxis:(int)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setMaximumTapDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
