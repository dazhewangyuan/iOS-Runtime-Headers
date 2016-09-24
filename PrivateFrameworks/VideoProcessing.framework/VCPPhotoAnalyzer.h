/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPhotoAnalyzer : NSObject {
    NSMutableDictionary * _analysis;
    NSDictionary * _exif;
    NSData * _featureData;
    struct __CVBuffer { } * _image;
    struct __CVBuffer { } * _imageLowRes;
    unsigned int  _irisAnalyses;
    AVAsset * _irisAsset;
    double  _irisPhotoExposureSec;
    double  _irisPhotoOffsetSec;
    BOOL  _isPano;
    unsigned int  _phFaceFlags;
    NSDictionary * _phFaceResults;
    unsigned int  _requestedAnalyses;
    NSMutableDictionary * _results;
    int  _status;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (readonly) int status;

+ (BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)resourceForAsset:(id)arg1 withResources:(id)arg2;

- (void).cxx_destruct;
- (id)analyzeAsset:(id /* block */)arg1;
- (long)analyzeImage:(unsigned int*)arg1 performedAnalyses:(unsigned int*)arg2 objectRect:(id)arg3 cancel:(id /* block */)arg4;
- (void)dealloc;
- (long)downscaleImage:(struct __CVBuffer { }*)arg1 scaledImage:(struct __CVBuffer {}**)arg2 majorDimension:(int)arg3;
- (id)initWithImage:(struct __CVBuffer { }*)arg1 exif:(id)arg2 pairMovie:(id)arg3 forAnalysisTypes:(unsigned int)arg4;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned int)arg2;
- (int)status;

@end
