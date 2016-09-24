/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsLocationShareCell : CKDetailsCell <CKDetailsCell> {
    double  _offerTimeRemaining;
    BOOL  _showOfferTimeRemaining;
    UILabel * _timeRemainingLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) double offerTimeRemaining;
@property (nonatomic) BOOL showOfferTimeRemaining;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *timeRemainingLabel;

+ (float)preferredHeight;
+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)offerTimeRemaining;
- (void)prepareForReuse;
- (void)setOfferTimeRemaining:(double)arg1;
- (void)setShowOfferTimeRemaining:(BOOL)arg1;
- (void)setTimeRemainingLabel:(id)arg1;
- (BOOL)showOfferTimeRemaining;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeRemainingLabel;
- (id)timeStringForTimeInterval:(double)arg1;

@end
