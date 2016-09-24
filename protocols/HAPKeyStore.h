/* Generated by RuntimeBrowser.
 */

@protocol HAPKeyStore <NSObject>

@required

- (BOOL)deserializeKeyPair:(NSData *)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4;
- (BOOL)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
- (BOOL)getControllerKeyPair:(id*)arg1 username:(id*)arg2 error:(id*)arg3;
- (BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(BOOL)arg5 error:(id*)arg6;
- (BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(BOOL)arg4 error:(id*)arg5;
- (BOOL)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
- (BOOL)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;
- (NSData *)readPublicKeyForAccessoryName:(NSString *)arg1 registeredWithHomeKit:(BOOL*)arg2 error:(id*)arg3;
- (BOOL)registerAccessoryWithHomeKit:(NSString *)arg1 error:(id*)arg2;
- (BOOL)removeAccessoryKeyForName:(NSString *)arg1 error:(id*)arg2;
- (BOOL)removeAllAccessoryKeys:(id*)arg1;
- (BOOL)removeControllerKeyPairForIdentifier:(NSString *)arg1 leaveTombstone:(BOOL)arg2 error:(id*)arg3;
- (BOOL)removeControllerKeyPairWithError:(id*)arg1;
- (BOOL)saveKeyPair:(NSData *)arg1 username:(NSString *)arg2 syncable:(BOOL)arg3 error:(id*)arg4;
- (BOOL)savePublicKey:(NSData *)arg1 forAccessoryName:(NSString *)arg2 error:(id*)arg3;
- (BOOL)updateActiveControllerPairingIdentifier:(NSString *)arg1;
- (BOOL)updateCurrentiCloudIdentifier:(NSString *)arg1 controllerPairingIdentifier:(NSString *)arg2 error:(id*)arg3;

@optional

- (BOOL)deleteAllPeripheralIdentifiers:(id*)arg1;
- (BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)getPeripherialIdentifiersAndAccessoryNames;
- (NSUUID *)readPeripheralIdentifierForAccessoryIdentifier:(NSString *)arg1 protocolVersion:(unsigned int*)arg2 resumeSessionID:(unsigned int*)arg3 error:(id*)arg4;
- (BOOL)savePeripheralIdentifier:(NSUUID *)arg1 forAccessoryIdentifier:(NSString *)arg2 error:(id*)arg3;
- (BOOL)updatePeripheralIdentifier:(NSUUID *)arg1 forAccessoryIdentifier:(NSString *)arg2 protocolVersion:(unsigned int)arg3 previousVersion:(unsigned int*)arg4 resumeSessionID:(unsigned int)arg5 error:(id*)arg6;

@end
