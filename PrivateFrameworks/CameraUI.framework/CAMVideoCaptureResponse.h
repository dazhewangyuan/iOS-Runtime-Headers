/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {
    NSDate * _captureDate;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _duration;
    UIImage * _imageWellImage;
    NSURL * _localPersistenceURL;
    NSString * _persistenceUUID;
    UIImage * _previewImage;
    int  _reason;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _stillDisplayTime;
    NSString * _stillPersistenceUUID;
    double  _videoZoomFactor;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) NSDate *captureDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) BOOL expectingPairedVideo;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly, copy) NSURL *localPersistenceURL;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) unsigned int numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) int reason;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) struct { int x1; int x2; unsigned int x3; int x4; } stillDisplayTime;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (nonatomic, readonly, copy) NSString *stillPersistenceUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) double videoZoomFactor;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (id)captureDate;
- (id)description;
- (struct { int x1; int x2; unsigned int x3; int x4; })duration;
- (id)imageWellImage;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 captureDate:(id)arg4 duration:(struct { int x1; int x2; unsigned int x3; int x4; })arg5 stillPersistenceUUID:(id)arg6 stillDisplayTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg7 reason:(int)arg8 videoZoomFactor:(float)arg9 imageWellImage:(id)arg10 previewImage:(id)arg11;
- (struct { int x1; int x2; unsigned int x3; int x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (BOOL)isExpectingPairedVideo;
- (id)localPersistenceURL;
- (unsigned int)mediaType;
- (unsigned int)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)persistenceUUID;
- (id)placeholderImage;
- (id)previewImage;
- (int)reason;
- (struct { int x1; int x2; unsigned int x3; int x4; })stillDisplayTime;
- (id)stillImageMetadata;
- (id)stillPersistenceUUID;
- (id)uuid;
- (float)videoZoomFactor;

@end
