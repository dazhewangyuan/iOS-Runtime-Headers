/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCBReader : OCDEncryptedReader {
    struct OcBinaryReader { int (**x1)(); } * mBinaryReader;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; int x20; } * mFile;
}

@property (nonatomic) struct OcBinaryReader { int (**x1)(); }*binaryReader;
@property (nonatomic, readonly) struct OCCEncryptionInfoReader { int (**x1)(); }*encryptionInfoReader;
@property (nonatomic) struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; int x20; }*file;

- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { int (**x1)(); char *x2; char *x3; char *x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (id)allocDecryptorWithCryptoKey:(struct OCCCryptoKey { int (**x1)(); char *x2; char *x3; char *x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1 baseOutputFilename:(id)arg2;
- (struct OcBinaryReader { int (**x1)(); }*)binaryReader;
- (void)closeFile;
- (void)dealloc;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; int x20; }*)file;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (bool)isBinaryReader;
- (id)read;
- (void)restartReaderToUseDecryptedDocument;
- (BOOL)retainDecryptorWithErrorCode:(int*)arg1;
- (void)setBinaryReader:(struct OcBinaryReader { int (**x1)(); }*)arg1;
- (void)setFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; int x20; }*)arg1;
- (BOOL)start;

@end
