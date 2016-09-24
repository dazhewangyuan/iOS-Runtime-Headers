/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnail : NSObject {
    NSURL * _url;
}

@property (retain) NSURL *url;

+ (id)defaultDescriptors;
+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)imageForUseMode:(unsigned int)arg1 descriptor:(id)arg2 generateIfNeeded:(BOOL)arg3 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 error:(id*)arg5;
- (id)initWithURL:(id)arg1;
- (BOOL)provideImages:(id /* block */)arg1 error:(id*)arg2;
- (void)setUrl:(id)arg1;
- (id)thumbnailCreationOperationForUseMode:(unsigned int)arg1 descriptor:(id)arg2;
- (id)thumbnailCreationOperationForUseMode:(unsigned int)arg1 descriptor:(id)arg2 generateIfNeeded:(BOOL)arg3;
- (id)url;

@end
