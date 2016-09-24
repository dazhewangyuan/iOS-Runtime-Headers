/* Generated by RuntimeBrowser.
 */

@protocol GSAdditionStoring

@required

- (NSURL *)URLforReplacingItemWithError:(id*)arg1;
- (GSAddition *)additionWithName:(NSString *)arg1 inNameSpace:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)additionsWithNames:(NSArray *)arg1 inNameSpace:(NSString *)arg2 error:(id*)arg3;
- (void)cleanupStagingURL:(NSURL *)arg1;
- (void)createAdditionStagedAtURL:(void *)arg1 creationInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GSAddition *, NSError *, void*
- (NSURL *)documentURL;
- (struct NSEnumerator { Class x1; }*)enumeratorForAdditionsInNameSpace:(NSString *)arg1 withOptions:(unsigned int)arg2 withoutOptions:(unsigned int)arg3 ordering:(int)arg4;
- (<NSCopying><NSSecureCoding> *)persistentIdentifier;
- (NSURL *)prepareAdditionCreationWithItemAtURL:(NSURL *)arg1 byMoving:(BOOL)arg2 creationInfo:(NSDictionary *)arg3 error:(id*)arg4;
- (void)removeAdditions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)removeAllAdditionsForNamespaces:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (BOOL)replaceDocumentWithContentsOfAddition:(GSAddition *)arg1 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(NSURL *)arg1 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (void)setDocumentURL:(NSURL *)arg1;
- (NSURL *)stagingURLforCreatingAdditionWithError:(id*)arg1;

@end
