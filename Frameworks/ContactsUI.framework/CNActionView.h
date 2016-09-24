/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNActionView : UIView <UIGestureRecognizerDelegate> {
    NSObject<CNActionViewProtocol> * _actionDelegate;
    NSArray * _activatedContstrants;
    BOOL  _disabled;
    UILongPressGestureRecognizer * _highlightGestureRecognizer;
    BOOL  _highlighted;
    UIImage * _image;
    UIImageView * _imageView;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIView * _platterView;
    int  _style;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSString * _title;
    UILabel * _titleLabel;
    NSString * _type;
}

@property (nonatomic) NSObject<CNActionViewProtocol> *actionDelegate;
@property (nonatomic, retain) NSArray *activatedContstrants;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *highlightGestureRecognizer;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) UIView *platterView;
@property (nonatomic) int style;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *type;

+ (id)borderColorForDisabledBoldState;
+ (id)contentColorForDisabledBoldState;
+ (id)contentColorForDisabledVibrantDarkState;
+ (void)fadeInView:(id)arg1;

- (void).cxx_destruct;
- (id)actionDelegate;
- (id)activatedContstrants;
- (void)didMoveToWindow;
- (BOOL)disabled;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleHighlightGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)highlightGestureRecognizer;
- (BOOL)highlighted;
- (id)image;
- (id)imageView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (float)intrinsicContentWidth;
- (void)layoutSubviews;
- (id)longPressGestureRecognizer;
- (id)platterView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPlatterView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForTitleLabelForFont:(id)arg1;
- (void)setActionDelegate:(id)arg1;
- (void)setActivatedContstrants:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setDisabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlightGestureRecognizer:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setType:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (int)style;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)tapGestureRecognizer;
- (id)title;
- (id)titleLabel;
- (id)type;
- (void)updateImageViewStateAnimated:(BOOL)arg1;
- (void)updateLabelStateAnimated:(BOOL)arg1;
- (void)updatePlatterViewStateAnimated:(BOOL)arg1;

@end
