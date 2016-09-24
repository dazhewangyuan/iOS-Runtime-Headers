/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerBrowserViewLayoutSpec : NSObject {
    int  _interfaceOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    double  _minimumInteritemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
    int  _stickerSize;
}

@property (nonatomic, readonly) int interfaceOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, readonly) double minimumInteritemSpacing;
@property (nonatomic, readonly) double minimumLineSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic, readonly) int stickerSize;

+ (id)specWithSizeClass:(int)arg1 interfaceOrientation:(int)arg2;

- (id)initWithSize:(int)arg1 interfaceOrientation:(int)arg2;
- (int)interfaceOrientation;
- (struct CGSize { double x1; double x2; })itemSize;
- (float)minimumInteritemSpacing;
- (float)minimumLineSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (int)stickerSize;

@end
