/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProviderResponse : NSObject {
    VSAccount * _account;
    VSAccountMetadata * _accountMetadata;
    BOOL  _didCreateAccount;
    VSImageLoadOperation * _logoLoadOperation;
}

@property (nonatomic, retain) VSAccount *account;
@property (nonatomic, copy) VSAccountMetadata *accountMetadata;
@property (nonatomic) BOOL didCreateAccount;
@property (nonatomic, retain) VSImageLoadOperation *logoLoadOperation;

- (void).cxx_destruct;
- (id)account;
- (id)accountMetadata;
- (id)description;
- (BOOL)didCreateAccount;
- (id)logoLoadOperation;
- (void)setAccount:(id)arg1;
- (void)setAccountMetadata:(id)arg1;
- (void)setDidCreateAccount:(BOOL)arg1;
- (void)setLogoLoadOperation:(id)arg1;

@end
