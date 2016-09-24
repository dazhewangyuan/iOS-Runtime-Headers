/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLargeImageLoader : NSObject <PLPreheatItemSource> {
    int  _format;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int format;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)format;
- (id)initWithFormat:(int)arg1;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg2 options:(unsigned int)arg3;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 options:(unsigned int)arg4;
- (void)setFormat:(int)arg1;

@end
