/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStarRatingView : UIView {
    double  _elementSpacing;
    UIImageView * _ratingStarsImageView;
    UILabel * _textLabel;
}

@property (nonatomic) double elementSpacing;
@property (nonatomic, retain) UIImage *ratingStarsImage;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (float)elementSpacing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)ratingStarsImage;
- (void)setBackgroundColor:(id)arg1;
- (void)setElementSpacing:(float)arg1;
- (void)setRatingStarsImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textLabel;

@end
