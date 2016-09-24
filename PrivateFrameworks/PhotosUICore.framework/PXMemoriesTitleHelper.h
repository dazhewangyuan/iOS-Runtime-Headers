/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesTitleHelper : NSObject {
    double  _minimumScaleFactor;
    int  _preferredLineLength;
    NSString * _softLineBreak;
    NSString * _truncationToken;
}

@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) int preferredLineLength;
@property (nonatomic, copy) NSString *softLineBreak;
@property (nonatomic, copy) NSString *truncationToken;

+ (id)defaultHelper;

- (void).cxx_destruct;
- (BOOL)_isTextLongerThanPreferredLine:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 minimumScaleFactor:(float)arg3;
- (id)displayableTextForTitle:(id)arg1 intent:(int)arg2;
- (id)init;
- (float)minimumScaleFactor;
- (int)preferredLineLength;
- (void)setMinimumScaleFactor:(float)arg1;
- (void)setPreferredLineLength:(int)arg1;
- (void)setSoftLineBreak:(id)arg1;
- (void)setTruncationToken:(id)arg1;
- (id)softLineBreak;
- (id)titleForDisplayableText:(id)arg1 titleCategory:(int)arg2 options:(unsigned int)arg3;
- (id)truncationToken;

@end
