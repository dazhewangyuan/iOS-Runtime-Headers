/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODILinear : NSObject {
    double  mConnectorWidth;
    BOOL  mIsHorizontal;
    BOOL  mIsTextCenteredHorizontally;
    BOOL  mIsTextCenteredVertically;
    unsigned int  mMaxPointCount;
    double  mPadding;
    double  mPointHeight;
    ODIState * mState;
    BOOL  mStretch;
    BOOL  mWithConnectors;
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;
+ (void)mapUnknownWithState:(id)arg1;

- (id)initWithState:(id)arg1;
- (void)map;
- (void)mapPoint:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapStyleFromTransition:(id)arg1 shape:(id)arg2;
- (void)mapTransition:(id)arg1 pointBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)nextPointBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)setConnectorWidth:(float)arg1;
- (void)setIsHorizontal:(BOOL)arg1;
- (void)setIsTextCentered:(BOOL)arg1;
- (void)setIsTextCenteredHorizontally:(BOOL)arg1;
- (void)setIsTextCenteredVertically:(BOOL)arg1;
- (void)setLogicalBounds;
- (void)setMaxPointCount:(unsigned int)arg1;
- (void)setPadding:(float)arg1;
- (void)setPointHeight:(float)arg1;
- (void)setStretch:(BOOL)arg1;
- (void)setWithConnectors:(BOOL)arg1;

@end
