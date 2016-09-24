/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBlendingHighlightView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    NSMutableArray * _blendingViews;
    double  _cornerRadius;
}

@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;

- (void).cxx_destruct;
- (float)cornerRadius;
- (id)initWithCompositingBurnColor:(id)arg1 plusDColor:(id)arg2;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;
- (void)layoutSubviews;
- (void)setCornerRadius:(float)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPressed:(BOOL)arg1;

@end
