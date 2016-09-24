/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUToolbarAppearance : NSObject <NSCopying> {
    NSMutableDictionary * _backgroundImages;
    NSMutableDictionary * _shadowImages;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *tintColor;

+ (id)defaultToolbarAppearance;

- (id)backgroundImageForPosition:(int)arg1 barMetrics:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)enumerateBackgroundImagesUsingBlock:(id /* block */)arg1;
- (void)enumerateShadowImagesUsingBlock:(id /* block */)arg1;
- (void)setBackgroundImage:(id)arg1 forPosition:(int)arg2 barMetrics:(int)arg3;
- (void)setShadowImage:(id)arg1 forPosition:(int)arg2;
- (void)setTintColor:(id)arg1;
- (id)shadowImageForPosition:(int)arg1;
- (void)styleToolbar:(id)arg1;
- (id)tintColor;

@end
