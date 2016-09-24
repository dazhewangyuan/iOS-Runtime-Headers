/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInvisibleInkEffectCoverageTracker : NSObject {
    double  _cellHeight;
    double  _cellWidth;
    <CKInvisibleInkEffectCoverageTrackerDelegate> * _delegate;
    double * _expiryTimes;
    unsigned long  _height;
    NSTimer * _recoverTimer;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _touchLifetime;
    BOOL  _uncovered;
    unsigned long  _width;
}

@property (nonatomic) <CKInvisibleInkEffectCoverageTrackerDelegate> *delegate;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double touchLifetime;

- (void).cxx_destruct;
- (void)_checkForCover:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 touchLifetime:(double)arg2;
- (void)recordTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)touchLifetime;

@end
