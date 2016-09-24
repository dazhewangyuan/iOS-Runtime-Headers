/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAttachmentImageGenerator : UIView {
    NSString * _displayString;
    UIImage * _image;
    double  _maxImageHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _textSize;
}

+ (float)defaultHeight;
+ (id)imageForAttachment:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForAttachment:(id)arg1;
+ (id)pngDataForAttachment:(id)arg1;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (id)initWithAttachment:(id)arg1;

@end
