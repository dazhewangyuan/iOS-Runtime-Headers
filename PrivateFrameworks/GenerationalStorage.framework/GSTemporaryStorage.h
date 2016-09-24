/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSTemporaryStorage : NSObject <GSAdditionStoring, GSAdditionStoringPrivate> {
    NSURL * _documentURL;
    NSURL * _libraryURL;
    int  _lockFd;
    NSURL * _stagingURL;
}

@property (retain) NSURL *documentURL;
@property (nonatomic, readonly) NSURL *libraryURL;
@property (nonatomic, readonly) <NSCopying><NSSecureCoding> *persistentIdentifier;

- (id)URLforReplacingItemWithError:(id*)arg1;
- (id)_URLForNameSpace:(id)arg1 createIfNeeded:(BOOL)arg2 allowMissing:(BOOL)arg3 error:(id*)arg4;
- (BOOL)__lockWithFlags:(int)arg1 error:(id*)arg2;
- (id)_enumerateItemsAtURL:(id)arg1;
- (void)_protectPath:(id)arg1;
- (BOOL)_readLock:(id*)arg1;
- (void)_unlock;
- (void)_unprotectPath:(id)arg1;
- (BOOL)_writeLock:(id*)arg1;
- (id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
- (id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
- (void)cleanupStagingURL:(id)arg1;
- (void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)description;
- (id)documentURL;
- (struct NSEnumerator { Class x1; }*)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned int)arg2 withoutOptions:(unsigned int)arg3 ordering:(int)arg4;
- (void)finalize;
- (id)getAdditionDictionary:(id)arg1 error:(id*)arg2;
- (unsigned int)hash;
- (id)init;
- (id)initWithLibraryURL:(id)arg1 forItemAtURL:(id)arg2 error:(id*)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)libraryURL;
- (BOOL)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (id)persistentIdentifier;
- (id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id*)arg4;
- (void)removeAdditions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (BOOL)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (BOOL)setAdditionOptions:(id)arg1 value:(unsigned int)arg2 error:(id*)arg3;
- (void)setDocumentURL:(id)arg1;
- (id)stagingURLforCreatingAdditionWithError:(id*)arg1;

@end
