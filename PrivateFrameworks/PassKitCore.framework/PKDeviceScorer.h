/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDeviceScorer : NSObject {
    NSString * _cardholderName;
    NSData * _challengeResponse;
    NSData * _cryptogram;
    NSData * _nonce;
    NSString * _phoneNumber;
    ACAccount * _primaryAppleAccount;
    NSString * _seid;
}

@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, retain) ACAccount *primaryAppleAccount;

- (void).cxx_destruct;
- (id)cardholderName;
- (void)deviceScoreWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 secureElementID:(id)arg4;
- (id)phoneNumber;
- (id)primaryAppleAccount;
- (id)scorer;
- (void)setCardholderName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPrimaryAppleAccount:(id)arg1;

@end
