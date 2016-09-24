/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaInfo : TSDStyledInfo {
    struct { 
        unsigned int isPlaceholder : 1; 
        unsigned int wasMediaReplaced : 1; 
    }  mFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  mOriginalSize;
}

@property (nonatomic, readonly) BOOL canResetMediaSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultOriginalSize;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic, readonly) TSPData *mediaDataForDragging;
@property (nonatomic, readonly) NSString *mediaDisplayName;
@property (nonatomic, readonly) NSString *mediaFileType;
@property (nonatomic) struct CGSize { double x1; double x2; } originalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } rawDataSize;
@property (nonatomic) BOOL wasMediaReplaced;

- (BOOL)canResetMediaSize;
- (struct CGPoint { double x1; double x2; })centerForReplacingWithNewMedia;
- (id)copyWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultOriginalSize;
- (unsigned int)flags;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (BOOL)isPlaceholder;
- (id)mediaDataForDragging;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)propertyNameForFlagsCommand;
- (id)propertyNameForOriginalSizeCommand;
- (struct CGSize { double x1; double x2; })rawDataSize;
- (struct CGSize { double x1; double x2; })rawOriginalSize;
- (void)setFlags:(unsigned int)arg1;
- (void)setFlagsWithPlaceholder:(BOOL)arg1 wasMediaReplaced:(BOOL)arg2;
- (void)setGeometry:(id)arg1;
- (void)setIsPlaceholder:(BOOL)arg1;
- (void)setOriginalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWasMediaReplaced:(BOOL)arg1;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (BOOL)wasMediaReplaced;

@end
