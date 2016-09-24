/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout {
    double  mEndClipT;
    double  mStartClipT;
}

- (struct CGPoint { double x1; double x2; })controlPointForPointA:(struct CGPoint { double x1; double x2; })arg1 pointB:(struct CGPoint { double x1; double x2; })arg2 andOriginalA:(struct CGPoint { double x1; double x2; })arg3 originalB:(struct CGPoint { double x1; double x2; })arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned int)arg1;
- (id)quadraticCurve:(struct CGPoint { double x1; double x2; })arg1;

@end
