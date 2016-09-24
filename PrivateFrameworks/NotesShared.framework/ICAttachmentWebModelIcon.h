/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentWebModelIcon : NSObject {
    struct UIImage { Class x1; } * _image;
    double  _scale;
    BOOL  _scaleImageToIconSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSURL * _url;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double scale;
@property (nonatomic) BOOL scaleImageToIconSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (struct UIImage { Class x1; }*)image;
- (id)initWithFallbackURL:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithImageURL:(id)arg1;
- (id)initWithURL:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (float)scale;
- (BOOL)scaleImageToIconSize;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setScale:(float)arg1;
- (void)setScaleImageToIconSize:(BOOL)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUrl:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)url;

@end
