/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetImageGenerator : NSObject {
    AVAssetImageGeneratorInternal * _priv;
}

@property (nonatomic, copy) NSString *apertureMode;
@property (nonatomic) BOOL appliesPreferredTrackTransform;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) <AVVideoCompositing> *customVideoCompositor;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } requestedTimeToleranceAfter;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } requestedTimeToleranceBefore;
@property (nonatomic, copy) AVVideoComposition *videoComposition;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)assetImageGeneratorWithAsset:(id)arg1;

- (id)_NSErrorForError:(long)arg1;
- (struct CGImage { }*)_copyCGImageAtTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 usingAssetReader:(id)arg2 error:(id*)arg3;
- (void)_didGenerateCGImage:(id)arg1;
- (BOOL)_ensureFigAssetImageGeneratorReturningError:(id*)arg1;
- (void)_failedToGenerateCGImage:(id)arg1;
- (id)_makeAutoreleasedAssetReader;
- (id)_optionsDictionary;
- (id)_requestWithRequestID:(id)arg1;
- (struct CGSize { double x1; double x2; })_scaledSizeForRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_serverDied;
- (id)_videoSettingWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)apertureMode;
- (BOOL)appliesPreferredTrackTransform;
- (id)asset;
- (void)cancelAllCGImageGeneration;
- (struct CGImage { }*)copyCGImageAtTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 actualTime:(struct { int x1; int x2; unsigned int x3; int x4; }*)arg2 error:(id*)arg3;
- (id)customVideoCompositor;
- (void)dealloc;
- (void)finalize;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct { int x1; int x2; unsigned int x3; int x4; })requestedTimeToleranceAfter;
- (struct { int x1; int x2; unsigned int x3; int x4; })requestedTimeToleranceBefore;
- (void)setApertureMode:(id)arg1;
- (void)setAppliesPreferredTrackTransform:(BOOL)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequestedTimeToleranceAfter:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setRequestedTimeToleranceBefore:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (void)is_generateCGImagesAsynchronouslyForTimes:(id)arg1 options:(int)arg2 completionHandler:(id /* block */)arg3;

@end
