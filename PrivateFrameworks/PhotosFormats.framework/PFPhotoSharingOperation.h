/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFPhotoSharingOperation : NSOperation {
    PFAssetAdjustments * __adjustments;
    NSString * _customAccessibilityLabel;
    NSObject<OS_dispatch_queue> * _externalIsolation;
    NSString * _generatedFileName;
    NSURL * _imageURL;
    BOOL  _operationComplete;
    NSError * _operationError;
    BOOL  _operationSuccess;
    NSURL * _outputDirectoryURL;
    BOOL  _shouldConvertToSRGB;
    BOOL  _shouldStripLocation;
    BOOL  _shouldStripMetadata;
}

@property (setter=_setAdjustments:, nonatomic, retain) PFAssetAdjustments *_adjustments;
@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, copy) NSString *generatedFileName;
@property (setter=_setImageURL:, nonatomic, copy) NSURL *imageURL;
@property (nonatomic, readonly) NSError *operationError;
@property (nonatomic, copy) NSURL *outputDirectoryURL;
@property (nonatomic, readonly) double progress;
@property (nonatomic) BOOL shouldConvertToSRGB;
@property (nonatomic) BOOL shouldStripLocation;
@property (nonatomic) BOOL shouldStripMetadata;
@property (nonatomic, readonly) BOOL success;

- (void).cxx_destruct;
- (id)_adjustments;
- (void)_setAdjustments:(id)arg1;
- (void)_setImageURL:(id)arg1;
- (id)customAccessibilityLabel;
- (id)generatedFileName;
- (id)imageURL;
- (id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2;
- (void)main;
- (id)operationError;
- (id)outputDirectoryURL;
- (float)progress;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setGeneratedFileName:(id)arg1;
- (void)setOutputDirectoryURL:(id)arg1;
- (void)setShouldConvertToSRGB:(BOOL)arg1;
- (void)setShouldStripLocation:(BOOL)arg1;
- (void)setShouldStripMetadata:(BOOL)arg1;
- (BOOL)shouldConvertToSRGB;
- (BOOL)shouldStripLocation;
- (BOOL)shouldStripMetadata;
- (BOOL)success;

@end
