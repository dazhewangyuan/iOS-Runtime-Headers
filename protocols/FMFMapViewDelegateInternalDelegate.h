/* Generated by RuntimeBrowser.
 */

@protocol FMFMapViewDelegateInternalDelegate <NSObject>

@required

- (UIColor *)_internalAnnotationTintColor;
- (BOOL)alwaysShowAccuracy;
- (UIImage *)annotationImageForAnnotation:(FMFLocation *)arg1 andHandle:(FMFHandle *)arg2;
- (BOOL)canSelectAnnotation:(id <MKAnnotation>)arg1;
- (void)didDeselectLocation:(FMFLocation *)arg1;
- (void)didSelectLocation:(FMFLocation *)arg1;
- (void)didUpdateUserLocation:(MKUserLocation *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)mapViewDidFinishRenderingMap;
- (void)reZoomToFit;
- (void)regionDidChangeAnimated:(BOOL)arg1;
- (void)regionWillChangeAnimated:(BOOL)arg1;
- (void)setShouldZoomToFitNewLocations:(BOOL)arg1;
- (BOOL)shouldZoomToFitMeAndLocations;
- (BOOL)viewWillAppearCalled;

@end
