/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateCircularSmallRingImage : CLKComplicationTemplate {
    double  _fillFraction;
    CLKImageProvider * _imageProvider;
    int  _ringStyle;
}

@property (nonatomic) double fillFraction;
@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic) int ringStyle;

+ (struct CGSize { double x1; double x2; })_imageSize;

- (void).cxx_destruct;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (float)fillFraction;
- (id)imageProvider;
- (BOOL)isCompatibleWithFamily:(int)arg1;
- (int)ringStyle;
- (void)setFillFraction:(float)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setRingStyle:(int)arg1;

@end
