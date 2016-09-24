/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceCoreDetector : CIDetector {
    bool  _tracking;
    CIContext * context;
    FCRFaceDetector * faceCoreDetector;
    NSMutableDictionary * featureOptions;
}

@property (nonatomic, retain) CIContext *context;
@property (retain) FCRFaceDetector *faceCoreDetector;

- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3;
- (id)context;
- (id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned int*)arg2 height:(unsigned int*)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })ctmForImageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(int)arg2;
- (void)dealloc;
- (id)faceCoreDetector;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setFaceCoreDetector:(id)arg1;

@end
