/* Generated by RuntimeBrowser.
 */

@protocol CDPDDeviceSecretValidatorDelegate <NSObject>

@required

- (void)secretValidator:(void *)arg1 recoverSecureBackupWithContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPDDeviceSecretValidator *, CDPDSecureBackupRecoveryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (BOOL)secretValidator:(CDPDDeviceSecretValidator *)arg1 shouldContinueValidationAfterError:(NSError *)arg2;

@optional

- (void)secretValidator:(void *)arg1 didFailRecovery:(void *)arg2 withError:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: CDPDDeviceSecretValidator *, CDPDevice *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)secretValidator:(void *)arg1 didFailRecoveryWithErrors:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPDDeviceSecretValidator *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (BOOL)secretValidator:(CDPDDeviceSecretValidator *)arg1 shouldAcceptRecoveryError:(id*)arg2;
- (void)secretValidatorWillAttemptRecovery;

@end
