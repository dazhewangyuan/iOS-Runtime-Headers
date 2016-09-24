/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSBook : NSObject <NSSecureCoding> {
    NSURL * _artworkURL;
    NSString * _author;
    NSDate * _datePurchased;
    NSString * _genre;
    unsigned int  _purchaseHistoryID;
    NSString * _redownloadParameters;
    unsigned int  _storeID;
    NSString * _title;
    BOOL  _vppLicensed;
    NSString * _vppOrganizationDisplayName;
    NSString * _vppOrganizationID;
}

@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSDate *datePurchased;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic) unsigned int purchaseHistoryID;
@property (nonatomic, copy) NSString *redownloadParameters;
@property (nonatomic) unsigned int storeID;
@property (nonatomic, copy) NSString *title;
@property (getter=isVPPLicensed, nonatomic) BOOL vppLicensed;
@property (nonatomic, copy) NSString *vppOrganizationDisplayName;
@property (nonatomic, copy) NSString *vppOrganizationID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)author;
- (id)datePurchased;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (id)initWithCoder:(id)arg1;
- (BOOL)isVPPLicensed;
- (unsigned int)purchaseHistoryID;
- (id)redownloadParameters;
- (void)setArtworkURL:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setDatePurchased:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setPurchaseHistoryID:(unsigned int)arg1;
- (void)setRedownloadParameters:(id)arg1;
- (void)setStoreID:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (void)setVppLicensed:(BOOL)arg1;
- (void)setVppOrganizationDisplayName:(id)arg1;
- (void)setVppOrganizationID:(id)arg1;
- (unsigned int)storeID;
- (id)title;
- (id)vppOrganizationDisplayName;
- (id)vppOrganizationID;

@end
