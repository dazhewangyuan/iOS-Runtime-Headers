/* Generated by RuntimeBrowser.
 */

@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>

@required

- (BOOL)addInteractions:(NSArray *)arg1 bundleId:(NSString *)arg2 error:(id*)arg3;
- (void)addInteractions:(void *)arg1 bundleId:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (BOOL)addSearchableItems:(NSArray *)arg1 error:(id*)arg2;
- (void)addSearchableItems:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (BOOL)clearCachesFully:(BOOL)arg1 error:(id*)arg2;
- (void)clearCachesFully:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (BOOL)daemonExit:(id*)arg1;
- (void)daemonExitWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSpotlightReferencesWithBundleIdentifier:(void *)arg1 domainIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (BOOL)drainQueueCompletely:(id*)arg1;
- (void)drainQueueCompletelyWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSNumber *)emailAddressIsSignificant:(NSString *)arg1 error:(id*)arg2;
- (void)emailAddressIsSignificant:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (NSArray *)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 error:(id*)arg6;
- (void)predictedCCEmailAddressesWithToAddresses:(void *)arg1 ccAddresses:(void *)arg2 fromAddress:(void *)arg3 date:(void *)arg4 bounds:(void *)arg5 withCompletion:(void *)arg6; // needs 6 arg types, found 12: NSArray *, NSArray *, NSString *, double, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 error:(id*)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(void *)arg1 ccAddresses:(void *)arg2 fromAddress:(void *)arg3 date:(void *)arg4 bounds:(void *)arg5 withCompletion:(void *)arg6; // needs 6 arg types, found 12: NSArray *, NSArray *, NSString *, double, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)removeAllStoredPseudoContacts:(id*)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (BOOL)resetConfirmationAndRejectionHistory:(id*)arg1;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (BOOL)sendRTCLogs:(id*)arg1;
- (BOOL)sleep:(id*)arg1;
- (void)sleepWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)suggestEventsInFutureLimitTo:(unsigned int)arg1 error:(id*)arg2;
- (NSArray *)suggestEventsInFutureLimitTo:(unsigned int)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)suggestEventsInFutureLimitTo:(void *)arg1 options:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestEventsInFutureLimitTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned int)arg3 error:(id*)arg4;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned int)arg3 options:(unsigned int)arg4 error:(id*)arg5;
- (void)suggestEventsStartingAt:(void *)arg1 endingAt:(void *)arg2 limitTo:(void *)arg3 options:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSDate *, NSDate *, unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestEventsStartingAt:(void *)arg1 endingAt:(void *)arg2 limitTo:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSDate *, NSDate *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned int)arg4 error:(id*)arg5;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned int)arg4 options:(unsigned int)arg5 error:(id*)arg6;
- (void)suggestEventsStartingAt:(void *)arg1 endingAt:(void *)arg2 prefix:(void *)arg3 limitTo:(void *)arg4 options:(void *)arg5 withCompletion:(void *)arg6; // needs 6 arg types, found 12: NSDate *, NSDate *, NSString *, unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suggestEventsStartingAt:(void *)arg1 endingAt:(void *)arg2 prefix:(void *)arg3 limitTo:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSDate *, NSDate *, NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned int)arg3 error:(id*)arg4;
- (void)suggestionsFromRFC822Data:(void *)arg1 source:(void *)arg2 options:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSData *, NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
