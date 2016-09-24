/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountIdentifier;
    BOOL  _checkoutWithPlay;
    int  _downloadIdentifier;
    NSNumber * _rentalKeyIdentifier;
    BOOL  _shouldValidateRentalInfo;
    NSArray * _sinfs;
}

@property (readonly) NSNumber *accountIdentifier;
@property (getter=shouldCheckoutWithPlay, nonatomic) BOOL checkoutWithPlay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int downloadIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (nonatomic) BOOL shouldValidateRentalInfo;
@property (readonly) NSArray *sinfs;
@property (readonly) Class superclass;

- (id)accountIdentifier;
- (id)copyXPCEncoding;
- (void)dealloc;
- (int)downloadIdentifier;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithDownloadIdentifier:(int)arg1;
- (id)initWithSinfs:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)rentalKeyIdentifier;
- (void)setCheckoutWithPlay:(BOOL)arg1;
- (void)setShouldValidateRentalInfo:(BOOL)arg1;
- (BOOL)shouldCheckoutWithPlay;
- (BOOL)shouldValidateRentalInfo;
- (id)sinfs;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithConnectionResponseBlock:(id /* block */)arg1;

@end
