/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReviewAsset : NSObject <PUCAMReviewAsset, PUEditableAsset> {
    BOOL  _HDR;
    PFAssetAdjustments * _assetAdjustments;
    NSString * _burstIdentifier;
    BOOL  _canPlayPhotoIris;
    NSDate * _creationDate;
    double  _duration;
    NSString * _identifier;
    BOOL  _livePhoto;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _livePhotoDuration;
    BOOL  _livePhotoPlaceholder;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _livePhotoSynchronizedDisplayTime;
    CLLocation * _location;
    unsigned int  _mediaSubtypes;
    unsigned int  _mediaType;
    NSDate * _modificationDate;
    unsigned int  _numberOfRepresentedAssets;
    unsigned int  _pixelHeight;
    unsigned int  _pixelWidth;
    NSURL * _providedFullsizeImageURL;
    NSURL * _providedFullsizeRenderImageURL;
    NSURL * _providedFullsizeRenderVideoURL;
    NSDictionary * _providedImageMetadata;
    UIImage * _providedPreviewImage;
    NSURL * _providedVideoURL;
    BOOL  _representsBurst;
}

@property (getter=isHDR, nonatomic, readonly) BOOL HDR;
@property (getter=isAdjusted, nonatomic, readonly) BOOL adjusted;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) PFAssetAdjustments *assetAdjustments;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) BOOL canPlayPhotoIris;
@property (getter=isContentAdjustmentAllowed, nonatomic, readonly) BOOL contentAdjustmentAllowed;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) BOOL favorite;
@property (nonatomic, readonly) unsigned int fullsizeDataFormat;
@property (nonatomic, readonly) BOOL hasPhotoColorAdjustments;
@property (readonly) unsigned int hash;
@property (getter=isHighFramerateVideo, nonatomic, readonly) BOOL highFramerateVideo;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *imageProperties;
@property (getter=isInPlaceVideoTrimAllowed, nonatomic, readonly) BOOL inPlaceVideoTrimAllowed;
@property (nonatomic, readonly) BOOL isPhotoIrisPlaceholder;
@property (nonatomic, readonly) BOOL isTemporaryPlaceholder;
@property (getter=isLivePhoto, nonatomic, readonly) BOOL livePhoto;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } livePhotoDuration;
@property (getter=isLivePhotoPlaceholder, nonatomic, readonly) BOOL livePhotoPlaceholder;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } livePhotoSynchronizedDisplayTime;
@property (getter=isLivePhotoVisibilityAdjustmentAllowed, nonatomic, readonly) BOOL livePhotoVisibilityAdjustmentAllowed;
@property (nonatomic, readonly) unsigned int livePhotoVisibilityState;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned int mediaSubtypes;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned int numberOfRepresentedAssets;
@property (nonatomic, readonly) int originalEXIFOrientation;
@property (nonatomic, readonly, copy) NSString *pathForOriginalImageFile;
@property (nonatomic, readonly, copy) NSString *pathForOriginalVideoFile;
@property (nonatomic, readonly, copy) NSString *pathForTrimmedVideoFile;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned int pixelHeight;
@property (nonatomic, readonly) unsigned int pixelWidth;
@property (nonatomic, readonly) AVAsset *providedAVAsset;
@property (nonatomic, readonly) AVAudioMix *providedAudioMix;
@property (nonatomic, readonly) NSURL *providedFullsizeImageURL;
@property (nonatomic, readonly) NSURL *providedFullsizeRenderImageURL;
@property (nonatomic, readonly) NSURL *providedFullsizeRenderVideoURL;
@property (nonatomic, readonly) NSDictionary *providedImageMetadata;
@property (nonatomic, readonly) PHLivePhoto *providedLivePhoto;
@property (nonatomic, readonly) UIImage *providedPreviewImage;
@property (nonatomic, readonly) NSURL *providedVideoURL;
@property (nonatomic, readonly) BOOL representsBurst;
@property (getter=isResourceDownloadPossible, nonatomic, readonly) BOOL resourceDownloadPossible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) PFVideoAVObjectBuilder *videoObjectBuilder;

+ (id)createUniqueMediaDirectoryForAssetWithIdentifier:(id)arg1;
+ (id)fileURLForAdjustmentsInDirectory:(id)arg1;
+ (id)fileURLForFullsizeImageInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeRenderImageInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeRenderVideoComplementInDirectory:(id)arg1;
+ (id)fileURLForFullsizeRenderVideoInDirectory:(id)arg1;
+ (id)fileURLForFullsizeVideoComplementInDirectory:(id)arg1;
+ (id)fileURLForFullsizeVideoInDirectory:(id)arg1 extension:(id)arg2;

- (void).cxx_destruct;
- (id)_ensureLinkDestinationDirectoryFromBaseDirectory:(id)arg1;
- (BOOL)_linkFileAtURL:(id)arg1 toURL:(id)arg2;
- (void)_removeFileAtURL:(id)arg1;
- (id)_uniqueDestinationURLForFileURL:(id)arg1 inDirectory:(id)arg2;
- (double)aspectRatio;
- (id)assetAdjustments;
- (id)burstIdentifier;
- (BOOL)canPlayPhotoIris;
- (void)cancelContentEditingInputRequest:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)duration;
- (int)exifOrientationForImageVersion:(int)arg1;
- (unsigned int)fullsizeDataFormat;
- (BOOL)hasPhotoColorAdjustments;
- (id)identifier;
- (id)imageProperties;
- (id)initWithAVAsset:(id)arg1 audioMix:(id)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 captureDate:(id)arg5 duration:(double)arg6 previewImage:(id)arg7 videoURL:(id)arg8 adjustments:(id)arg9 identifier:(id)arg10;
- (id)initWithConformingAsset:(id)arg1;
- (id)initWithLivePhoto:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 captureDate:(id)arg4 metadata:(id)arg5 duration:(double)arg6 previewImage:(id)arg7 identifier:(id)arg8;
- (id)initWithPhoto:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 captureDate:(id)arg4 metadata:(id)arg5 burstIdentifier:(id)arg6 representedCount:(unsigned int)arg7 fullsizeImageURL:(id)arg8 identifier:(id)arg9;
- (id)initWithReviewAsset:(id)arg1;
- (id)initWithReviewAsset:(id)arg1 baseImageURL:(id)arg2 renderedImageURL:(id)arg3 baseVideoURL:(id)arg4 renderedVideoURL:(id)arg5 pixelWidth:(unsigned int)arg6 pixelHeight:(unsigned int)arg7 assetAdjustments:(id)arg8 duration:(double)arg9;
- (id)initWithReviewAsset:(id)arg1 baseImageURL:(id)arg2 renderedImageURL:(id)arg3 baseVideoURL:(id)arg4 renderedVideoURL:(id)arg5 previewImage:(id)arg6 pixelWidth:(unsigned int)arg7 pixelHeight:(unsigned int)arg8 assetAdjustments:(id)arg9 duration:(double)arg10;
- (id)initWithReviewAsset:(id)arg1 linkFileURLsToUniquePathsInDirectory:(id)arg2;
- (id)initWithReviewAsset:(id)arg1 linkFileURLsToUniquePathsInDirectory:(id)arg2 canPlayPhotoIris:(BOOL)arg3;
- (id)initWithReviewAsset:(id)arg1 primaryResourceURL:(id)arg2;
- (BOOL)isAdjusted;
- (BOOL)isContentAdjustmentAllowed;
- (unsigned int)isContentEqualTo:(id)arg1;
- (BOOL)isFavorite;
- (BOOL)isHDR;
- (BOOL)isHighFramerateVideo;
- (BOOL)isInPlaceVideoTrimAllowed;
- (BOOL)isLivePhoto;
- (BOOL)isLivePhotoPlaceholder;
- (BOOL)isLivePhotoVisibilityAdjustmentAllowed;
- (BOOL)isPhotoIrisPlaceholder;
- (BOOL)isResourceDownloadPossible;
- (BOOL)isTemporaryPlaceholder;
- (struct { int x1; int x2; unsigned int x3; int x4; })livePhotoDuration;
- (struct { int x1; int x2; unsigned int x3; int x4; })livePhotoSynchronizedDisplayTime;
- (unsigned int)livePhotoVisibilityState;
- (id)localizedGeoDescription;
- (id)location;
- (unsigned int)mediaSubtypes;
- (unsigned int)mediaType;
- (id)modificationDate;
- (unsigned int)numberOfRepresentedAssets;
- (int)originalEXIFOrientation;
- (id)pathForOriginalImageFile;
- (id)pathForOriginalVideoFile;
- (id)pathForTrimmedVideoFile;
- (struct { int x1; int x2; unsigned int x3; int x4; })photoIrisStillDisplayTime;
- (struct { int x1; int x2; unsigned int x3; int x4; })photoIrisVideoDuration;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (id)providedFullsizeImageURL;
- (id)providedFullsizeRenderImageURL;
- (id)providedFullsizeRenderVideoURL;
- (id)providedImageMetadata;
- (id)providedImageURLForImageVersion:(int)arg1;
- (id)providedPreviewImage;
- (id)providedVideoURL;
- (id)providedVideoURLForImageVersion:(int)arg1;
- (id)providedVideoURLForVideoVersion:(int)arg1;
- (void)removeAllFilesAtReferencedURLs;
- (BOOL)representsBurst;
- (unsigned int)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;
- (id)videoObjectBuilder;

@end
