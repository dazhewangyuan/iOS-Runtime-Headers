/* Generated by RuntimeBrowser.
 */

@protocol PUDisplayAsset <NSObject, NSCopying>

@required

- (double)aspectRatio;
- (BOOL)canPlayPhotoIris;
- (NSDate *)creationDate;
- (double)duration;
- (unsigned int)fullsizeDataFormat;
- (BOOL)hasPhotoColorAdjustments;
- (unsigned int)isContentEqualTo:(id <PUDisplayAsset>)arg1;
- (BOOL)isFavorite;
- (BOOL)isPhotoIrisPlaceholder;
- (BOOL)isTemporaryPlaceholder;
- (NSString *)localizedGeoDescription;
- (CLLocation *)location;
- (unsigned int)mediaType;
- (NSDate *)modificationDate;
- (struct { int x1; int x2; unsigned int x3; int x4; })photoIrisStillDisplayTime;
- (struct { int x1; int x2; unsigned int x3; int x4; })photoIrisVideoDuration;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (NSString *)uuid;

@end
