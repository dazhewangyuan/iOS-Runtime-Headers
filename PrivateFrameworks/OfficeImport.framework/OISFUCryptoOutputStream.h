/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUCryptoOutputStream : NSObject <SFUOutputStream> {
    <SFUOutputStream> * mBaseStream;
    BOOL  mComputeCrc32;
    unsigned int  mCrc32;
    OISFUCryptor * mCryptor;
    BOOL  mIsClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (unsigned int)encodedLengthForDataLength:(unsigned int)arg1 key:(id)arg2;

- (BOOL)canCreateInputStream;
- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (unsigned int)crc32;
- (void)dealloc;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3;
- (id)inputStream;
- (int)offset;
- (void)seekToOffset:(int)arg1 whence:(int)arg2;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end
