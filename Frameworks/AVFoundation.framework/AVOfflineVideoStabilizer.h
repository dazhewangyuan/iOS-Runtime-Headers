/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOfflineVideoStabilizer : NSObject {
    struct opaqueCMFormatDescription { } * _cachedVideoFormatDescription;
    BOOL  _clientMarkedEndOfMetadata;
    BOOL  _clientMarkedEndOfVideoData;
    AVWeakReference * _dataProviderWeakReference;
    NSMutableArray * _futureFrameMetadataDicts;
    struct OpaqueFigSampleBufferProcessor { } * _gvsProcessor;
    int  _metadataOutputFrameNumber;
    int  _metadataPrimingCount;
    NSSet * _optionalMetadataKeys;
    NSMutableArray * _outputSampleBuffers;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    NSSet * _requiredMetadataKeys;
    BOOL  _stabilizationEnabled;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _targetFrameDuration;
    int  _videoOutputFrameNumber;
}

@property (nonatomic, readonly) NSMutableArray *outputSampleBuffers;
@property (nonatomic, readonly) int preferredSourcePixelBufferPrimingFrameCount;
@property (nonatomic, readonly) int preferredSourceStabilizationMetadataPrimingCount;

+ (void)initialize;
+ (id)offlineVideoStabilizerWithTargetFrameDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool { }*)arg3 stabilizationEnabled:(BOOL)arg4;

- (struct opaqueCMSampleBuffer { }*)_copyStabilizedSampleBuffer:(id*)arg1;
- (struct opaqueCMSampleBuffer { }*)_createSampleBufferWithPixelBuffer:(struct __CVBuffer { }*)arg1 sampleTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 futureMetadata:(id)arg3 status:(int*)arg4;
- (long)_setupGVSProcessorWithMetadataArray:(id)arg1;
- (void)_teardownVISProcessor;
- (long)_validateSourcePixelBuffer:(struct __CVBuffer { }*)arg1 withSampleTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 metadata:(id)arg3 isEndOfData:(BOOL*)arg4;
- (long)_validateStabilizationMetadata:(id)arg1 withSampleTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg2 isEndOfData:(BOOL*)arg3;
- (struct opaqueCMSampleBuffer { }*)copyStabilizedSampleBuffer:(id*)arg1;
- (void)dealloc;
- (id)initWithTargetFrameDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool { }*)arg3 stabilizationEnabled:(BOOL)arg4;
- (id)outputSampleBuffers;
- (int)preferredSourcePixelBufferPrimingFrameCount;
- (int)preferredSourceStabilizationMetadataPrimingCount;

@end
