/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipFileArchive : TSUZipArchive {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned int  _archiveLength;
    TSUZipFileDescriptorWrapper * _fdWrapper;
    NSURL * _temporaryDirectoryURL;
}

+ (BOOL)isZipArchiveAtFD:(int)arg1;
+ (BOOL)isZipArchiveAtURL:(id)arg1 error:(id*)arg2;
+ (void)readArchiveFromURL:(id)arg1 options:(unsigned int)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned int)archiveLength;
- (BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id*)arg2;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initForReadingFromURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
- (BOOL)isValid;
- (id)newArchiveReadChannel;
- (BOOL)openWithURL:(id)arg1 error:(id*)arg2;
- (void)removeTemporaryDirectory;
- (BOOL)reopenWithTemporaryURL:(id)arg1 error:(id*)arg2;

@end
