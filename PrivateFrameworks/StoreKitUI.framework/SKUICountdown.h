/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICountdown : NSObject {
    NSURL * _URL;
    <SKUIArtworkProviding> * _artworkProvider;
    unsigned int  _dateFormat;
    <SKUIArtworkProviding> * _endArtworkProvider;
    NSDate * _endDate;
    int  _finalValue;
    UIColor * _flapBottomColor;
    UIColor * _flapTopColor;
    BOOL  _flapped;
    UIColor * _fontColor;
    int  _initialValue;
    BOOL  _isLoaded;
    NSString * _numberFormat;
    int  _rate;
    NSDate * _startDate;
    int  _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) <SKUIArtworkProviding> *artworkProvider;
@property (nonatomic) unsigned int dateFormat;
@property (nonatomic, retain) <SKUIArtworkProviding> *endArtworkProvider;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) int finalValue;
@property (nonatomic, copy) UIColor *flapBottomColor;
@property (nonatomic, copy) UIColor *flapTopColor;
@property (getter=isFlapped, nonatomic) BOOL flapped;
@property (nonatomic, copy) UIColor *fontColor;
@property (nonatomic) int initialValue;
@property (nonatomic, copy) NSString *numberFormat;
@property (nonatomic) int rate;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)URL;
- (id)artworkProvider;
- (unsigned int)dateFormat;
- (id)endArtworkProvider;
- (id)endDate;
- (int)finalValue;
- (id)flapBottomColor;
- (id)flapTopColor;
- (id)fontColor;
- (id)initWithCountdownDictionary:(id)arg1;
- (int)initialValue;
- (BOOL)isFlapped;
- (BOOL)isLoaded;
- (id)numberFormat;
- (int)rate;
- (void)setArtworkProvider:(id)arg1;
- (void)setDateFormat:(unsigned int)arg1;
- (void)setEndArtworkProvider:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFinalValue:(int)arg1;
- (void)setFlapBottomColor:(id)arg1;
- (void)setFlapTopColor:(id)arg1;
- (void)setFlapped:(BOOL)arg1;
- (void)setFontColor:(id)arg1;
- (void)setInitialValue:(int)arg1;
- (void)setNumberFormat:(id)arg1;
- (void)setRate:(int)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(int)arg1;
- (void)setURL:(id)arg1;
- (id)startDate;
- (int)type;
- (void)updateWithDictionary:(id)arg1;

@end
