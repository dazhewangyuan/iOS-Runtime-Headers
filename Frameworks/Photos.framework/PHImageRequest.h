/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequest : PHImageManagerRequest {
    int  _bestFormat;
    int  _contentMode;
    int  _degradedFormat;
    PHImageRequestOptions * _options;
    id /* block */  _resultHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property int bestFormat;
@property (nonatomic, readonly) int contentMode;
@property int degradedFormat;
@property (nonatomic, readonly) PHImageRequestOptions *options;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

+ (id)descriptionWithContentMode:(int)arg1;
+ (id)imageRequestWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(int)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (int)bestFormat;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (int)contentMode;
- (int)degradedFormat;
- (id)description;
- (id)initImageRequestWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(int)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(id /* block */)arg6;
- (id)options;
- (id /* block */)resultHandler;
- (void)setBestFormat:(int)arg1;
- (void)setDegradedFormat:(int)arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end
