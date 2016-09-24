/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADDimmerView : UIView {
    <ADDimmerViewDelegate> * _delegate;
    BOOL  _dimmed;
    ADTapGestureRecognizer * _gestureRecognizer;
}

@property (nonatomic) <ADDimmerViewDelegate> *delegate;
@property (nonatomic) BOOL dimmed;
@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, retain) ADTapGestureRecognizer *gestureRecognizer;

- (void)_tapRecognized:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)dimmed;
- (BOOL)enabled;
- (id)gestureRecognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeADTapGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setGestureRecognizer:(id)arg1;

@end
