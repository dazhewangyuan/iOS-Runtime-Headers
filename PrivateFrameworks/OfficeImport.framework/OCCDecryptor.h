/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCCDecryptor : NSObject {
    NSString * mBaseStringForOutputFilename;
    NSString * mOutputFilename;
    struct OCCStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; } * mStreamer;
    OITSUTemporaryDirectory * mTempDirectory;
}

@property (nonatomic, readonly) NSString *outputFilename;

+ (id)agileDescriptorNamespace;
+ (id)agilePasswordKeyEncryptorNamespace;
+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id*)arg2 tempDirectory:(id*)arg3;

- (void)dealloc;
- (BOOL)decrypt;
- (BOOL)decryptIntoOutputFile;
- (void)deleteOutputFile;
- (id)initWithStreamer:(struct OCCStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)arg1;
- (BOOL)isReadProtectedUsingDefaultPassphrase;
- (id)outputFilename;
- (BOOL)verifyPassphrase:(id)arg1;

@end
