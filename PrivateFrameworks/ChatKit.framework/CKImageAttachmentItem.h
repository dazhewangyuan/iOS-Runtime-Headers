/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageAttachmentItem : CKAttachmentItem {
    BOOL  _backgroundEnqueued;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    BOOL  _useDefaultSize;
}

@property (nonatomic) BOOL backgroundEnqueued;
@property struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSString *transferGUID;
@property (nonatomic) BOOL useDefaultSize;

+ (id)UTITypes;

- (struct CGSize { double x1; double x2; })_calculateImageSize;
- (id)_newImageData;
- (BOOL)backgroundEnqueued;
- (void)generatePreviewWithCompletion:(id /* block */)arg1;
- (id)imageData;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setBackgroundEnqueued:(BOOL)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseDefaultSize:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)startDeferredSetup;
- (BOOL)useDefaultSize;

@end
